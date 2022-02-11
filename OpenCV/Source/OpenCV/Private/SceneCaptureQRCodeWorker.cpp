// Fill out your copyright notice in the Description page of Project Settings.


#include "SceneCaptureQRCodeWorker.h"

#pragma region Main Thread Code

SceneCaptureQRCodeWorker::SceneCaptureQRCodeWorker() {
	Thread = FRunnableThread::Create(this, TEXT("Scene Capture QR Code " \
											    "Worker Thread"));
}

SceneCaptureQRCodeWorker::~SceneCaptureQRCodeWorker() {
	if (Thread)
	{
		Thread->Kill();
		delete Thread;
	}
}

#pragma endregion

bool SceneCaptureQRCodeWorker::Init() {
	return true;
}

uint32 SceneCaptureQRCodeWorker::Run() {
	while (bRunThread)
	{
		if (bInputReady) {
			// Check that image has elements
			if (!Image.empty()) {
				if (IS_DEBUGGING) {
					UE_LOG(LogTemp, Warning, TEXT("Begin Decoding"));
				}

				// Process and decode scene frames for target platforms
#if defined(__aarch64__) || defined(_M_ARM64)
				decodeZXing();
#elif PLATFORM_WINDOWS
				TArray<FDecodedObject> decodedObjects;

				decode(decodedObjects);

				displayBox(decodedObjects);

				decodedObjects.Empty();
#endif
			}

			bInputReady = false;
		}
	}

	return 0;
}

void SceneCaptureQRCodeWorker::Stop() {
	bRunThread = false;
}

void SceneCaptureQRCodeWorker::Start(cv::Mat InputImage) {
	Image = InputImage;

	bInputReady = true;
}

bool SceneCaptureQRCodeWorker::IsInputReady() {
	return bInputReady;
}

#if PLATFORM_WINDOWS
// Find and decode barcodes and QR codes
void SceneCaptureQRCodeWorker::decode(TArray<FDecodedObject>& decodedObjects)
{
	// Create zbar scanner
	zbar::ImageScanner scanner;

	// Configure scanner to detect image types
	scanner.set_config(zbar::ZBAR_NONE, zbar::ZBAR_CFG_ENABLE, 1);

	// Convert image to grayscale
	cv::Mat imGray;
	cv::cvtColor(Image, imGray, cv::COLOR_BGR2GRAY);

	// Wrap opencv Mat image data in a zbar image
	zbar::Image image(Image.cols, Image.rows, "Y800", (uchar*)imGray.data, Image.cols * Image.rows);

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

		// Add all detections for displaying image outlines
		decodedObjects.Add(obj);
	}
}

// Display barcode outline at QR code location
void SceneCaptureQRCodeWorker::displayBox(TArray<FDecodedObject>& decodedObjects)
{
	// Loop over all decoded objects
	for (int i = 0; i < decodedObjects.Num(); i++)
	{
		std::vector<cv::Point> points = decodedObjects[i].location;
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
			line(Image, hull[j], hull[(j + 1) % n], cv::Scalar(255, 0, 0), 2);
		}

	}
}
#elif defined(__aarch64__) || defined(_M_ARM64)
cv::Point SceneCaptureQRCodeWorker::toOpenCvPoint(zxing::Ref<zxing::ResultPoint> resultPoint) {
	return cv::Point(resultPoint->getX(), resultPoint->getY());
}

void SceneCaptureQRCodeWorker::decodeZXing() {
	try {
		// Create luminance source
		zxing::Ref<zxing::LuminanceSource> source = MatSource::create(Image);

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
			cv::circle(Image, toOpenCvPoint(result->getResultPoints()[j]), 10, cv::Scalar(255, 0, 0), 2);
		}

		// Draw boundary on image
		if (resultPointCount > 1) {

			for (int j = 0; j < resultPointCount; j++) {

				// Get start result point
				zxing::Ref<zxing::ResultPoint> previousResultPoint = (j > 0) ? result->getResultPoints()[j - 1] : result->getResultPoints()[resultPointCount - 1];

				// Draw line
				cv::line(Image, toOpenCvPoint(previousResultPoint), toOpenCvPoint(result->getResultPoints()[j]), cv::Scalar(255, 0, 0), 2, 8);

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
			cv::putText(Image, result->getText()->getText(), toOpenCvPoint(result->getResultPoints()[0]), cv::LINE_4, 1, cv::Scalar(255, 0, 0));

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
}
#endif

void SceneCaptureQRCodeWorker::printToScreen(FString str, FColor color, float duration) {
	GEngine->AddOnScreenDebugMessage(1, duration, color, *str);
}
