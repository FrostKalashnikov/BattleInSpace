// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshModifier.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshModifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshModifier::execApplyToCollisionMesh)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_MeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyToCollisionMesh_Implementation(Z_Param_Out_MeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshModifier::execApplyToMesh)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyToMesh_Implementation(Z_Param_Out_MeshData);
		P_NATIVE_END;
	}
	struct RuntimeMeshModifier_eventApplyToCollisionMesh_Parms
	{
		FRuntimeMeshCollisionData MeshData;
	};
	struct RuntimeMeshModifier_eventApplyToMesh_Parms
	{
		FRuntimeMeshRenderableMeshData MeshData;
	};
	static FName NAME_URuntimeMeshModifier_ApplyToCollisionMesh = FName(TEXT("ApplyToCollisionMesh"));
	void URuntimeMeshModifier::ApplyToCollisionMesh(FRuntimeMeshCollisionData& MeshData)
	{
		RuntimeMeshModifier_eventApplyToCollisionMesh_Parms Parms;
		Parms.MeshData=MeshData;
		ProcessEvent(FindFunctionChecked(NAME_URuntimeMeshModifier_ApplyToCollisionMesh),&Parms);
		MeshData=Parms.MeshData;
	}
	static FName NAME_URuntimeMeshModifier_ApplyToMesh = FName(TEXT("ApplyToMesh"));
	void URuntimeMeshModifier::ApplyToMesh(FRuntimeMeshRenderableMeshData& MeshData)
	{
		RuntimeMeshModifier_eventApplyToMesh_Parms Parms;
		Parms.MeshData=MeshData;
		ProcessEvent(FindFunctionChecked(NAME_URuntimeMeshModifier_ApplyToMesh),&Parms);
		MeshData=Parms.MeshData;
	}
	void URuntimeMeshModifier::StaticRegisterNativesURuntimeMeshModifier()
	{
		UClass* Class = URuntimeMeshModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyToCollisionMesh", &URuntimeMeshModifier::execApplyToCollisionMesh },
			{ "ApplyToMesh", &URuntimeMeshModifier::execApplyToMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshModifier_eventApplyToCollisionMesh_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::NewProp_MeshData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshModifier" },
		{ "ModuleRelativePath", "Public/RuntimeMeshModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshModifier, nullptr, "ApplyToCollisionMesh", nullptr, nullptr, sizeof(RuntimeMeshModifier_eventApplyToCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshModifier_eventApplyToMesh_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::NewProp_MeshData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshModifier" },
		{ "ModuleRelativePath", "Public/RuntimeMeshModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshModifier, nullptr, "ApplyToMesh", nullptr, nullptr, sizeof(RuntimeMeshModifier_eventApplyToMesh_Parms), Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshModifier);
	UClass* Z_Construct_UClass_URuntimeMeshModifier_NoRegister()
	{
		return URuntimeMeshModifier::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshModifier_ApplyToCollisionMesh, "ApplyToCollisionMesh" }, // 396759548
		{ &Z_Construct_UFunction_URuntimeMeshModifier_ApplyToMesh, "ApplyToMesh" }, // 1819758644
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RuntimeMeshModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshModifier.h" },
		{ "ShortTooltip", "A RuntimeMeshModifier is a class containing logic to modify a mesh data passed to it in some way. This can range from optimizers, to additional data generators." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshModifier_Statics::ClassParams = {
		&URuntimeMeshModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshModifier()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshModifier.OuterSingleton, Z_Construct_UClass_URuntimeMeshModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshModifier.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshModifier>()
	{
		return URuntimeMeshModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshModifier);
	URuntimeMeshModifier::~URuntimeMeshModifier() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshModifier, URuntimeMeshModifier::StaticClass, TEXT("URuntimeMeshModifier"), &Z_Registration_Info_UClass_URuntimeMeshModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshModifier), 482068819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_438433224(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
