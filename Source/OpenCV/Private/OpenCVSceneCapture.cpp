//**********************************************************************************
//
//  This Unreal Engine Actor handles different implementations for Windows and the Hololens.
//  This Actor captures in-game scene frames, converts the frames into OpenCV Mats to be
//  processed by image detection libraries. ZBar is not currently integrated with the 
//  Hololens so frames are decoded with ZXing. The output decoded frames are then converted
//  into UTexture2D objects for use in blueprints. Capture must be enabled either through actor
//  properties in the editor or through the blueprint exposed captureEnabled flag. 
//
//**********************************************************************************

#include "OpenCVSceneCapture.h"

#include "Components/SceneCaptureComponent2D.h"
#include "Components/SphereComponent.h"
#include "Engine/TextureRenderTarget2D.h"

DEFINE_LOG_CATEGORY(OpenCVSceneCapture)

using namespace std;

// Sets default values
AOpenCVSceneCapture::AOpenCVSceneCapture()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize features exposed to blueprint
	captureEnabled = true;

	// Attach scenecapture camera to actor and set as root
	sceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Scene Capture"));
	sceneCaptureComponent->bCaptureEveryFrame = false;
	
	// Create Static Mesh Component and attach Cube to camera
	staticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	staticMeshComponent->SetStaticMesh(cubeMesh);
	staticMeshComponent->AttachToComponent(sceneCaptureComponent, FAttachmentTransformRules::KeepRelativeTransform);
	staticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// Set camera to as root
	SetRootComponent(sceneCaptureComponent);
}

AOpenCVSceneCapture::~AOpenCVSceneCapture() {

}

// Called when the game starts or when spawned
void AOpenCVSceneCapture::BeginPlay()
{
	Camera_RenderTarget = sceneCaptureComponent->TextureTarget;
#if PLATFORM_WINDOWS
	Camera_RenderTarget->InitAutoFormat(Windows_Render_Target_Size.X,
														 Windows_Render_Target_Size.Y);
	Camera_RenderTarget->UpdateResourceImmediate();
#elif defined(__aarch64__) || defined(_M_ARM64)
	Camera_RenderTarget->InitAutoFormat(Hololens_Render_Target_Size.X,
														 Hololens_Render_Target_Size.Y);
	Camera_RenderTarget->UpdateResourceImmediate();
#endif

	resolutionWidth = Camera_RenderTarget->SizeX;
	resolutionHeight = Camera_RenderTarget->SizeY;

	matLength = resolutionWidth < resolutionHeight ? resolutionWidth : resolutionHeight;

	startYMatPixel = (resolutionHeight - matLength) / 2;
	startXMatPixel = (resolutionWidth - matLength) / 2;

	endYMatPixel = startYMatPixel + matLength;
	endXMatPixel = startXMatPixel + matLength;

	//sceneCaptureComponent->TextureTarget->bHDR_DEPRECATED = true;
	Camera_RenderTarget->bGPUSharedFlag = true;

	Camera_Texture2D = UTexture2D::CreateTransient(Windows_Render_Target_Size.X, Windows_Render_Target_Size.Y, PF_B8G8R8A8);
#if WITH_EDITORONLY_DATA
	Camera_Texture2D->MipGenSettings = TMGS_NoMipmaps;
#endif
	Camera_Texture2D->SRGB = sceneCaptureComponent->TextureTarget->SRGB;

	CaptureScene();
	
	Super::BeginPlay();
}

// Called every frame
void AOpenCVSceneCapture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
		// Main Driver code for handling OpenCV functionality
		if (captureEnabled) {
			if (IS_DEBUGGING) {
				UE_LOG(OpenCVSceneCapture, Warning, TEXT("Viewport X: %d"), resolutionWidth);
				UE_LOG(OpenCVSceneCapture, Warning, TEXT("Viewport Y: %d"), resolutionHeight);
			}
		
			if (bReadPixelsStarted && ReadPixelFence.IsFenceComplete() && bSceneScanned) {
				if (bSceneCaptured) {
					ScanScene();
				}
				else {
					CaptureScene();
				}
			}
		}

		// Call custom event handler function
		OnNextSceneFrame();
}

void AOpenCVSceneCapture::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}

// Capture scene view from scene capture component and pass image into OpenCV processing
void AOpenCVSceneCapture::captureSceneToMat() {

	// Populate RGBA8 texture pixels into buffer
	bool readPixelResult = PixelColors.Num() > 0;
	
	// Pixel read unsuccessful
	if (!readPixelResult && IS_DEBUGGING) {
		UE_LOG(OpenCVSceneCapture, Warning, TEXT("Failed read pixels from render target resource"));
	}

	// Shink array to number of pixels read
	PixelColors.Shrink();

	TArray<uint8> PixelData;
	PixelData.Reset();

#if defined(__aarch64__) || defined(_M_ARM64)
	cv::Mat GreyInputImage;
	TArray<uint8> GreyPixelData;
	GreyPixelData.Reset();
	
	GreyPixelData.Reserve(matLength * matLength);
	PixelData.Reserve(matLength * matLength * 4);
	
	// Copy texture render pixels into array with BGR format OpenCV expects
	// Copy only the section of pixels that makes a square shape in the middle of the whole capture
	for (int i = startYMatPixel; i < endYMatPixel; i++) {
		for (int j = startXMatPixel; j < endXMatPixel; j++) {
			int index = i * resolutionWidth + j;
			uint8 grayScale = (uint8)(0.114f * PixelColors[index].B + 
									   0.587f * PixelColors[index].G + 
									   0.299f * PixelColors[index].R);
			GreyPixelData.Add(grayScale);

			PixelData.Append({ PixelColors[index].B, PixelColors[index].G, PixelColors[index].R, 0xff});
		}
	}

	// Construct OpenCV image defined by image width, height, 8-bit pixels, and pointer to data
	// XZing needs the grayscale data
	GreyImage = cv::Mat(matLength, matLength, CV_8U, GreyPixelData.GetData()).clone();
	ColorImage = cv::Mat(matLength, matLength, CV_8UC4, PixelData.GetData()).clone();

#elif PLATFORM_WINDOWS
	PixelData.Reserve(PixelColors.Num() * 4);
	// Copy texture render pixels into array with BGR format OpenCV expects
	for (int i = 0; i < PixelColors.Num(); i++) {
		PixelData.Append({ PixelColors[i].B, PixelColors[i].G, PixelColors[i].R, 0xff});
	}

	// Construct OpenCv image defined by image width, height, 8-bit 4 color channel pixels, and pointer to data
	ColorImage = cv::Mat(matLength, matLength, CV_8UC4, PixelData.GetData()).clone();
#endif
}

void AOpenCVSceneCapture::CaptureScene()
{
	sceneCaptureComponent->CaptureScene();
	
	FTextureRenderTargetResource* RenderResource = sceneCaptureComponent->TextureTarget->GameThread_GetRenderTargetResource();
		
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [this, RenderResource] ()
	{
		ReadPixels(RenderResource);
		ReadPixelFence.BeginFence();
		bReadPixelsStarted = true;

		//bSceneScanned = false;
		bSceneCaptured = true;
	});
}

void AOpenCVSceneCapture::ScanScene() {
	bSceneScanned = false;
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [this] ()
	{
		captureSceneToMat();

		// Process and decode scene frames for target platforms
#if defined(__aarch64__) || defined(_M_ARM64)
		// Check that image has elements
		if (!ColorImage.empty() && !GreyImage.empty())
		{
			if (IS_DEBUGGING) {
				UE_LOG(LogTemp, Warning, TEXT("Begin Decoding"));
			}
				decodeZXing();
		}
#elif PLATFORM_WINDOWS
		// Check that image has elements
		if (!ColorImage.empty())
		{
			if (IS_DEBUGGING) {
				UE_LOG(LogTemp, Warning, TEXT("Begin Decoding"));
			}
			
			decode();

			displayBox();

			Decoded.Empty();
		}
#endif

		TArray<FColor> pixels;

		int32 imageResolutionWidth = ColorImage.cols;
		int32 imageResolutionHeight = ColorImage.rows;

		pixels.Init(FColor(0, 0, 0, 255), imageResolutionWidth * imageResolutionHeight);

		// Copy Mat data to Data array
		for (int y = 0; y < imageResolutionHeight; y++)
		{
			for (int x = 0; x < imageResolutionWidth; x++)
			{
				int i = x + y * imageResolutionWidth;
				pixels[i].B = ColorImage.data[i * 4 + 0];
				pixels[i].G = ColorImage.data[i * 4 + 1];
				pixels[i].R = ColorImage.data[i * 4 + 2];
			}
		}

		AsyncTask(ENamedThreads::GameThread, [this, pixels] ()
		{
			// Lock the texture so we can read / write to it
			void* TextureData = Camera_Texture2D->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			const int32 TextureDataSize = pixels.Num() * 4;
			// set the texture data
			FMemory::Memcpy(TextureData, pixels.GetData(), TextureDataSize);
			// Unlock the texture
			Camera_Texture2D->GetPlatformData()->Mips[0].BulkData.Unlock();
			// Apply Texture changes to GPU memory
			Camera_Texture2D->UpdateResource();
		
			bSceneCaptured = false;
			bSceneScanned = true;
		});
	});
}

void AOpenCVSceneCapture::ReadPixels(FTextureRenderTargetResource* RenderResource) {
	//borrowed from RenderTarget::ReadPixels()
	struct FReadSurfaceContext
	{
		FRenderTarget* SrcRenderTarget;
		TArray<FColor>* OutData;
		FIntRect Rect;
		FReadSurfaceDataFlags Flags;
	};

	PixelColors.Reset();
	FReadSurfaceContext Context =
	{
		RenderResource,
		& PixelColors,
		FIntRect(0, 0, RenderResource->GetSizeXY().X, RenderResource->GetSizeXY().Y),
		FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX)
	};

	ENQUEUE_RENDER_COMMAND(ReadSurfaceCommand)(
		[Context](FRHICommandListImmediate& RHICmdList)
		{
			RHICmdList.ReadSurfaceData(
				Context.SrcRenderTarget->GetRenderTargetTexture(),
				Context.Rect,
				*Context.OutData,
				Context.Flags
			);
		}
	);
}

#if PLATFORM_WINDOWS
// Find and decode barcodes and QR codes
void AOpenCVSceneCapture::decode()
{
	// Create zbar scanner
	zbar::ImageScanner scanner;

	// Configure scanner to detect image types
	scanner.set_config(zbar::ZBAR_NONE, zbar::ZBAR_CFG_ENABLE, 1);

	// Convert image to grayscale
	cv::Mat imGray;
	cv::cvtColor(ColorImage, imGray, cv::COLOR_BGR2GRAY);

	// Wrap opencv Mat image data in a zbar image
	zbar::Image image(ColorImage.cols, ColorImage.rows, "Y800", (uchar*)imGray.data, ColorImage.cols * ColorImage.rows);

	// Scan the image for barcodes and QRCodes
	int n = scanner.scan(image);

	if (n <= 0 && IS_DEBUGGING) {
		UE_LOG(LogTemp, Warning, TEXT("No QR Detected"));
		return;
	}

	// Print results
	for (zbar::Image::SymbolIterator symbol = image.symbol_begin(); symbol != image.symbol_end(); ++symbol)
	{
		FDecodedObject obj;

		// Print type and data
		FString type(symbol->get_type_name().c_str());
		FString data(symbol->get_data().c_str());

		obj.type = type;
		obj.data = data;

		// Print data to Log
		if (IS_DEBUGGING) {
			UE_LOG(LogTemp, Warning, TEXT("%s"), *type);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *data);
		}

		// Print data to screen
		static double deltaTime = FApp::GetDeltaTime();
		printToScreen(obj.type, FColor::Green, deltaTime);
		printToScreen(obj.data, FColor::Blue, deltaTime);

		// Obtain location
		for (int i = 0; i < symbol->get_location_size(); i++)
		{
			obj.location.push_back(cv::Point(symbol->get_location_x(i), symbol->get_location_y(i)));
		}

		// Add unique detections to visible property
		Decoded.AddUnique(obj);
	}
}

// Display barcode outline at QR code location
void AOpenCVSceneCapture::displayBox()
{
	// Loop over all decoded objects
	for (int i = 0; i < Decoded.Num(); i++)
	{
		std::vector<cv::Point> points = Decoded[i].location;
		std::vector<cv::Point> hull;

		// If the points do not form a quad, find convex hull
		if (points.size() > 4) {
			convexHull(points, hull);
		}
		else {
			hull = points;
		}

		// Number of points in the convex hull
		int n = hull.size();

		for (int j = 0; j < n; j++)
		{
			line(ColorImage, hull[j], hull[(j + 1) % n], cv::Scalar(255, 0, 0), 2);
		}

	}

}

#elif defined(__aarch64__) || defined(_M_ARM64)
cv::Point AOpenCVSceneCapture::toOpenCvPoint(zxing::Ref<zxing::ResultPoint> resultPoint) {
	return cv::Point(resultPoint->getX(), resultPoint->getY());
}

void AOpenCVSceneCapture::decodeZXing() {
	try {
		// Create luminance source
		zxing::Ref<zxing::LuminanceSource> source = MatSource::create(GreyImage);

		// Search for QR code
		zxing::Ref<zxing::Reader> reader;

		// Create QR code reader object
		reader.reset(new zxing::qrcode::QRCodeReader);

		zxing::Ref<zxing::Binarizer> binarizer(new zxing::GlobalHistogramBinarizer(source));
		zxing::Ref<zxing::BinaryBitmap> bitmap(new zxing::BinaryBitmap(binarizer));
		zxing::Ref<zxing::Result> result(reader->decode(bitmap, zxing::DecodeHints(zxing::DecodeHints::QR_CODE_HINT)));

		// Get result point count
		int resultPointCount = result->getResultPoints()->size();

		for (int j = 0; j < resultPointCount; j++) {
			// Draw circle
			cv::circle(ColorImage, toOpenCvPoint(result->getResultPoints()[j]), 10, cv::Scalar(255, 0, 0), 2);
		}

		// Draw boundary on image
		if (resultPointCount > 1) {

			for (int j = 0; j < resultPointCount; j++) {

				// Get start result point
				zxing::Ref<zxing::ResultPoint> previousResultPoint = (j > 0) ? result->getResultPoints()[j - 1] : result->getResultPoints()[resultPointCount - 1];

				// Draw line
				cv::line(ColorImage, toOpenCvPoint(previousResultPoint), toOpenCvPoint(result->getResultPoints()[j]), cv::Scalar(255, 0, 0), 2, 8);

				// Update previous point
				previousResultPoint = result->getResultPoints()[j];

			}

		}
		
		if (resultPointCount > 0) {

			FString text(result->getText()->getText().c_str());

			if (true) {
				UE_LOG(LogTemp, Warning, TEXT("QR code detected: %s"), *text);
			}

			printToScreen(FString::Printf(TEXT("------------------------------------- QR code detected: %s"), *text), FColor::Green, 2.0f);

			// Draw text
			cv::putText(ColorImage, result->getText()->getText(), toOpenCvPoint(result->getResultPoints()[0]), cv::LINE_4, 1, cv::Scalar(255, 0, 0));

			FDecodedObject obj;

			// Print type and data
			FString type("Qrcode");

			obj.type = type;
			obj.data = text;

			// Add unique detections to visible property
			Decoded.AddUnique(obj);
		}
	}
	catch (const zxing::ReaderException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const zxing::IllegalArgumentException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const zxing::Exception& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
/*
	TArray<FColor> pixels;

	int32 imageResolutionWidth = ColorImage.cols;
	int32 imageResolutionHeight = ColorImage.rows;

	pixels.Init(FColor(0, 0, 0, 255), imageResolutionWidth * imageResolutionHeight);

	// Copy Mat data to Data array
	for (int y = 0; y < imageResolutionHeight; y++)
	{
		for (int x = 0; x < imageResolutionWidth; x++)
		{
			int i = x + (y * imageResolutionWidth);
			pixels[i].B = ColorImage.data[i * 4 + 0];
			pixels[i].G = ColorImage.data[i * 4 + 1];
			pixels[i].R = ColorImage.data[i + 2];
		}
	}
	
	// Lock the texture so we can read / write to it
	void* TextureData = Camera_Texture2D->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	const int32 TextureDataSize = pixels.Num() * 4;
	// set the texture data
	FMemory::Memcpy(TextureData, pixels.GetData(), TextureDataSize);
	// Unlock the texture
	Camera_Texture2D->GetPlatformData()->Mips[0].BulkData.Unlock();
	// Apply Texture changes to GPU memory
	Camera_Texture2D->UpdateResource();*/
	
}
#endif

void AOpenCVSceneCapture::printToScreen(FString str, FColor color, float duration) {
	GEngine->AddOnScreenDebugMessage(1, duration, color, *str);
}
