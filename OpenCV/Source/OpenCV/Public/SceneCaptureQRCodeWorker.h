// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"

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

/**
 * 
 */
class OPENCV_API SceneCaptureQRCodeWorker : public FRunnable
{
private: 
	// Unreal Print Helper
	void printToScreen(FString str, FColor color, float duration = 1.0f);

public:
	SceneCaptureQRCodeWorker();

	virtual ~SceneCaptureQRCodeWorker() override;

	bool Init() override;
	uint32 Run() override;
	void Stop() override;

	void Start(cv::Mat InputImage);

	bool IsInputReady();

#if PLATFORM_WINDOWS
	// ZBar functions
	void decode(TArray<FDecodedObject>& decodedObjects);
	void displayBox(TArray<FDecodedObject>& decodedObjects);
#elif defined(__aarch64__) || defined(_M_ARM64)
	// ZXing functions
	cv::Point toOpenCvPoint(zxing::Ref<zxing::ResultPoint> resultPoint);
	void decodeZXing();
#endif

private:

	FRunnableThread* Thread;
	bool bRunThread = true;

	bool bInputReady = false;

	cv::Mat Image;

	const bool IS_DEBUGGING = false;

	TArray<FDecodedObject> Decoded;
};
