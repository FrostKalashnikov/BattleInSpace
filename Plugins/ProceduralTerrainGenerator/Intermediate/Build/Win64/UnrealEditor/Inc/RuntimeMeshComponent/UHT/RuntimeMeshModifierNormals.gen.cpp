// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Modifiers/RuntimeMeshModifierNormals.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshModifierNormals() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierNormals();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierNormals_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshModifierNormals::execCalculateNormalsTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_UBOOL(Z_Param_bInComputeSmoothNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshModifierNormals::CalculateNormalsTangents(Z_Param_Out_MeshData,Z_Param_bInComputeSmoothNormals);
		P_NATIVE_END;
	}
	void URuntimeMeshModifierNormals::StaticRegisterNativesURuntimeMeshModifierNormals()
	{
		UClass* Class = URuntimeMeshModifierNormals::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateNormalsTangents", &URuntimeMeshModifierNormals::execCalculateNormalsTangents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics
	{
		struct RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			bool bInComputeSmoothNormals;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static void NewProp_bInComputeSmoothNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComputeSmoothNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	void Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals_SetBit(void* Obj)
	{
		((RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms*)Obj)->bInComputeSmoothNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals = { "bInComputeSmoothNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms), &Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Modifiers|Normals" },
		{ "CPP_Default_bInComputeSmoothNormals", "false" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierNormals.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshModifierNormals, nullptr, "CalculateNormalsTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms), Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshModifierNormals);
	UClass* Z_Construct_UClass_URuntimeMeshModifierNormals_NoRegister()
	{
		return URuntimeMeshModifierNormals::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshModifierNormals_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeSmoothNormals_MetaData[];
#endif
		static void NewProp_bComputeSmoothNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeSmoothNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents, "CalculateNormalsTangents" }, // 1123449912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Modifiers/RuntimeMeshModifierNormals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierNormals.h" },
		{ "ShortTooltip", "A RuntimeMeshModifierNormals is a class that implements logic to generate normals and tangents for a supplied mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_MetaData[] = {
		{ "Category", "RuntimeMesh|Modifiers|Normals" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierNormals.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_SetBit(void* Obj)
	{
		((URuntimeMeshModifierNormals*)Obj)->bComputeSmoothNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals = { "bComputeSmoothNormals", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeMeshModifierNormals), &Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshModifierNormals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::ClassParams = {
		&URuntimeMeshModifierNormals::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshModifierNormals()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshModifierNormals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshModifierNormals.OuterSingleton, Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshModifierNormals.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshModifierNormals>()
	{
		return URuntimeMeshModifierNormals::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshModifierNormals);
	URuntimeMeshModifierNormals::~URuntimeMeshModifierNormals() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierNormals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierNormals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshModifierNormals, URuntimeMeshModifierNormals::StaticClass, TEXT("URuntimeMeshModifierNormals"), &Z_Registration_Info_UClass_URuntimeMeshModifierNormals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshModifierNormals), 3687170691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierNormals_h_3196109856(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierNormals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierNormals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
