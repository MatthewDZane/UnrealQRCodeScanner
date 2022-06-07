// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenCVQR.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FOpenCVQRModule"

struct DirectoryVisitor : public IPlatformFile::FDirectoryVisitor
{
	//This function is called for every file or directory it finds.
	bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory) override
	{
		// did we find a Directory or a file?
		if (bIsDirectory)
		{
			UE_LOG(LogTemp, Warning, TEXT("FilePaths: Directory found: %s"), FilenameOrDirectory);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("FilePaths: File Found: %s"), FilenameOrDirectory);
		}
		return true;
	}
};

void FOpenCVQRModule::StartupModule()
{

#if defined(__aarch64__) || defined(_M_ARM64)

	const FString BinDir = FPaths::ProjectDir() /
		"Binaries" / "HoloLens";

	CheckFileExists(BinDir, FString("opencv_world452.dll"));

	// Loads DLL into application
	OpenCVLibraryHandle = FPlatformProcess::GetDllHandle(*(BinDir / "opencv_world452.dll"));

	// Check if successfully loaded in output Logs
	if (OpenCVLibraryHandle) {
		UE_LOG(LogTemp, Warning, TEXT("Successfully Loaded: opencv_world452.dll"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Failed Loaded: opencv_world452.dll"));
	}

#endif
}

void FOpenCVQRModule::ShutdownModule()
{
#if defined(__aarch64__) || defined(_M_ARM64)
	FPlatformProcess::FreeDllHandle(OpenCVLibraryHandle);
#endif

}

void FOpenCVQRModule::CheckFileExists(const FString path, const FString fileName) {
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	
	const FString MyFilePath = FPaths::Combine(path,fileName);

	UE_LOG(LogTemp, Warning, TEXT("Searching with path: %s"), *MyFilePath);

	if (FileManager.FileExists(*MyFilePath))
	{
		UE_LOG(LogTemp, Warning, TEXT("FilePaths: File %s found!"), *fileName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FilePaths: File %s not found!"), *fileName);
	}
}

void FOpenCVQRModule::TraverseProjectDirectory() {
	// Traverse Project Directory and Log all found directories and files for debugging packaging
	FString MyConfigDirectoryTree = FPaths::ProjectDir();
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	DirectoryVisitor Visitor;

	if (FileManager.IterateDirectoryRecursively(*MyConfigDirectoryTree, Visitor))
	{
		UE_LOG(LogTemp, Warning, TEXT("FilePaths: Directory's or files found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FilePaths: Directory did not exist or visitor returned false"));
	}
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOpenCVQRModule, OpenCVQR)
