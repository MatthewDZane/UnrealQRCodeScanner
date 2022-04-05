// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Unreal Engine Headers
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TextureRenderTarget2D.h"

// Third Party Library Headers
#if PLATFORM_WINDOWS
	#include <zbar.h>
#endif

#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

#include "zxing/common/Counted.h"
#include "zxing/Binarizer.h"
#include "zxing/MultiFormatReader.h"
#include "zxing/Result.h"
#include "zxing/ReaderException.h"
#include "zxing/common/GlobalHistogramBinarizer.h"
#include "zxing/Exception.h"
#include "zxing/common/IllegalArgumentException.h"
#include "zxing/BinaryBitmap.h"
#include "zxing/DecodeHints.h"
#include "zxing/qrcode/QRCodeReader.h"
#include "zxing/MultiFormatReader.h"
#include "zxing/MatSource.h"

// Standard Lib Headers
#include <vector>
#include <iostream>

#include "OpenCVSceneCapture.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(OpenCVSceneCapture, Log, All);

struct FDecodedObject
{

public:
	// Type of qr code detected by ZBar
	FString type;

	// Data decoded by qr code 
	FString data;

	// Pixel locations of detected image
	std::vector <cv::Point> location;

	// Equals overloader for object comparison
	bool operator==(const FDecodedObject& obj) const
	{
		return type.Equals(obj.type) && data.Equals(obj.data);
	}
};

UCLASS()
class OPENCV_API AOpenCVSceneCapture : public AActor
{
	GENERATED_BODY()

protected:
	bool bSceneCaptured = false;
	bool bSceneScanned = true;
	
	cv::Mat Image;

	TArray<FDecodedObject> Decoded;

public:
	AOpenCVSceneCapture();
	~AOpenCVSceneCapture();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = OpenCVSceneCapture)
		class AActor* xrSimulationActor;

	// Container for USceneCapture2D component
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = OpenCVSceneCapture)
		class USceneCaptureComponent2D* sceneCaptureComponent;


	// Render Target Sizes for different platforms
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OpenCVSceneCapture)
		FVector2D Windows_Render_Target_Size = FVector2D(1024, 1024);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OpenCVSceneCapture)
		FVector2D Hololens_Render_Target_Size = FVector2D(1024, 1024);


	// Container for visible static mesh attached to actor
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = OpenCVSceneCapture)
		UStaticMeshComponent* staticMeshComponent;


	// Image texture resolution to be captured by USceneCapture2D component
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = OpenCVSceneCapture)
		int32 resolutionWidth = 256;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = OpenCVSceneCapture)
		int32 resolutionHeight = 256;


	// Enable USceneCapture2D component to render texture
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = OpenCVSceneCapture)
		bool captureEnabled;


	// Camera Material Instance
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		UMaterialInstanceDynamic* Camera_Mat;

		const bool IS_DEBUGGING = true;

		bool bReadPixelsStarted = false;
		FRenderCommandFence ReadPixelFence;

		TArray<FColor> PixelColors;

		TArray<uint8> pixelData;

		// Variables for reading specific pixels of scene capture
		int32 matLength;

		int startYMatPixel;
		int startXMatPixel;

		int endYMatPixel;
		int endXMatPixel;

		// Blueprint Event called every time the scene frame is updated
	UFUNCTION(BlueprintImplementableEvent, Category = OpenCVSceneCapture)
		void OnNextSceneFrame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called when game ends
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:

	// Scene Capture functions
	cv::Mat captureSceneToMat();

	void CaptureScene();
	void ScanScene();
	void ReadPixels();

	void printToScreen(FString str, FColor color, float duration = 1.0f);
	
#if PLATFORM_WINDOWS
	// ZBar functions
	void decode(TArray<FDecodedObject>& decodedObjects);
	void displayBox(TArray<FDecodedObject>& decodedObjects);
#elif defined(__aarch64__) || defined(_M_ARM64)
	// ZXing functions
	void decodeZXing();
	cv::Point toOpenCvPoint(zxing::Ref<zxing::ResultPoint> resultPoint);
#endif


};
