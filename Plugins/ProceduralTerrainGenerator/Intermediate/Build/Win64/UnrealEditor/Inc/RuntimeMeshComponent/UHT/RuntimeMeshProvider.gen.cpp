// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshProvider.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProvider() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProvider::execIsThreadSafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsThreadSafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execCollisionUpdateCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollisionUpdateCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execGetCollisionMesh)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_CollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCollisionMesh(Z_Param_Out_CollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execHasCollisionMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCollisionMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execGetCollisionSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionSettings*)Z_Param__Result=P_THIS->GetCollisionSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execGetAllSectionsMeshForLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TMAP_REF(int32,FRuntimeMeshSectionData,Z_Param_Out_MeshDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllSectionsMeshForLOD(Z_Param_LODIndex,Z_Param_Out_MeshDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execGetSectionMeshForLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSectionMeshForLOD(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_Out_MeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProvider::execIsBound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBound();
		P_NATIVE_END;
	}
	void URuntimeMeshProvider::StaticRegisterNativesURuntimeMeshProvider()
	{
		UClass* Class = URuntimeMeshProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollisionUpdateCompleted", &URuntimeMeshProvider::execCollisionUpdateCompleted },
			{ "GetAllSectionsMeshForLOD", &URuntimeMeshProvider::execGetAllSectionsMeshForLOD },
			{ "GetBounds", &URuntimeMeshProvider::execGetBounds },
			{ "GetCollisionMesh", &URuntimeMeshProvider::execGetCollisionMesh },
			{ "GetCollisionSettings", &URuntimeMeshProvider::execGetCollisionSettings },
			{ "GetSectionMeshForLOD", &URuntimeMeshProvider::execGetSectionMeshForLOD },
			{ "HasCollisionMesh", &URuntimeMeshProvider::execHasCollisionMesh },
			{ "Initialize", &URuntimeMeshProvider::execInitialize },
			{ "IsBound", &URuntimeMeshProvider::execIsBound },
			{ "IsThreadSafe", &URuntimeMeshProvider::execIsThreadSafe },
			{ "Shutdown", &URuntimeMeshProvider::execShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "CollisionUpdateCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics
	{
		struct RuntimeMeshProvider_eventGetAllSectionsMeshForLOD_Parms
		{
			int32 LODIndex;
			TMap<int32,FRuntimeMeshSectionData> MeshDatas;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshDatas_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshDatas_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_MeshDatas;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetAllSectionsMeshForLOD_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_MeshDatas_ValueProp = { "MeshDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRuntimeMeshSectionData, METADATA_PARAMS(nullptr, 0) }; // 1857621609
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_MeshDatas_Key_KeyProp = { "MeshDatas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_MeshDatas = { "MeshDatas", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetAllSectionsMeshForLOD_Parms, MeshDatas), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1857621609
	void Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProvider_eventGetAllSectionsMeshForLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProvider_eventGetAllSectionsMeshForLOD_Parms), &Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_MeshDatas_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_MeshDatas_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_MeshDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "GetAllSectionsMeshForLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::RuntimeMeshProvider_eventGetAllSectionsMeshForLOD_Parms), Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics
	{
		struct RuntimeMeshProvider_eventGetBounds_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::RuntimeMeshProvider_eventGetBounds_Parms), Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics
	{
		struct RuntimeMeshProvider_eventGetCollisionMesh_Parms
		{
			FRuntimeMeshCollisionData CollisionData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetCollisionMesh_Parms, CollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	void Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProvider_eventGetCollisionMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProvider_eventGetCollisionMesh_Parms), &Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "GetCollisionMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::RuntimeMeshProvider_eventGetCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics
	{
		struct RuntimeMeshProvider_eventGetCollisionSettings_Parms
		{
			FRuntimeMeshCollisionSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetCollisionSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "GetCollisionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::RuntimeMeshProvider_eventGetCollisionSettings_Parms), Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics
	{
		struct RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData MeshData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	void Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms), &Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "GetSectionMeshForLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::RuntimeMeshProvider_eventGetSectionMeshForLOD_Parms), Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics
	{
		struct RuntimeMeshProvider_eventHasCollisionMesh_Parms
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
	void Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProvider_eventHasCollisionMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProvider_eventHasCollisionMesh_Parms), &Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "HasCollisionMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::RuntimeMeshProvider_eventHasCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics
	{
		struct RuntimeMeshProvider_eventIsBound_Parms
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
	void Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProvider_eventIsBound_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProvider_eventIsBound_Parms), &Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "IsBound", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::RuntimeMeshProvider_eventIsBound_Parms), Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_IsBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_IsBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics
	{
		struct RuntimeMeshProvider_eventIsThreadSafe_Parms
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
	void Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProvider_eventIsThreadSafe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshProvider_eventIsThreadSafe_Parms), &Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "IsThreadSafe", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::RuntimeMeshProvider_eventIsThreadSafe_Parms), Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProvider_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProvider_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshProvider|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProvider_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProvider, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProvider_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProvider_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProvider_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProvider_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProvider);
	UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister()
	{
		return URuntimeMeshProvider::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProvider_CollisionUpdateCompleted, "CollisionUpdateCompleted" }, // 2472832707
		{ &Z_Construct_UFunction_URuntimeMeshProvider_GetAllSectionsMeshForLOD, "GetAllSectionsMeshForLOD" }, // 1405935777
		{ &Z_Construct_UFunction_URuntimeMeshProvider_GetBounds, "GetBounds" }, // 2981273651
		{ &Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionMesh, "GetCollisionMesh" }, // 3143084453
		{ &Z_Construct_UFunction_URuntimeMeshProvider_GetCollisionSettings, "GetCollisionSettings" }, // 783866894
		{ &Z_Construct_UFunction_URuntimeMeshProvider_GetSectionMeshForLOD, "GetSectionMeshForLOD" }, // 1264970408
		{ &Z_Construct_UFunction_URuntimeMeshProvider_HasCollisionMesh, "HasCollisionMesh" }, // 3795866380
		{ &Z_Construct_UFunction_URuntimeMeshProvider_Initialize, "Initialize" }, // 3049475897
		{ &Z_Construct_UFunction_URuntimeMeshProvider_IsBound, "IsBound" }, // 2248346519
		{ &Z_Construct_UFunction_URuntimeMeshProvider_IsThreadSafe, "IsThreadSafe" }, // 255427175
		{ &Z_Construct_UFunction_URuntimeMeshProvider_Shutdown, "Shutdown" }, // 1532622362
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RuntimeMeshProvider.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
		{ "ShortTooltip", "A RuntimeMeshProvider is a class containing the logic to create the mesh data and related information to be used by a RuntimeMeshComponent for rendering." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProvider_Statics::ClassParams = {
		&URuntimeMeshProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProvider()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProvider.OuterSingleton, Z_Construct_UClass_URuntimeMeshProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProvider.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProvider>()
	{
		return URuntimeMeshProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProvider);
	URuntimeMeshProvider::~URuntimeMeshProvider() {}
	DEFINE_FUNCTION(URuntimeMeshProviderPassthrough::execSetChildProvider)
	{
		P_GET_OBJECT(URuntimeMeshProvider,Z_Param_InProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChildProvider(Z_Param_InProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderPassthrough::execGetChildProvider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshProvider**)Z_Param__Result=P_THIS->GetChildProvider();
		P_NATIVE_END;
	}
	void URuntimeMeshProviderPassthrough::StaticRegisterNativesURuntimeMeshProviderPassthrough()
	{
		UClass* Class = URuntimeMeshProviderPassthrough::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChildProvider", &URuntimeMeshProviderPassthrough::execGetChildProvider },
			{ "SetChildProvider", &URuntimeMeshProviderPassthrough::execSetChildProvider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics
	{
		struct RuntimeMeshProviderPassthrough_eventGetChildProvider_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderPassthrough_eventGetChildProvider_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderPassthrough, nullptr, "GetChildProvider", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::RuntimeMeshProviderPassthrough_eventGetChildProvider_Parms), Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics
	{
		struct RuntimeMeshProviderPassthrough_eventSetChildProvider_Parms
		{
			URuntimeMeshProvider* InProvider;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InProvider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::NewProp_InProvider = { "InProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderPassthrough_eventSetChildProvider_Parms, InProvider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::NewProp_InProvider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderPassthrough, nullptr, "SetChildProvider", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::RuntimeMeshProviderPassthrough_eventSetChildProvider_Parms), Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProviderPassthrough);
	UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough_NoRegister()
	{
		return URuntimeMeshProviderPassthrough::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildProvider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderPassthrough_GetChildProvider, "GetChildProvider" }, // 270413094
		{ &Z_Construct_UFunction_URuntimeMeshProviderPassthrough_SetChildProvider, "SetChildProvider" }, // 2047949716
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RuntimeMeshProvider.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
		{ "ShortTooltip", "A RuntimeMeshProviderPassthrough is a class containing logic to modify the mesh data from a linked provider before passing it onto the RuntimeMeshComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::NewProp_ChildProvider_MetaData[] = {
		{ "BlueprintGetter", "GetChildProvider" },
		{ "BlueprintSetter", "SetChildProvider" },
		{ "Category", "RuntimeMesh|Providers" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProvider.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::NewProp_ChildProvider = { "ChildProvider", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderPassthrough, ChildProvider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::NewProp_ChildProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::NewProp_ChildProvider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::NewProp_ChildProvider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderPassthrough>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::ClassParams = {
		&URuntimeMeshProviderPassthrough::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProviderPassthrough.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProviderPassthrough.OuterSingleton, Z_Construct_UClass_URuntimeMeshProviderPassthrough_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProviderPassthrough.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderPassthrough>()
	{
		return URuntimeMeshProviderPassthrough::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderPassthrough);
	URuntimeMeshProviderPassthrough::~URuntimeMeshProviderPassthrough() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshProvider, URuntimeMeshProvider::StaticClass, TEXT("URuntimeMeshProvider"), &Z_Registration_Info_UClass_URuntimeMeshProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProvider), 2824748296U) },
		{ Z_Construct_UClass_URuntimeMeshProviderPassthrough, URuntimeMeshProviderPassthrough::StaticClass, TEXT("URuntimeMeshProviderPassthrough"), &Z_Registration_Info_UClass_URuntimeMeshProviderPassthrough, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProviderPassthrough), 2245862634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_1279682586(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
