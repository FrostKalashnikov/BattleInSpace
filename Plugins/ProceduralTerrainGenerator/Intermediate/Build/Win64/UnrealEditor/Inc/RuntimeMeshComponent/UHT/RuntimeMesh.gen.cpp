// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMesh.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMesh() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_UPtgRuntimeMesh();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_UPtgRuntimeMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""Delegate for when the collision was updated.\n*/" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "Delegate for when the collision was updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent, nullptr, "RuntimeMeshCollisionUpdatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execGetBodySetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodySetup**)Z_Param__Result=P_THIS->GetBodySetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execGetLocalBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetLocalBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execGetHitSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionHitInfo*)Z_Param__Result=P_THIS->GetHitSource(Z_Param_FaceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execGetProviderPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshProvider**)Z_Param__Result=P_THIS->GetProviderPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgRuntimeMesh::execInitialize)
	{
		P_GET_OBJECT(URuntimeMeshProvider,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Provider);
		P_NATIVE_END;
	}
	void UPtgRuntimeMesh::StaticRegisterNativesUPtgRuntimeMesh()
	{
		UClass* Class = UPtgRuntimeMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodySetup", &UPtgRuntimeMesh::execGetBodySetup },
			{ "GetHitSource", &UPtgRuntimeMesh::execGetHitSource },
			{ "GetLocalBounds", &UPtgRuntimeMesh::execGetLocalBounds },
			{ "GetProviderPtr", &UPtgRuntimeMesh::execGetProviderPtr },
			{ "Initialize", &UPtgRuntimeMesh::execInitialize },
			{ "IsInitialized", &UPtgRuntimeMesh::execIsInitialized },
			{ "Reset", &UPtgRuntimeMesh::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics
	{
		struct PtgRuntimeMesh_eventGetBodySetup_Parms
		{
			UBodySetup* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgRuntimeMesh_eventGetBodySetup_Parms, ReturnValue), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "GetBodySetup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::PtgRuntimeMesh_eventGetBodySetup_Parms), Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics
	{
		struct PtgRuntimeMesh_eventGetHitSource_Parms
		{
			int32 FaceIndex;
			FRuntimeMeshCollisionHitInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgRuntimeMesh_eventGetHitSource_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgRuntimeMesh_eventGetHitSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo, METADATA_PARAMS(nullptr, 0) }; // 3367805164
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::NewProp_FaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "GetHitSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::PtgRuntimeMesh_eventGetHitSource_Parms), Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics
	{
		struct PtgRuntimeMesh_eventGetLocalBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgRuntimeMesh_eventGetLocalBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "GetLocalBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::PtgRuntimeMesh_eventGetLocalBounds_Parms), Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics
	{
		struct PtgRuntimeMesh_eventGetProviderPtr_Parms
		{
			URuntimeMeshProvider* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgRuntimeMesh_eventGetProviderPtr_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "GetProviderPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::PtgRuntimeMesh_eventGetProviderPtr_Parms), Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics
	{
		struct PtgRuntimeMesh_eventInitialize_Parms
		{
			URuntimeMeshProvider* Provider;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Provider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgRuntimeMesh_eventInitialize_Parms, Provider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::NewProp_Provider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::PtgRuntimeMesh_eventInitialize_Parms), Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics
	{
		struct PtgRuntimeMesh_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PtgRuntimeMesh_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PtgRuntimeMesh_eventIsInitialized_Parms), &Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::PtgRuntimeMesh_eventIsInitialized_Parms), Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgRuntimeMesh_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgRuntimeMesh_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgRuntimeMesh_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgRuntimeMesh, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgRuntimeMesh_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgRuntimeMesh_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgRuntimeMesh_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgRuntimeMesh_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPtgRuntimeMesh);
	UClass* Z_Construct_UClass_UPtgRuntimeMesh_NoRegister()
	{
		return UPtgRuntimeMesh::StaticClass();
	}
	struct Z_Construct_UClass_UPtgRuntimeMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshProviderPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshProviderPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSource_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSource_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionSource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsyncBodySetupQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialSlots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNameLookup_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNameLookup_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotNameLookup_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SlotNameLookup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CollisionUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPtgRuntimeMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPtgRuntimeMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_GetBodySetup, "GetBodySetup" }, // 787766583
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_GetHitSource, "GetHitSource" }, // 3919885887
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_GetLocalBounds, "GetLocalBounds" }, // 690961608
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_GetProviderPtr, "GetProviderPtr" }, // 3146907138
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_Initialize, "Initialize" }, // 2188286058
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_IsInitialized, "IsInitialized" }, // 4161645429
		{ &Z_Construct_UFunction_UPtgRuntimeMesh_Reset, "Reset" }, // 2448525477
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RuntimeMesh.h" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MeshProviderPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MeshProviderPtr = { "MeshProviderPtr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, MeshProviderPtr), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MeshProviderPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MeshProviderPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_BodySetup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource_Inner = { "CollisionSource", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, METADATA_PARAMS(nullptr, 0) }; // 2384311701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource = { "CollisionSource", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, CollisionSource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource_MetaData)) }; // 2384311701
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData, METADATA_PARAMS(nullptr, 0) }; // 2415854422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "// Queue of pending collision cooks\n" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "Queue of pending collision cooks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_MetaData)) }; // 2415854422
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots_Inner = { "MaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, METADATA_PARAMS(nullptr, 0) }; // 2000535622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots_MetaData[] = {
		{ "Comment", "// We track all registered material slots and a lookup table to quickly index them\n" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "We track all registered material slots and a lookup table to quickly index them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots = { "MaterialSlots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, MaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots_MetaData)) }; // 2000535622
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_ValueProp = { "SlotNameLookup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_Key_KeyProp = { "SlotNameLookup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup = { "SlotNameLookup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, SlotNameLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionUpdated_MetaData[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "Comment", "/** Event called when the collision has finished updated, this works both with standard following frame synchronous updates, as well as async updates */" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "Event called when the collision has finished updated, this works both with standard following frame synchronous updates, as well as async updates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionUpdated = { "CollisionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPtgRuntimeMesh, CollisionUpdated), Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionUpdated_MetaData)) }; // 1351932809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPtgRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MeshProviderPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_AsyncBodySetupQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_MaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_SlotNameLookup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPtgRuntimeMesh_Statics::NewProp_CollisionUpdated,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UPtgRuntimeMesh, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPtgRuntimeMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPtgRuntimeMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPtgRuntimeMesh_Statics::ClassParams = {
		&UPtgRuntimeMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPtgRuntimeMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPtgRuntimeMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgRuntimeMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPtgRuntimeMesh()
	{
		if (!Z_Registration_Info_UClass_UPtgRuntimeMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPtgRuntimeMesh.OuterSingleton, Z_Construct_UClass_UPtgRuntimeMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPtgRuntimeMesh.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<UPtgRuntimeMesh>()
	{
		return UPtgRuntimeMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPtgRuntimeMesh);
	UPtgRuntimeMesh::~UPtgRuntimeMesh() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPtgRuntimeMesh, UPtgRuntimeMesh::StaticClass, TEXT("UPtgRuntimeMesh"), &Z_Registration_Info_UClass_UPtgRuntimeMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPtgRuntimeMesh), 2060859537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_3263133534(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
