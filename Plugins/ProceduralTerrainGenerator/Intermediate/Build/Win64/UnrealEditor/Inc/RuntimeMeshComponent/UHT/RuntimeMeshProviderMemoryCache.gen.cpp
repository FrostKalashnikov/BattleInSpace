// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderMemoryCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderMemoryCache() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderMemoryCache();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderMemoryCache_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderMemoryCache::execClearCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCache();
		P_NATIVE_END;
	}
	void URuntimeMeshProviderMemoryCache::StaticRegisterNativesURuntimeMeshProviderMemoryCache()
	{
		UClass* Class = URuntimeMeshProviderMemoryCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCache", &URuntimeMeshProviderMemoryCache::execClearCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Cache" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderMemoryCache, nullptr, "ClearCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProviderMemoryCache);
	UClass* Z_Construct_UClass_URuntimeMeshProviderMemoryCache_NoRegister()
	{
		return URuntimeMeshProviderMemoryCache::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderPassthrough,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderMemoryCache_ClearCache, "ClearCache" }, // 3460456394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderMemoryCache.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderMemoryCache.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderMemoryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::ClassParams = {
		&URuntimeMeshProviderMemoryCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderMemoryCache()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProviderMemoryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProviderMemoryCache.OuterSingleton, Z_Construct_UClass_URuntimeMeshProviderMemoryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProviderMemoryCache.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderMemoryCache>()
	{
		return URuntimeMeshProviderMemoryCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderMemoryCache);
	URuntimeMeshProviderMemoryCache::~URuntimeMeshProviderMemoryCache() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderMemoryCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderMemoryCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshProviderMemoryCache, URuntimeMeshProviderMemoryCache::StaticClass, TEXT("URuntimeMeshProviderMemoryCache"), &Z_Registration_Info_UClass_URuntimeMeshProviderMemoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProviderMemoryCache), 2711334291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderMemoryCache_h_233490371(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderMemoryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderMemoryCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
