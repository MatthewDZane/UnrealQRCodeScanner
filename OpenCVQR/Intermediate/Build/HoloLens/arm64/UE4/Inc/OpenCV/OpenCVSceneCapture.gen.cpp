// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/OpenCVSceneCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVSceneCapture() {}
// Cross Module References
	OPENCV_API UClass* Z_Construct_UClass_AOpenCVSceneCapture_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_AOpenCVSceneCapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	static FName NAME_AOpenCVSceneCapture_OnNextSceneFrame = FName(TEXT("OnNextSceneFrame"));
	void AOpenCVSceneCapture::OnNextSceneFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOpenCVSceneCapture_OnNextSceneFrame),NULL);
	}
	void AOpenCVSceneCapture::StaticRegisterNativesAOpenCVSceneCapture()
	{
	}
	struct Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "Comment", "// Blueprint Event called every time the scene frame is updated\n" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Blueprint Event called every time the scene frame is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCVSceneCapture, nullptr, "OnNextSceneFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenCVSceneCapture_NoRegister()
	{
		return AOpenCVSceneCapture::StaticClass();
	}
	struct Z_Construct_UClass_AOpenCVSceneCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xrSimulationActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_xrSimulationActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneCaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneCaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Windows_Render_Target_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Windows_Render_Target_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hololens_Render_Target_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hololens_Render_Target_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolutionWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_resolutionWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resolutionHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_resolutionHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_captureEnabled_MetaData[];
#endif
		static void NewProp_captureEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_captureEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_Mat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_Mat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenCVSceneCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenCVSceneCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenCVSceneCapture_OnNextSceneFrame, "OnNextSceneFrame" }, // 3052871552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenCVSceneCapture.h" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_xrSimulationActor_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_xrSimulationActor = { "xrSimulationActor", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, xrSimulationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_xrSimulationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_xrSimulationActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_sceneCaptureComponent_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "Comment", "// Container for USceneCapture2D component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Container for USceneCapture2D component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_sceneCaptureComponent = { "sceneCaptureComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, sceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_sceneCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_sceneCaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Windows_Render_Target_Size_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "Comment", "// Render Target Sizes for different platforms\n" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Render Target Sizes for different platforms" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Windows_Render_Target_Size = { "Windows_Render_Target_Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, Windows_Render_Target_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Windows_Render_Target_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Windows_Render_Target_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Hololens_Render_Target_Size_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Hololens_Render_Target_Size = { "Hololens_Render_Target_Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, Hololens_Render_Target_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Hololens_Render_Target_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Hololens_Render_Target_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "Comment", "// Container for visible static mesh attached to actor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Container for visible static mesh attached to actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_staticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_staticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionWidth_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "Comment", "// Image texture resolution to be captured by USceneCapture2D component\n" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Image texture resolution to be captured by USceneCapture2D component" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionWidth = { "resolutionWidth", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, resolutionWidth), METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionHeight_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionHeight = { "resolutionHeight", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, resolutionHeight), METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled_MetaData[] = {
		{ "Category", "OpenCVSceneCapture" },
		{ "Comment", "// Enable USceneCapture2D component to render texture\n" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Enable USceneCapture2D component to render texture" },
	};
#endif
	void Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled_SetBit(void* Obj)
	{
		((AOpenCVSceneCapture*)Obj)->captureEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled = { "captureEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOpenCVSceneCapture), &Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Camera_Mat_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Material Instance\n" },
		{ "ModuleRelativePath", "Public/OpenCVSceneCapture.h" },
		{ "ToolTip", "Camera Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Camera_Mat = { "Camera_Mat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCVSceneCapture, Camera_Mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Camera_Mat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Camera_Mat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenCVSceneCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_xrSimulationActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_sceneCaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Windows_Render_Target_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Hololens_Render_Target_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_staticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_resolutionHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_captureEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCVSceneCapture_Statics::NewProp_Camera_Mat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenCVSceneCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenCVSceneCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenCVSceneCapture_Statics::ClassParams = {
		&AOpenCVSceneCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOpenCVSceneCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenCVSceneCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCVSceneCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenCVSceneCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenCVSceneCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenCVSceneCapture, 1428644982);
	template<> OPENCV_API UClass* StaticClass<AOpenCVSceneCapture>()
	{
		return AOpenCVSceneCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenCVSceneCapture(Z_Construct_UClass_AOpenCVSceneCapture, &AOpenCVSceneCapture::StaticClass, TEXT("/Script/OpenCV"), TEXT("AOpenCVSceneCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenCVSceneCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
