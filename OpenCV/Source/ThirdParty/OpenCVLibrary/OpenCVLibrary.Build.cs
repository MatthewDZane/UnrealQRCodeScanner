// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;
using Tools.DotNETCommon;

public class OpenCVLibrary : ModuleRules
{
	public OpenCVLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		// Tell Unreal that this Module only imports Third-Party-Assets
		Type = ModuleType.External;

		LoadOpenCVLibrary(Target);
	}
	
	public bool LoadOpenCVLibrary(ReadOnlyTargetRules Target)
	{
        bool isLibrarySupported = false;
        if (Target.Platform == UnrealTargetPlatform.HoloLens)
		{
            isLibrarySupported = true;

			string relativePathToProjectBinariesDirectory = "../../../../../Binaries/HoloLens";
			string openCVWorldDLLName = "opencv_world452.dll";
			
			RuntimeDependencies.Add("$(TargetOutputDir)/opencv_world452.dll", Path.Combine(PluginDirectory, "Source/ThirdParty/OpenCVLibrary/Hololens/lib/arm64/opencv_world452.dll"));
			
			RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", openCVWorldDLLName), Path.Combine(ModuleDirectory, "Hololens/lib/arm64", openCVWorldDLLName));
			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, relativePathToProjectBinariesDirectory, openCVWorldDLLName), 
								    Path.Combine(ModuleDirectory, "Hololens/lib/arm64", openCVWorldDLLName));
									
			// Add the static import library 
			PublicAdditionalLibraries.Add(Path.Combine(ModulePath, "Hololens", "lib", "arm64", "opencv_world452.lib"));
			
			// Add include directory path
			PublicIncludePaths.Add(Path.Combine(ModulePath, "Hololens/include"));
		}
		else if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			isLibrarySupported = true;
			
			string relativePathToProjectBinariesDirectory = "../../../../../Binaries/Win64";
			string openCVWorldDLLName = "opencv_world451.dll";
			
			RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", openCVWorldDLLName), Path.Combine(ModuleDirectory, "Windows/bin", openCVWorldDLLName));
			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, relativePathToProjectBinariesDirectory, openCVWorldDLLName), 
								    Path.Combine(ModuleDirectory, "Windows/bin", openCVWorldDLLName));
									
			// Add the static import library 
            PublicAdditionalLibraries.Add(Path.Combine(ModulePath, "Windows/x64/vc15/lib/opencv_world451.lib"));

			// Add include directory path
			PublicIncludePaths.Add(Path.Combine(ModulePath, "Windows/include"));
		}

        return isLibrarySupported;
	}

	// ModuleDirectory points to the directory .uplugin is located
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

}