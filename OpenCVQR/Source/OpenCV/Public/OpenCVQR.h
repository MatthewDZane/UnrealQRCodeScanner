// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FOpenCVQRModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	// Handles to the test dll we will load
	void* OpenCVLibraryHandle;

	void CheckFileExists(const FString path, const FString fileName);
	void TraverseProjectDirectory();
};
