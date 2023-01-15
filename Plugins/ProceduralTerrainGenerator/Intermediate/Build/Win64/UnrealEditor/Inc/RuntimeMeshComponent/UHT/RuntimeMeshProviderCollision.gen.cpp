// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderCollision() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderCollision();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderCollision_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderCollision::execSetRenderableSectionAffectsCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_UBOOL(Z_Param_bCollisionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderableSectionAffectsCollision(Z_Param_SectionId,Z_Param_bCollisionEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderCollision::execSetRenderableLODForCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderableLODForCollision(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderCollision::execSetCollisionMesh)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_NewCollisionMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionMesh(Z_Param_Out_NewCollisionMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderCollision::execSetCollisionSettings)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_NewCollisionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionSettings(Z_Param_Out_NewCollisionSettings);
		P_NATIVE_END;
	}
	void URuntimeMeshProviderCollision::StaticRegisterNativesURuntimeMeshProviderCollision()
	{
		UClass* Class = URuntimeMeshProviderCollision::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCollisionMesh", &URuntimeMeshProviderCollision::execSetCollisionMesh },
			{ "SetCollisionSettings", &URuntimeMeshProviderCollision::execSetCollisionSettings },
			{ "SetRenderableLODForCollision", &URuntimeMeshProviderCollision::execSetRenderableLODForCollision },
			{ "SetRenderableSectionAffectsCollision", &URuntimeMeshProviderCollision::execSetRenderableSectionAffectsCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics
	{
		struct RuntimeMeshProviderCollision_eventSetCollisionMesh_Parms
		{
			FRuntimeMeshCollisionData NewCollisionMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCollisionMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::NewProp_NewCollisionMesh = { "NewCollisionMesh", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderCollision_eventSetCollisionMesh_Parms, NewCollisionMesh), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData)) }; // 538173297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::NewProp_NewCollisionMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Collision" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderCollision, nullptr, "SetCollisionMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::RuntimeMeshProviderCollision_eventSetCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics
	{
		struct RuntimeMeshProviderCollision_eventSetCollisionSettings_Parms
		{
			FRuntimeMeshCollisionSettings NewCollisionSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCollisionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCollisionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::NewProp_NewCollisionSettings = { "NewCollisionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderCollision_eventSetCollisionSettings_Parms, NewCollisionSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData)) }; // 3364003493
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::NewProp_NewCollisionSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Collision" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderCollision, nullptr, "SetCollisionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::RuntimeMeshProviderCollision_eventSetCollisionSettings_Parms), Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics
	{
		struct RuntimeMeshProviderCollision_eventSetRenderableLODForCollision_Parms
		{
			int32 LODIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderCollision_eventSetRenderableLODForCollision_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Collision" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderCollision, nullptr, "SetRenderableLODForCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::RuntimeMeshProviderCollision_eventSetRenderableLODForCollision_Parms), Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics
	{
		struct RuntimeMeshProviderCollision_eventSetRenderableSectionAffectsCollision_Parms
		{
			int32 SectionId;
			bool bCollisionEnabled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static void NewProp_bCollisionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderCollision_eventSetRenderableSectionAffectsCollision_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
	{
		((RuntimeMeshProviderCollision_eventSetRenderableSectionAffectsCollision_Parms*)Obj)->bCollisionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled = { "bCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProviderCollision_eventSetRenderableSectionAffectsCollision_Parms), &Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Collision" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderCollision, nullptr, "SetRenderableSectionAffectsCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::RuntimeMeshProviderCollision_eventSetRenderableSectionAffectsCollision_Parms), Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProviderCollision);
	UClass* Z_Construct_UClass_URuntimeMeshProviderCollision_NoRegister()
	{
		return URuntimeMeshProviderCollision::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODForMeshCollision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODForMeshCollision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderableCollisionData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderableCollisionData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderableCollisionData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RenderableCollisionData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionsAffectingCollision_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionsAffectingCollision_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SectionsAffectingCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderPassthrough,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionMesh, "SetCollisionMesh" }, // 13347793
		{ &Z_Construct_UFunction_URuntimeMeshProviderCollision_SetCollisionSettings, "SetCollisionSettings" }, // 1583267698
		{ &Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableLODForCollision, "SetRenderableLODForCollision" }, // 1894656222
		{ &Z_Construct_UFunction_URuntimeMeshProviderCollision_SetRenderableSectionAffectsCollision, "SetRenderableSectionAffectsCollision" }, // 2708760168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderCollision.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_LODForMeshCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_LODForMeshCollision = { "LODForMeshCollision", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderCollision, LODForMeshCollision), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_LODForMeshCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_LODForMeshCollision_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_ValueProp = { "RenderableCollisionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData, METADATA_PARAMS(nullptr, 0) }; // 813553429
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_Key_KeyProp = { "RenderableCollisionData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData = { "RenderableCollisionData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderCollision, RenderableCollisionData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_MetaData)) }; // 813553429
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision_ElementProp = { "SectionsAffectingCollision", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision = { "SectionsAffectingCollision", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderCollision, SectionsAffectingCollision), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderCollision, CollisionSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionSettings_MetaData)) }; // 3364003493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderCollision, CollisionMesh), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionMesh_MetaData)) }; // 538173297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_LODForMeshCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_RenderableCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_SectionsAffectingCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::NewProp_CollisionMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::ClassParams = {
		&URuntimeMeshProviderCollision::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderCollision()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProviderCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProviderCollision.OuterSingleton, Z_Construct_UClass_URuntimeMeshProviderCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProviderCollision.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderCollision>()
	{
		return URuntimeMeshProviderCollision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderCollision);
	URuntimeMeshProviderCollision::~URuntimeMeshProviderCollision() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshProviderCollision, URuntimeMeshProviderCollision::StaticClass, TEXT("URuntimeMeshProviderCollision"), &Z_Registration_Info_UClass_URuntimeMeshProviderCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProviderCollision), 4090462154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_1635253595(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
