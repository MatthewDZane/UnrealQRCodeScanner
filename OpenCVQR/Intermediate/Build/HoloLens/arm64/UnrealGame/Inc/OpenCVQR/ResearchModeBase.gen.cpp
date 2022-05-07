// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/ResearchModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResearchModeBase() {}
// Cross Module References
	OPENCVQR_API UClass* Z_Construct_UClass_AResearchModeBase_NoRegister();
	OPENCVQR_API UClass* Z_Construct_UClass_AResearchModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OpenCVQR();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AResearchModeBase::StaticRegisterNativesAResearchModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResearchModeBase);
	UClass* Z_Construct_UClass_AResearchModeBase_NoRegister()
	{
		return AResearchModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AResearchModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResearchModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVQR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResearchModeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ResearchModeBase.h" },
		{ "ModuleRelativePath", "Public/ResearchModeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResearchModeBase_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "ResearchMode" },
		{ "Comment", "// Container for visible static mesh attached to actor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ResearchModeBase.h" },
		{ "ToolTip", "Container for visible static mesh attached to actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResearchModeBase_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AResearchModeBase, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AResearchModeBase_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AResearchModeBase_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResearchModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResearchModeBase_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResearchModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResearchModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResearchModeBase_Statics::ClassParams = {
		&AResearchModeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AResearchModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AResearchModeBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AResearchModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AResearchModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AResearchModeBase()
	{
		if (!Z_Registration_Info_UClass_AResearchModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResearchModeBase.OuterSingleton, Z_Construct_UClass_AResearchModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResearchModeBase.OuterSingleton;
	}
	template<> OPENCVQR_API UClass* StaticClass<AResearchModeBase>()
	{
		return AResearchModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResearchModeBase);
	struct Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ResearchModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ResearchModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResearchModeBase, AResearchModeBase::StaticClass, TEXT("AResearchModeBase"), &Z_Registration_Info_UClass_AResearchModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResearchModeBase), 3463935747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ResearchModeBase_h_2235299523(TEXT("/Script/OpenCVQR"),
		Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ResearchModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ResearchModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
