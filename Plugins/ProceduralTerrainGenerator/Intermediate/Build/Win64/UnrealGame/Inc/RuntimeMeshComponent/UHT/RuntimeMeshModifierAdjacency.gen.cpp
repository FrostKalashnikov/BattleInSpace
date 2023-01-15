// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Modifiers/RuntimeMeshModifierAdjacency.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshModifierAdjacency() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshModifierAdjacency::execCalculateTessellationIndices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshModifierAdjacency::CalculateTessellationIndices(Z_Param_Out_MeshData);
		P_NATIVE_END;
	}
	void URuntimeMeshModifierAdjacency::StaticRegisterNativesURuntimeMeshModifierAdjacency()
	{
		UClass* Class = URuntimeMeshModifierAdjacency::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTessellationIndices", &URuntimeMeshModifierAdjacency::execCalculateTessellationIndices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics
	{
		struct RuntimeMeshModifierAdjacency_eventCalculateTessellationIndices_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshModifierAdjacency_eventCalculateTessellationIndices_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::NewProp_MeshData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Modifiers|Adjacency" },
		{ "Comment", "/*\n\x09*\x09""Calculates the tessellation indices for the supplied mesh data, setting the result back to the tessellation triangles in the mesh data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierAdjacency.h" },
		{ "ToolTip", "*       Calculates the tessellation indices for the supplied mesh data, setting the result back to the tessellation triangles in the mesh data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshModifierAdjacency, nullptr, "CalculateTessellationIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::RuntimeMeshModifierAdjacency_eventCalculateTessellationIndices_Parms), Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshModifierAdjacency);
	UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency_NoRegister()
	{
		return URuntimeMeshModifierAdjacency::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices, "CalculateTessellationIndices" }, // 2623769508
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Modifiers/RuntimeMeshModifierAdjacency.h" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierAdjacency.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshModifierAdjacency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::ClassParams = {
		&URuntimeMeshModifierAdjacency::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshModifierAdjacency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshModifierAdjacency.OuterSingleton, Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshModifierAdjacency.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshModifierAdjacency>()
	{
		return URuntimeMeshModifierAdjacency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshModifierAdjacency);
	URuntimeMeshModifierAdjacency::~URuntimeMeshModifierAdjacency() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierAdjacency_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierAdjacency_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshModifierAdjacency, URuntimeMeshModifierAdjacency::StaticClass, TEXT("URuntimeMeshModifierAdjacency"), &Z_Registration_Info_UClass_URuntimeMeshModifierAdjacency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshModifierAdjacency), 3119381066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierAdjacency_h_423376998(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierAdjacency_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Modifiers_RuntimeMeshModifierAdjacency_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
