// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCV/Public/ExternalCameraRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalCameraRenderer() {}
// Cross Module References
	OPENCV_API UScriptStruct* Z_Construct_UScriptStruct_FDecodedObject2();
	UPackage* Z_Construct_UPackage__Script_OpenCV();
	OPENCV_API UClass* Z_Construct_UClass_AExternalCameraRenderer_NoRegister();
	OPENCV_API UClass* Z_Construct_UClass_AExternalCameraRenderer();
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
class UScriptStruct* FDecodedObject2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENCV_API uint32 Get_Z_Construct_UScriptStruct_FDecodedObject2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecodedObject2, Z_Construct_UPackage__Script_OpenCV(), TEXT("DecodedObject2"), sizeof(FDecodedObject2), Get_Z_Construct_UScriptStruct_FDecodedObject2_Hash());
	}
	return Singleton;
}
template<> OPENCV_API UScriptStruct* StaticStruct<FDecodedObject2>()
{
	return FDecodedObject2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecodedObject2(FDecodedObject2::StaticStruct, TEXT("/Script/OpenCV"), TEXT("DecodedObject2"), false, nullptr, nullptr);
static struct FScriptStruct_OpenCV_StaticRegisterNativesFDecodedObject2
{
	FScriptStruct_OpenCV_StaticRegisterNativesFDecodedObject2()
	{
		UScriptStruct::DeferCppStructOps<FDecodedObject2>(FName(TEXT("DecodedObject2")));
	}
} ScriptStruct_OpenCV_StaticRegisterNativesFDecodedObject2;
	struct Z_Construct_UScriptStruct_FDecodedObject2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecodedObject2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecodedObject2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type_MetaData[] = {
		{ "Category", "ExternalCameraRenderer" },
		{ "Comment", "// Type of qr code detected by ZBar\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Type of qr code detected by ZBar" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecodedObject2, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data_MetaData[] = {
		{ "Category", "ExternalCameraRenderer" },
		{ "Comment", "// Data decoded by qr code \n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Data decoded by qr code" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecodedObject2, data), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecodedObject2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecodedObject2_Statics::NewProp_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecodedObject2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecodedObject2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenCV();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecodedObject2"), sizeof(FDecodedObject2), Get_Z_Construct_UScriptStruct_FDecodedObject2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecodedObject2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecodedObject2_Hash() { return 3823136161U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Blueprint Event called every time the video frame is updated\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Blueprint Event called every time the video frame is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExternalCameraRenderer, nullptr, "OnNextVideoFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "// reads the current video frame\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "reads the current video frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExternalCameraRenderer, nullptr, "ReadFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExternalCameraRenderer_NoRegister()
	{
		return AExternalCameraRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AExternalCameraRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Screen_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Screen_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTrackID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoTrackID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStreamOpen_MetaData[];
#endif
		static void NewProp_isStreamOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStreamOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_MediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MediaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_MediaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_Mat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_Mat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_Texture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_Texture2D;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExternalCameraRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExternalCameraRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExternalCameraRenderer_OnNextVideoFrame, "OnNextVideoFrame" }, // 3650729273
		{ &Z_Construct_UFunction_AExternalCameraRenderer_ReadFrame, "ReadFrame" }, // 535462059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExternalCameraRenderer.h" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh = { "Screen_Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Screen_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID = { "CameraID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, CameraID), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID = { "VideoTrackID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, VideoTrackID), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The rate at which the color data array and video texture is updated (in frames per second)\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The rate at which the color data array and video texture is updated (in frames per second)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, RefreshRate), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The refresh timer\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The refresh timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer = { "RefreshTimer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, RefreshTimer), METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_MetaData[] = {
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen = { "isStreamOpen", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AExternalCameraRenderer), &Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The videos width and height (width, height)\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "The videos width and height (width, height)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize = { "VideoSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer = { "Camera_MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Media Texture\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Media Texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture = { "Camera_MediaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Render Target\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Render Target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget = { "Camera_RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Material Instance\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat = { "Camera_Mat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_Mat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Texture\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Camera Texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D = { "Camera_Texture2D", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, Camera_Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_Inner = { "ColorData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Color Data\n" },
		{ "ModuleRelativePath", "Public/ExternalCameraRenderer.h" },
		{ "ToolTip", "Color Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExternalCameraRenderer, ColorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExternalCameraRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_rootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Screen_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_CameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoTrackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_RefreshTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_isStreamOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_VideoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_MediaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Mat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_Camera_Texture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExternalCameraRenderer_Statics::NewProp_ColorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExternalCameraRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExternalCameraRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExternalCameraRenderer_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExternalCameraRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExternalCameraRenderer, 2357411663);
	template<> OPENCV_API UClass* StaticClass<AExternalCameraRenderer>()
	{
		return AExternalCameraRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExternalCameraRenderer(Z_Construct_UClass_AExternalCameraRenderer, &AExternalCameraRenderer::StaticClass, TEXT("/Script/OpenCV"), TEXT("AExternalCameraRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExternalCameraRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
