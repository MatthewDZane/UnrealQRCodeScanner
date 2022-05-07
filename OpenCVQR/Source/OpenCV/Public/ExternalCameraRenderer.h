// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#undef check

#if defined(__aarch64__) || defined(_M_ARM64)
	#include "ResearchModeApi.h"
#elif PLATFORM_WINDOWS
	#include <opencv2/highgui.hpp>
#endif


#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

#include "MediaTexture.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExternalCameraRenderer.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(ExternalCameraRenderer, Log, All);

USTRUCT(BlueprintType)
struct FDecodedObject2
{
	GENERATED_USTRUCT_BODY()

public:

	// Type of qr code detected by ZBar
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = ExternalCameraRenderer)
		FString type;

	// Data decoded by qr code 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = ExternalCameraRenderer)
		FString data;

	// Pixel locations of detected image
	std::vector <cv::Point> location;

	// Equals overloader for object comparison
	bool operator==(const FDecodedObject2& obj) const
	{
		return type.Equals(obj.type) && data.Equals(obj.data);
	}

};

UCLASS()
class OPENCVQR_API AExternalCameraRenderer : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AExternalCameraRenderer(const FObjectInitializer& ObjectInitializer);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called when game ends
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		USceneComponent* rootComp;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		UStaticMeshComponent* Screen_Mesh;
	// The device ID opened by the Video Stream
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera, meta = (ClampMin = 0, UIMin = 0))
		int32 CameraID;
	// The device ID opened by the Video Stream
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera, meta = (ClampMin = 0, UIMin = 0))
		int32 VideoTrackID;
	// The rate at which the color data array and video texture is updated (in frames per second)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera, meta = (ClampMin = 0, UIMin = 0))
		float RefreshRate;
	// The refresh timer
	UPROPERTY(BlueprintReadWrite, Category = Camera)
		float RefreshTimer;
	// is the camera stream on
	UPROPERTY(BlueprintReadWrite, Category = Camera)
		bool isStreamOpen;
	// The videos width and height (width, height)
	UPROPERTY(BlueprintReadWrite, Category = Camera)
		FVector2D VideoSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		UMediaPlayer* Camera_MediaPlayer;
	// Camera Media Texture
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		UMediaTexture* Camera_MediaTexture;
	// Camera Render Target
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		UTextureRenderTarget2D* Camera_RenderTarget;
	// Camera Material Instance
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Camera)
		UMaterialInstanceDynamic* Camera_Mat;
	// Camera Texture
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Camera)
		UTexture2D* Camera_Texture2D;
	// Color Data
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = Data)
		TArray<FColor> ColorData;// Blueprint Event called every time the video frame is updated
	UFUNCTION(BlueprintImplementableEvent, Category = Camera)
		void OnNextVideoFrame();
	// reads the current video frame
	UFUNCTION(BlueprintCallable, Category = Data)
		void ReadFrame();

	//OpenCV
	cv::Size cvSize;
	cv::Mat cvMat;

#if PLATFORM_WINDOWS
	cv::VideoCapture cvVideoCapture;
#endif
	
	void printToScreen(FString str, FColor color, float duration = 1.0f);

};
