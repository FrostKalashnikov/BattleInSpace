// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderStaticMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderStaticMesh();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderStaticMesh::execSetComplexCollisionLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComplexCollisionLOD(Z_Param_InLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStaticMesh::execGetComplexCollisionLOD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetComplexCollisionLOD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStaticMesh::execSetMaxLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLOD(Z_Param_InMaxLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStaticMesh::execGetMaxLOD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxLOD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStaticMesh::execSetStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMesh(Z_Param_InStaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStaticMesh::execGetStaticMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetStaticMesh();
		P_NATIVE_END;
	}
	void URuntimeMeshProviderStaticMesh::StaticRegisterNativesURuntimeMeshProviderStaticMesh()
	{
		UClass* Class = URuntimeMeshProviderStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComplexCollisionLOD", &URuntimeMeshProviderStaticMesh::execGetComplexCollisionLOD },
			{ "GetMaxLOD", &URuntimeMeshProviderStaticMesh::execGetMaxLOD },
			{ "GetStaticMesh", &URuntimeMeshProviderStaticMesh::execGetStaticMesh },
			{ "SetComplexCollisionLOD", &URuntimeMeshProviderStaticMesh::execSetComplexCollisionLOD },
			{ "SetMaxLOD", &URuntimeMeshProviderStaticMesh::execSetMaxLOD },
			{ "SetStaticMesh", &URuntimeMeshProviderStaticMesh::execSetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics
	{
		struct RuntimeMeshProviderStaticMesh_eventGetComplexCollisionLOD_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderStaticMesh_eventGetComplexCollisionLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStaticMesh, nullptr, "GetComplexCollisionLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::RuntimeMeshProviderStaticMesh_eventGetComplexCollisionLOD_Parms), Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics
	{
		struct RuntimeMeshProviderStaticMesh_eventGetMaxLOD_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderStaticMesh_eventGetMaxLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStaticMesh, nullptr, "GetMaxLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::RuntimeMeshProviderStaticMesh_eventGetMaxLOD_Parms), Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics
	{
		struct RuntimeMeshProviderStaticMesh_eventGetStaticMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderStaticMesh_eventGetStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStaticMesh, nullptr, "GetStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::RuntimeMeshProviderStaticMesh_eventGetStaticMesh_Parms), Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics
	{
		struct RuntimeMeshProviderStaticMesh_eventSetComplexCollisionLOD_Parms
		{
			int32 InLOD;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::NewProp_InLOD = { "InLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderStaticMesh_eventSetComplexCollisionLOD_Parms, InLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::NewProp_InLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStaticMesh, nullptr, "SetComplexCollisionLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::RuntimeMeshProviderStaticMesh_eventSetComplexCollisionLOD_Parms), Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics
	{
		struct RuntimeMeshProviderStaticMesh_eventSetMaxLOD_Parms
		{
			int32 InMaxLOD;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::NewProp_InMaxLOD = { "InMaxLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderStaticMesh_eventSetMaxLOD_Parms, InMaxLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::NewProp_InMaxLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStaticMesh, nullptr, "SetMaxLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::RuntimeMeshProviderStaticMesh_eventSetMaxLOD_Parms), Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics
	{
		struct RuntimeMeshProviderStaticMesh_eventSetStaticMesh_Parms
		{
			UStaticMesh* InStaticMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::NewProp_InStaticMesh = { "InStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderStaticMesh_eventSetStaticMesh_Parms, InStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::NewProp_InStaticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStaticMesh, nullptr, "SetStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::RuntimeMeshProviderStaticMesh_eventSetStaticMesh_Parms), Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProviderStaticMesh);
	UClass* Z_Construct_UClass_URuntimeMeshProviderStaticMesh_NoRegister()
	{
		return URuntimeMeshProviderStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComplexCollisionLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComplexCollisionLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetComplexCollisionLOD, "GetComplexCollisionLOD" }, // 3032191156
		{ &Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetMaxLOD, "GetMaxLOD" }, // 2775000644
		{ &Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_GetStaticMesh, "GetStaticMesh" }, // 3734302989
		{ &Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetComplexCollisionLOD, "SetComplexCollisionLOD" }, // 2359202783
		{ &Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetMaxLOD, "SetMaxLOD" }, // 2540031218
		{ &Z_Construct_UFunction_URuntimeMeshProviderStaticMesh_SetStaticMesh, "SetStaticMesh" }, // 3725115357
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderStaticMesh.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "BlueprintGetter", "GetStaticMesh" },
		{ "BlueprintSetter", "SetStaticMesh" },
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderStaticMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_MaxLOD_MetaData[] = {
		{ "BlueprintGetter", "GetMaxLOD" },
		{ "BlueprintSetter", "SetMaxLOD" },
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderStaticMesh, MaxLOD), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_MaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_MaxLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_ComplexCollisionLOD_MetaData[] = {
		{ "BlueprintGetter", "GetComplexCollisionLOD" },
		{ "BlueprintSetter", "SetComplexCollisionLOD" },
		{ "Category", "RuntimeMesh|Providers|StaticMesh" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_ComplexCollisionLOD = { "ComplexCollisionLOD", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderStaticMesh, ComplexCollisionLOD), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_ComplexCollisionLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_ComplexCollisionLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_MaxLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::NewProp_ComplexCollisionLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::ClassParams = {
		&URuntimeMeshProviderStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderStaticMesh()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProviderStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProviderStaticMesh.OuterSingleton, Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProviderStaticMesh.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderStaticMesh>()
	{
		return URuntimeMeshProviderStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderStaticMesh);
	URuntimeMeshProviderStaticMesh::~URuntimeMeshProviderStaticMesh() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshProviderStaticMesh, URuntimeMeshProviderStaticMesh::StaticClass, TEXT("URuntimeMeshProviderStaticMesh"), &Z_Registration_Info_UClass_URuntimeMeshProviderStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProviderStaticMesh), 1778965689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_1409999181(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
