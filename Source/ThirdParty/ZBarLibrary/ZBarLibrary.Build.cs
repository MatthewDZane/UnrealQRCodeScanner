// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class ZBarLibrary : ModuleRules
{
	public ZBarLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// Tell Unreal that this Module only imports Third-Party-Assets
		Type = ModuleType.External;

		LoadZBarLibrary(Target);
	}

	public bool LoadZBarLibrary(ReadOnlyTargetRules Target)
    {
		bool isLibrarySupported = false;

		// Check which platform Unreal is built for
		if (Target.Platform == UnrealTargetPlatform.HoloLens)
		{
			isLibrarySupported = false;
		}
		else if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			isLibrarySupported = true;
			
			string relativePathToProjectBinariesDirectory = "../../../../../Binaries/Win64";
			string libZbarDLLName = "libzbar64-0.dll";
			string libiconvDLLName = "libiconv.dll";

			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("libconv.dll");
			
			RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", libZbarDLLName), 
									Path.Combine(ModuleDirectory, "Windows/lib", libZbarDLLName));
			RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", libiconvDLLName), 
									Path.Combine(ModuleDirectory, "Windows/zbar/libiconv/dll_x64", libiconvDLLName));

			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, relativePathToProjectBinariesDirectory, libZbarDLLName), 
								    Path.Combine(ModuleDirectory, "Windows/lib", libZbarDLLName));
			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, relativePathToProjectBinariesDirectory, libiconvDLLName), 
								    Path.Combine(ModuleDirectory, "Windows/zbar/libiconv/dll_x64", libiconvDLLName));
			
			// Add the static import library 
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Windows/lib/libzbar64-0.lib"));

			// Add include directory path
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Windows/include"));
		}

		return isLibrarySupported;

	}

	// ModuleDirectory points to the directory .uplugin is located
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

}