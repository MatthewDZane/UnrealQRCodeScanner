// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/ARCameraRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARCameraRenderer() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_AARCameraRenderer_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_AARCameraRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
// End Cross Module References
	void AARCameraRenderer::StaticRegisterNativesAARCameraRenderer()
	{
	}
	UClass* Z_Construct_UClass_AARCameraRenderer_NoRegister()
	{
		return AARCameraRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AARCameraRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARCameraRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARCameraRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARCameraRenderer.h" },
		{ "ModuleRelativePath", "Public/ARCameraRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARCameraRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARCameraRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARCameraRenderer_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARCameraRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARCameraRenderer, 1848575148);
	template<> OPENCV_API UClass* StaticClass<AARCameraRenderer>()
	{
		return AARCameraRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARCameraRenderer(Z_Construct_UClass_AARCameraRenderer, &AARCameraRenderer::StaticClass, TEXT("/Script/OpenCV"), TEXT("AARCameraRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARCameraRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
