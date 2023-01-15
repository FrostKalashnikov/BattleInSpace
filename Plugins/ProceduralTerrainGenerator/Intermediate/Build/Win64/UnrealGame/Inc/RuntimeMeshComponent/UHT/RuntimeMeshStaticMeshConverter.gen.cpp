// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshStaticMeshConverter.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshStaticMeshConverter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshStaticMeshConverter();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshStaticMeshConverter_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshStaticMeshConverter::execCopyStaticMeshComponentToRuntimeMesh)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RuntimeMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_CollisionLODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLODToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshStaticMeshConverter::CopyStaticMeshComponentToRuntimeMesh(Z_Param_StaticMeshComponent,Z_Param_RuntimeMeshComponent,Z_Param_CollisionLODIndex,Z_Param_MaxLODToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshStaticMeshConverter::execCopyStaticMeshToRuntimeMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RuntimeMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_CollisionLODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLODToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshStaticMeshConverter::CopyStaticMeshToRuntimeMesh(Z_Param_StaticMesh,Z_Param_RuntimeMeshComponent,Z_Param_CollisionLODIndex,Z_Param_MaxLODToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshStaticMeshConverter::execCopyStaticMeshLODToCollisionData)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_OutCollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshStaticMeshConverter::CopyStaticMeshLODToCollisionData(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_Out_OutCollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshStaticMeshConverter::execCopyStaticMeshCollisionToCollisionSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_OutCollisionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshStaticMeshConverter::CopyStaticMeshCollisionToCollisionSettings(Z_Param_StaticMesh,Z_Param_Out_OutCollisionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshStaticMeshConverter::execCopyStaticMeshSectionToRenderableMeshData)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshStaticMeshConverter::CopyStaticMeshSectionToRenderableMeshData(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_SectionId,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	void URuntimeMeshStaticMeshConverter::StaticRegisterNativesURuntimeMeshStaticMeshConverter()
	{
		UClass* Class = URuntimeMeshStaticMeshConverter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyStaticMeshCollisionToCollisionSettings", &URuntimeMeshStaticMeshConverter::execCopyStaticMeshCollisionToCollisionSettings },
			{ "CopyStaticMeshComponentToRuntimeMesh", &URuntimeMeshStaticMeshConverter::execCopyStaticMeshComponentToRuntimeMesh },
			{ "CopyStaticMeshLODToCollisionData", &URuntimeMeshStaticMeshConverter::execCopyStaticMeshLODToCollisionData },
			{ "CopyStaticMeshSectionToRenderableMeshData", &URuntimeMeshStaticMeshConverter::execCopyStaticMeshSectionToRenderableMeshData },
			{ "CopyStaticMeshToRuntimeMesh", &URuntimeMeshStaticMeshConverter::execCopyStaticMeshToRuntimeMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics
	{
		struct RuntimeMeshStaticMeshConverter_eventCopyStaticMeshCollisionToCollisionSettings_Parms
		{
			UStaticMesh* StaticMesh;
			FRuntimeMeshCollisionSettings OutCollisionSettings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCollisionSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshCollisionToCollisionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_OutCollisionSettings = { "OutCollisionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshCollisionToCollisionSettings_Parms, OutCollisionSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	void Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshStaticMeshConverter_eventCopyStaticMeshCollisionToCollisionSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshCollisionToCollisionSettings_Parms), &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_OutCollisionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|StaticMeshConversion" },
		{ "ModuleRelativePath", "Public/RuntimeMeshStaticMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshStaticMeshConverter, nullptr, "CopyStaticMeshCollisionToCollisionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::RuntimeMeshStaticMeshConverter_eventCopyStaticMeshCollisionToCollisionSettings_Parms), Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics
	{
		struct RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			URuntimeMeshComponent* RuntimeMeshComponent;
			int32 CollisionLODIndex;
			int32 MaxLODToCopy;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionLODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODToCopy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent = { "RuntimeMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms, RuntimeMeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_CollisionLODIndex = { "CollisionLODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms, CollisionLODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_MaxLODToCopy = { "MaxLODToCopy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms, MaxLODToCopy), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms), &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_CollisionLODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_MaxLODToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|StaticMeshConversion" },
		{ "CPP_Default_CollisionLODIndex", "-1" },
		{ "CPP_Default_MaxLODToCopy", "8" },
		{ "ModuleRelativePath", "Public/RuntimeMeshStaticMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshStaticMeshConverter, nullptr, "CopyStaticMeshComponentToRuntimeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::RuntimeMeshStaticMeshConverter_eventCopyStaticMeshComponentToRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics
	{
		struct RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			FRuntimeMeshCollisionData OutCollisionData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCollisionData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_OutCollisionData = { "OutCollisionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms, OutCollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	void Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms), &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_OutCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|StaticMeshConversion" },
		{ "ModuleRelativePath", "Public/RuntimeMeshStaticMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshStaticMeshConverter, nullptr, "CopyStaticMeshLODToCollisionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::RuntimeMeshStaticMeshConverter_eventCopyStaticMeshLODToCollisionData_Parms), Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics
	{
		struct RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData OutMeshData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	void Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|StaticMeshConversion" },
		{ "ModuleRelativePath", "Public/RuntimeMeshStaticMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshStaticMeshConverter, nullptr, "CopyStaticMeshSectionToRenderableMeshData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::RuntimeMeshStaticMeshConverter_eventCopyStaticMeshSectionToRenderableMeshData_Parms), Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics
	{
		struct RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms
		{
			UStaticMesh* StaticMesh;
			URuntimeMeshComponent* RuntimeMeshComponent;
			int32 CollisionLODIndex;
			int32 MaxLODToCopy;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionLODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODToCopy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent = { "RuntimeMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms, RuntimeMeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_CollisionLODIndex = { "CollisionLODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms, CollisionLODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_MaxLODToCopy = { "MaxLODToCopy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms, MaxLODToCopy), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms), &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_RuntimeMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_CollisionLODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_MaxLODToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|StaticMeshConversion" },
		{ "CPP_Default_CollisionLODIndex", "-1" },
		{ "CPP_Default_MaxLODToCopy", "8" },
		{ "ModuleRelativePath", "Public/RuntimeMeshStaticMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshStaticMeshConverter, nullptr, "CopyStaticMeshToRuntimeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::RuntimeMeshStaticMeshConverter_eventCopyStaticMeshToRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshStaticMeshConverter);
	UClass* Z_Construct_UClass_URuntimeMeshStaticMeshConverter_NoRegister()
	{
		return URuntimeMeshStaticMeshConverter::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshCollisionToCollisionSettings, "CopyStaticMeshCollisionToCollisionSettings" }, // 1213996373
		{ &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshComponentToRuntimeMesh, "CopyStaticMeshComponentToRuntimeMesh" }, // 3600207974
		{ &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshLODToCollisionData, "CopyStaticMeshLODToCollisionData" }, // 1578951277
		{ &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshSectionToRenderableMeshData, "CopyStaticMeshSectionToRenderableMeshData" }, // 3951031680
		{ &Z_Construct_UFunction_URuntimeMeshStaticMeshConverter_CopyStaticMeshToRuntimeMesh, "CopyStaticMeshToRuntimeMesh" }, // 2046066206
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RuntimeMeshStaticMeshConverter.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshStaticMeshConverter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshStaticMeshConverter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::ClassParams = {
		&URuntimeMeshStaticMeshConverter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshStaticMeshConverter()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshStaticMeshConverter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshStaticMeshConverter.OuterSingleton, Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshStaticMeshConverter.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshStaticMeshConverter>()
	{
		return URuntimeMeshStaticMeshConverter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshStaticMeshConverter);
	URuntimeMeshStaticMeshConverter::~URuntimeMeshStaticMeshConverter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshStaticMeshConverter, URuntimeMeshStaticMeshConverter::StaticClass, TEXT("URuntimeMeshStaticMeshConverter"), &Z_Registration_Info_UClass_URuntimeMeshStaticMeshConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshStaticMeshConverter), 2121204907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_959143435(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
