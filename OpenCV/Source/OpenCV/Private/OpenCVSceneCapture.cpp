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

	Worker = new SceneCaptureQRCodeWorker();
}

AOpenCVSceneCapture::~AOpenCVSceneCapture() {
	delete Worker;
}


// Called when the game starts or when spawned
void AOpenCVSceneCapture::BeginPlay()
{
	
#if PLATFORM_WINDOWS
	sceneCaptureComponent->TextureTarget->InitAutoFormat(Windows_Render_Target_Size.X,
														 Windows_Render_Target_Size.Y);
	sceneCaptureComponent->TextureTarget->UpdateResourceImmediate();
#elif defined(__aarch64__) || defined(_M_ARM64)
	sceneCaptureComponent->TextureTarget->InitAutoFormat(Hololens_Render_Target_Size.X,
														 Hololens_Render_Target_Size.Y);
	sceneCaptureComponent->TextureTarget->UpdateResourceImmediate();
#endif

	resolutionWidth = sceneCaptureComponent->TextureTarget->SizeX;
	resolutionHeight = sceneCaptureComponent->TextureTarget->SizeY;

	matLength = resolutionWidth < resolutionHeight ? resolutionWidth : resolutionHeight;

	startYMatPixel = (resolutionHeight - matLength) / 2;
	startXMatPixel = (resolutionWidth - matLength) / 2;

	endYMatPixel = startYMatPixel + matLength;
	endXMatPixel = startXMatPixel + matLength;

	//sceneCaptureComponent->TextureTarget->bHDR_DEPRECATED = true;
	sceneCaptureComponent->TextureTarget->bGPUSharedFlag = true;

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

		if (bReadPixelsStarted && ReadPixelFence.IsFenceComplete() && !Worker->IsInputReady()) {
			
			if (hasValidScene) {
				cv::Mat inputImage = captureSceneToMat();

				// Start Scene Capture QR Code Worker thread
				Worker->Start(inputImage);

				hasValidScene = false;
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
cv::Mat AOpenCVSceneCapture::captureSceneToMat() {

	// Create container for pixels
	//TArray<FColor> imagePixels;

	// Populate RGBA8 texture pixels into buffer
	bool readPixelResult = PixelColors.Num() > 0;//textureResource->ReadPixels(imagePixels);

	// Pixel read unsuccessful
	if (!readPixelResult && IS_DEBUGGING) {
		UE_LOG(OpenCVSceneCapture, Warning, TEXT("Failed read pixels from render target resource"));
	}

	// Shink array to number of pixels read
	PixelColors.Shrink();

	pixelData.Reset();
	cv::Mat inputImage;

#if defined(__aarch64__) || defined(_M_ARM64)
	pixelData.Reserve(PixelColors.Num());
	// Copy texture render pixels into array with BGR format OpenCV expects
	// Copy only the section of pixels that makes a square shape in the middle of the whole capture
	for (int i = startYMatPixel; i < endYMatPixel; i++) {
		for (int j = startXMatPixel; j < endXMatPixel; j++) {
			int index = i * resolutionWidth + j;
			uint8 grayScale = (uint8)((PixelColors[index].B + PixelColors[index].G + PixelColors[index].R) / 3.0f);
			pixelData.Add(grayScale);
		}
	}

	// Construct OpenCV image defined by image width, height, 8-bit pixels, and pointer to data
	// XZing needs the grayscale data
	inputImage = cv::Mat(matLength, matLength, CV_8U, pixelData.GetData());
#elif PLATFORM_WINDOWS
	pixelData.Reserve(PixelColors.Num() * 4);
	// Copy texture render pixels into array with BGR format OpenCV expects
	for (int i = 0; i < PixelColors.Num(); i++) {
		pixelData.Append({ PixelColors[i].B, PixelColors[i].G, PixelColors[i].R, 0xff});
	}

	// Construct OpenCv image defined by image width, height, 8-bit 4 color channel pixels, and pointer to data
	inputImage = cv::Mat(matLength, matLength, CV_8UC4, pixelData.GetData());
#endif

	// Return clone to get valid Mat reference since inputImage is invalid after function return
	return inputImage.clone();
}

void AOpenCVSceneCapture::CaptureScene() {
	sceneCaptureComponent->CaptureScene();
	ReadPixels();
	ReadPixelFence.BeginFence();
	bReadPixelsStarted = true;

	hasValidScene = true;
}

void AOpenCVSceneCapture::ReadPixels() {
	//borrowed from RenderTarget::ReadPixels()
	FTextureRenderTargetResource* RenderResource = sceneCaptureComponent->TextureTarget->GameThread_GetRenderTargetResource();

	// Read the render target surface data back.	
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


