// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/ExternalCameraRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalCameraRenderer() {}
// Cross Module References
	OPENCVQR_API UScriptStruct* Z_Construct_UScriptStruct_FDecodedObject2();
	UPackage* Z_Construct_UPackage__Script_OpenCVQR();
	OPENCVQR_API UClass* Z_Construct_UClass_AExternalCameraRenderer_NoRegister();
	OPENCVQR_API UClass* Z_Construct_UClass_AExternalCameraRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecodedObject2;
class UScriptStruct* FDecodedObject2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecodedObject2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecodedObject2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecodedObject2, Z_Construct_UPackage__Script_OpenCVQR(), TEXT("DecodedObject2"));
	}
	return Z_Registration_Info_UScriptStruct_DecodedObject2.OuterSingleton;
}
template<> OPENCVQR_API UScriptStruct* StaticStruct<FDecodedObject2>()
{
	return FDecodedObject2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecodedObject2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecodedObject2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecodedObject2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type_MetaData[] = {
		{ "Category", "ExternalCameraRenderer" },
		{ "Comment", "// Type of qr code detected by ZBar\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Type of qr code detected by ZBar" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecodedObject2, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data_MetaData[] = {
		{ "Category", "ExternalCameraRenderer" },
		{ "Comment", "// Data decoded by qr code \n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Data decoded by qr code" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecodedObject2, data), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecodedObject2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecodedObject2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVQR,
		nullptr,
		&NewStructOps,
		"DecodedObject2",
		sizeof(FDecodedObject2),
		alignof(FDecodedObject2),
		Z_Construct_UScriptStruct_FDecodedObject2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecodedObject2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecodedObject2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecodedObject2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecodedObject2()
	{
		if (!Z_Registration_Info_UScriptStruct_DecodedObject2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecodedObject2.InnerSingleton, Z_Construct_UScriptStruct_FDecodedObject2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecodedObject2.InnerSingleton;
	}
	DEFINE_FUNCTION(AExternalCameraRenderer::execReadFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadFrame();
		P_NATIVE_END;
	}
	static FName NAME_AExternalCameraRenderer_OnNextVideoFrame = FName(TEXT("OnNextVideoFrame"));
	void AExternalCameraRenderer::OnNextVideoFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExternalCameraRenderer_OnNextVideoFrame),NULL);
	}
	void AExternalCameraRenderer::StaticRegisterNativesAExternalCameraRenderer()
	{
		UClass* Class = AExternalCameraRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadFrame", &AExternalCameraRenderer::execReadFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Blueprint Event called every time the video frame is updated\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Blueprint Event called every time the video frame is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExternalCameraRenderer, nullptr, "OnNextVideoFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "// reads the current video frame\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "reads the current video frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExternalCameraRenderer, nullptr, "ReadFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExternalCameraRenderer);
	UClass* Z_Construct_UClass_AExternalCameraRenderer_NoRegister()
	{
		return AExternalCameraRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AExternalCameraRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screen_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Screen_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTrackID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoTrackID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isStreamOpen_MetaData[];
#endif
		static void NewProp_isStreamOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isStreamOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_MediaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_Mat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_Mat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_Texture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera_Texture2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExternalCameraRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVQR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExternalCameraRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame, "OnNextVideoFrame" }, // 3785918187
		{ &Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame, "ReadFrame" }, // 2961090973
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExternalCameraRenderer.h" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh = { "Screen_Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Screen_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID = { "CameraID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, CameraID), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID = { "VideoTrackID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, VideoTrackID), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The rate at which the color data array and video texture is updated (in frames per second)\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The rate at which the color data array and video texture is updated (in frames per second)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, RefreshRate), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The refresh timer\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The refresh timer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer = { "RefreshTimer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, RefreshTimer), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// is the camera stream on\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "is the camera stream on" },
	};
#endif
	void Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_SetBit(void* Obj)
	{
		((AExternalCameraRenderer*)Obj)->isStreamOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen = { "isStreamOpen", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AExternalCameraRenderer), &Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The videos width and height (width, height)\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The videos width and height (width, height)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize = { "VideoSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer = { "Camera_MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Media Texture\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Media Texture" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture = { "Camera_MediaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Render Target\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Render Target" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget = { "Camera_RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Material Instance\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Material Instance" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat = { "Camera_Mat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_Mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Texture\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Texture" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D = { "Camera_Texture2D", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_Inner = { "ColorData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Color Data\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Color Data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, ColorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExternalCameraRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExternalCameraRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExternalCameraRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExternalCameraRenderer_Statics::ClassParams = {
		&AExternalCameraRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExternalCameraRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExternalCameraRenderer()
	{
		if (!Z_Registration_Info_UClass_AExternalCameraRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExternalCameraRenderer.OuterSingleton, Z_Construct_UClass_AExternalCameraRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExternalCameraRenderer.OuterSingleton;
	}
	template<> OPENCVQR_API UClass* StaticClass<AExternalCameraRenderer>()
	{
		return AExternalCameraRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExternalCameraRenderer);
	struct Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics::ScriptStructInfo[] = {
		{ FDecodedObject2::StaticStruct, Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewStructOps, TEXT("DecodedObject2"), &Z_Registration_Info_UScriptStruct_DecodedObject2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecodedObject2), 439211399U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExternalCameraRenderer, AExternalCameraRenderer::StaticClass, TEXT("AExternalCameraRenderer"), &Z_Registration_Info_UClass_AExternalCameraRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExternalCameraRenderer), 2118447138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_1548667453(TEXT("/Script/OpenCVQR"),
		Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenCVHoloLensTest_5_0_Plugins_OpenCVQR_Source_OpenCV_Public_ExternalCameraRenderer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
