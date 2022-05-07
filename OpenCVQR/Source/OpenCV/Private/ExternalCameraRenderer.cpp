//**********************************************************************************
//
//  This Unreal Engine Actor handles different implementations for Windows and the Hololens.
//  When run with Windows, the actor sets up video capturing through external cameras 
//  using OpenCV then decodes and detects QR codes using the ZBar library. The output of the 
//  camera and decoding is then converted to a UTexture2D and displayed on a mesh in game for
//  feed preview. Additional blueprint implementation to display the texture is required, examples
//  of which is located in the project content browser.
// 
//  For the Hololens, this actor uses research mode api to access the front left sensor frames
//  and decodes qr codes with ZXing library. The output is also displayed on a mesh to view
//  through the same blueprint implementation. 
// 
//  Important: ToggleARCapture with EARCaptureType::Camera mode must be set to true prior to opening 
//  research mode sensors. A delay is needed after toggle before opening. This can be done by setting
//  an event by timer after the toggle in a blueprint, then spawning this actor into the level.  
//     
//
//**********************************************************************************

#include "ExternalCameraRenderer.h"

#if defined(__aarch64__) || defined(_M_ARM64)
extern "C"
HMODULE LoadLibraryA(
	LPCSTR lpLibFileName
);

#include "zxing/MatSource.cpp"
#endif

using namespace std;

DEFINE_LOG_CATEGORY(ExternalCameraRenderer)


// Sets default values
AExternalCameraRenderer::AExternalCameraRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

	PrimaryActorTick.bCanEverTick = true;
	rootComp = CreateDefaultSubobject<USceneComponent>("Root");
	Screen_Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Screen_Mesh");
	Screen_Mesh->AttachToComponent(rootComp, FAttachmentTransformRules::KeepRelativeTransform);
	SetRootComponent(rootComp);

	// Initialize OpenCV and webcam properties
	isStreamOpen = false;
	VideoSize = FVector2D(640, 480);
	RefreshRate = 30.0f;
	
	CameraID = 0;
	VideoTrackID = 0;
#if PLATFORM_WINDOWS
	cvVideoCapture = cv::VideoCapture();
#endif
}

// Called when the game starts or when spawned
void AExternalCameraRenderer::BeginPlay() {
	Super::BeginPlay();

#if PLATFORM_WINDOWS
	if (!cvVideoCapture.isOpened()){
		cvVideoCapture.open(CameraID);
	}
#endif
	isStreamOpen = true;

	Camera_Texture2D = UTexture2D::CreateTransient(VideoSize.X, VideoSize.Y, PF_B8G8R8A8);
#if WITH_EDITORONLY_DATA
	Camera_Texture2D->MipGenSettings = TMGS_NoMipmaps;
#endif
	Camera_Texture2D->SRGB = Camera_RenderTarget->SRGB;
	
}

void AExternalCameraRenderer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
}


void AExternalCameraRenderer::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	RefreshTimer += DeltaTime;
	if (isStreamOpen && RefreshTimer >= 1.0f / RefreshRate) {
		RefreshTimer -= 1.0f / RefreshRate;
		ReadFrame();
		OnNextVideoFrame();
	}

}

void AExternalCameraRenderer::ReadFrame() {
	// Check texture and render target are initialized before accessing
	if (!Camera_Texture2D || !Camera_RenderTarget) {
		return;
	}
	cv::Mat inputImage;

#if PLATFORM_WINDOWS
	cvVideoCapture.read(inputImage);
#endif

	TArray<FDecodedObject2> decodedObjects;

	// Find and decode barcodes and QR codes
	//decode(inputImage, decodedObjects);

	// Display location
	//displayBox(inputImage, decodedObjects);

	TArray<FColor> pixels;

	int32 imageResolutionWidth = inputImage.cols;
	int32 imageResolutionHeight = inputImage.rows;

	pixels.Init(FColor(0, 0, 0, 255), imageResolutionWidth * imageResolutionHeight);

	// Copy Mat data to Data array
	for (int y = 0; y < imageResolutionHeight; y++)
	{
		for (int x = 0; x < imageResolutionWidth; x++)
		{
			int i = x + (y * imageResolutionWidth);
			pixels[i].B = inputImage.data[i * 3 + 0];
			pixels[i].G = inputImage.data[i * 3 + 1];
			pixels[i].R = inputImage.data[i * 3 + 2];
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
	Camera_Texture2D->UpdateResource();

}

void AExternalCameraRenderer::printToScreen(FString str, FColor color, float duration) {
	GEngine->AddOnScreenDebugMessage(-1, duration, color, *str);
}

