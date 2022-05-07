// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/ARCameraRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCameraRenderer() {}
// Cross Module References
	OPENCVQR_API UClass* Z_Construct_UClass_AARCameraRenderer_NoRegister();
	OPENCVQR_API UClass* Z_Construct_UClass_AARCameraRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OpenCVQR();
// End Cross Module References
	void AARCameraRenderer::StaticRegisterNativesAARCameraRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARCameraRenderer);
	UClass* Z_Construct_UClass_AARCameraRenderer_NoRegister()
	{
		return AARCameraRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AARCameraRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARCameraRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVQR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCameraRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARCameraRenderer.h" },
		{ "ModuleRelativePath", "Public/ARCameraRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARCameraRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARCameraRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARCameraRenderer_Statics::ClassParams = {
		&AARCameraRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARCameraRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARCameraRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARCameraRenderer()
	{
		if (!Z_Registration_Info_UClass_AARCameraRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARCameraRenderer.OuterSingleton, Z_Construct_UClass_AARCameraRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARCameraRenderer.OuterSingleton;
	}
	template<> OPENCVQR_API UClass* StaticClass<AARCameraRenderer>()
	{
		return AARCameraRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARCameraRenderer);
	struct Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ARCameraRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ARCameraRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARCameraRenderer, AARCameraRenderer::StaticClass, TEXT("AARCameraRenderer"), &Z_Registration_Info_UClass_AARCameraRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARCameraRenderer), 2010132576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ARCameraRenderer_h_1513303549(TEXT("/Script/OpenCVQR"),
		Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ARCameraRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ARCameraRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
