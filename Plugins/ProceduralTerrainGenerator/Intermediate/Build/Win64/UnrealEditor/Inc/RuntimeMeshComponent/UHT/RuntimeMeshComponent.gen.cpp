// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshComponent.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_UPtgRuntimeMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetHitSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionHitInfo*)Z_Param__Result=P_THIS->GetHitSource(Z_Param_FaceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execSetupMaterialSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialSlot);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMaterialSlot(Z_Param_MaterialSlot,Z_Param_SlotName,Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetMaterialSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRuntimeMeshMaterialSlot>*)Z_Param__Result=P_THIS->GetMaterialSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetProvider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshProvider**)Z_Param__Result=P_THIS->GetProvider();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execSetRuntimeMeshMobility)
	{
		P_GET_ENUM(ERuntimeMeshMobility,Z_Param_NewMobility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeMeshMobility(ERuntimeMeshMobility(Z_Param_NewMobility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetRuntimeMeshMobility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERuntimeMeshMobility*)Z_Param__Result=P_THIS->GetRuntimeMeshMobility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetOrCreateRuntimeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPtgRuntimeMesh**)Z_Param__Result=P_THIS->GetOrCreateRuntimeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetRuntimeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPtgRuntimeMesh**)Z_Param__Result=P_THIS->GetRuntimeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execSetRuntimeMesh)
	{
		P_GET_OBJECT(UPtgRuntimeMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execInitialize)
	{
		P_GET_OBJECT(URuntimeMeshProvider,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Provider);
		P_NATIVE_END;
	}
	void URuntimeMeshComponent::StaticRegisterNativesURuntimeMeshComponent()
	{
		UClass* Class = URuntimeMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHitSource", &URuntimeMeshComponent::execGetHitSource },
			{ "GetMaterialSlots", &URuntimeMeshComponent::execGetMaterialSlots },
			{ "GetOrCreateRuntimeMesh", &URuntimeMeshComponent::execGetOrCreateRuntimeMesh },
			{ "GetProvider", &URuntimeMeshComponent::execGetProvider },
			{ "GetRuntimeMesh", &URuntimeMeshComponent::execGetRuntimeMesh },
			{ "GetRuntimeMeshMobility", &URuntimeMeshComponent::execGetRuntimeMeshMobility },
			{ "Initialize", &URuntimeMeshComponent::execInitialize },
			{ "SetRuntimeMesh", &URuntimeMeshComponent::execSetRuntimeMesh },
			{ "SetRuntimeMeshMobility", &URuntimeMeshComponent::execSetRuntimeMeshMobility },
			{ "SetupMaterialSlot", &URuntimeMeshComponent::execSetupMaterialSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics
	{
		struct RuntimeMeshComponent_eventGetHitSource_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetHitSource_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetHitSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo, METADATA_PARAMS(nullptr, 0) }; // 3367805164
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_FaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetHitSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::RuntimeMeshComponent_eventGetHitSource_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics
	{
		struct RuntimeMeshComponent_eventGetMaterialSlots_Parms
		{
			TArray<FRuntimeMeshMaterialSlot> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, METADATA_PARAMS(nullptr, 0) }; // 2000535622
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetMaterialSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2000535622
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetMaterialSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::RuntimeMeshComponent_eventGetMaterialSlots_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics
	{
		struct RuntimeMeshComponent_eventGetOrCreateRuntimeMesh_Parms
		{
			UPtgRuntimeMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetOrCreateRuntimeMesh_Parms, ReturnValue), Z_Construct_UClass_UPtgRuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "Comment", "/** Clears the geometry for ALL collision only sections */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
		{ "ToolTip", "Clears the geometry for ALL collision only sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetOrCreateRuntimeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::RuntimeMeshComponent_eventGetOrCreateRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics
	{
		struct RuntimeMeshComponent_eventGetProvider_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetProvider_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetProvider", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::RuntimeMeshComponent_eventGetProvider_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics
	{
		struct RuntimeMeshComponent_eventGetRuntimeMesh_Parms
		{
			UPtgRuntimeMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetRuntimeMesh_Parms, ReturnValue), Z_Construct_UClass_UPtgRuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "Comment", "/** Clears the geometry for ALL collision only sections */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
		{ "ToolTip", "Clears the geometry for ALL collision only sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetRuntimeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::RuntimeMeshComponent_eventGetRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshComponent_eventGetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventGetRuntimeMeshMobility_Parms, ReturnValue), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) }; // 401337605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "DisplayName", "Get Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetRuntimeMeshMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::RuntimeMeshComponent_eventGetRuntimeMeshMobility_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics
	{
		struct RuntimeMeshComponent_eventInitialize_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventInitialize_Parms, Provider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::NewProp_Provider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::RuntimeMeshComponent_eventInitialize_Parms), Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics
	{
		struct RuntimeMeshComponent_eventSetRuntimeMesh_Parms
		{
			UPtgRuntimeMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetRuntimeMesh_Parms, NewMesh), Z_Construct_UClass_UPtgRuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "SetRuntimeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::RuntimeMeshComponent_eventSetRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshComponent_eventSetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility NewMobility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMobility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMobility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility = { "NewMobility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetRuntimeMeshMobility_Parms, NewMobility), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) }; // 401337605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "DisplayName", "Set Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "SetRuntimeMeshMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::RuntimeMeshComponent_eventSetRuntimeMeshMobility_Parms), Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics
	{
		struct RuntimeMeshComponent_eventSetupMaterialSlot_Parms
		{
			int32 MaterialSlot;
			FName SlotName;
			UMaterialInterface* InMaterial;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetupMaterialSlot_Parms, MaterialSlot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetupMaterialSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshComponent_eventSetupMaterialSlot_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_MaterialSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "SetupMaterialSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::RuntimeMeshComponent_eventSetupMaterialSlot_Parms), Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshComponent);
	UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister()
	{
		return URuntimeMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepMomentumOnCollisionUpdate_MetaData[];
#endif
		static void NewProp_KeepMomentumOnCollisionUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepMomentumOnCollisionUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource, "GetHitSource" }, // 493016405
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots, "GetMaterialSlots" }, // 3828358162
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh, "GetOrCreateRuntimeMesh" }, // 2402339483
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetProvider, "GetProvider" }, // 882596695
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh, "GetRuntimeMesh" }, // 3379887396
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility, "GetRuntimeMeshMobility" }, // 326562463
		{ &Z_Construct_UFunction_URuntimeMeshComponent_Initialize, "Initialize" }, // 2431557045
		{ &Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh, "SetRuntimeMesh" }, // 2042620759
		{ &Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility, "SetRuntimeMeshMobility" }, // 2088107743
		{ &Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot, "SetupMaterialSlot" }, // 4211406121
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry for rendering and collision.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "RuntimeMeshComponent.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry for rendering and collision." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeMesh" },
		{ "DisplayName", "Runtime Mesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference = { "RuntimeMeshReference", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshComponent, RuntimeMeshReference), Z_Construct_UClass_UPtgRuntimeMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_MetaData[] = {
		{ "Category", "RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_SetBit(void* Obj)
	{
		((URuntimeMeshComponent*)Obj)->KeepMomentumOnCollisionUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate = { "KeepMomentumOnCollisionUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeMeshComponent), &Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URuntimeMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(URuntimeMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshComponent_Statics::ClassParams = {
		&URuntimeMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshComponent()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshComponent.OuterSingleton, Z_Construct_UClass_URuntimeMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshComponent.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshComponent>()
	{
		return URuntimeMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshComponent);
	URuntimeMeshComponent::~URuntimeMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshComponent, URuntimeMeshComponent::StaticClass, TEXT("URuntimeMeshComponent"), &Z_Registration_Info_UClass_URuntimeMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshComponent), 3089361826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_2955003867(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
