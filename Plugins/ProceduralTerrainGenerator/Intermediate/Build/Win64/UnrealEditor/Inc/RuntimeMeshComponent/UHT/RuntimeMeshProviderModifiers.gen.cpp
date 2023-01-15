// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderModifiers() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderModifiers();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderModifiers_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderModifiers::execRemoveModifier)
	{
		P_GET_OBJECT(URuntimeMeshModifier,Z_Param_ModifierToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveModifier(Z_Param_ModifierToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderModifiers::execAddModifier)
	{
		P_GET_OBJECT(URuntimeMeshModifier,Z_Param_NewModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddModifier(Z_Param_NewModifier);
		P_NATIVE_END;
	}
	void URuntimeMeshProviderModifiers::StaticRegisterNativesURuntimeMeshProviderModifiers()
	{
		UClass* Class = URuntimeMeshProviderModifiers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddModifier", &URuntimeMeshProviderModifiers::execAddModifier },
			{ "RemoveModifier", &URuntimeMeshProviderModifiers::execRemoveModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics
	{
		struct RuntimeMeshProviderModifiers_eventAddModifier_Parms
		{
			URuntimeMeshModifier* NewModifier;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::NewProp_NewModifier = { "NewModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderModifiers_eventAddModifier_Parms, NewModifier), Z_Construct_UClass_URuntimeMeshModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::NewProp_NewModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Modifiers" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderModifiers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderModifiers, nullptr, "AddModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::RuntimeMeshProviderModifiers_eventAddModifier_Parms), Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics
	{
		struct RuntimeMeshProviderModifiers_eventRemoveModifier_Parms
		{
			URuntimeMeshModifier* ModifierToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifierToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::NewProp_ModifierToRemove = { "ModifierToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderModifiers_eventRemoveModifier_Parms, ModifierToRemove), Z_Construct_UClass_URuntimeMeshModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::NewProp_ModifierToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Modifiers" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderModifiers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderModifiers, nullptr, "RemoveModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::RuntimeMeshProviderModifiers_eventRemoveModifier_Parms), Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProviderModifiers);
	UClass* Z_Construct_UClass_URuntimeMeshProviderModifiers_NoRegister()
	{
		return URuntimeMeshProviderModifiers::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderPassthrough,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderModifiers_AddModifier, "AddModifier" }, // 2846175953
		{ &Z_Construct_UFunction_URuntimeMeshProviderModifiers_RemoveModifier, "RemoveModifier" }, // 1299743886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderModifiers.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderModifiers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URuntimeMeshModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderModifiers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderModifiers, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::NewProp_Modifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderModifiers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::ClassParams = {
		&URuntimeMeshProviderModifiers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderModifiers()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProviderModifiers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProviderModifiers.OuterSingleton, Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProviderModifiers.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderModifiers>()
	{
		return URuntimeMeshProviderModifiers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderModifiers);
	URuntimeMeshProviderModifiers::~URuntimeMeshProviderModifiers() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshProviderModifiers, URuntimeMeshProviderModifiers::StaticClass, TEXT("URuntimeMeshProviderModifiers"), &Z_Registration_Info_UClass_URuntimeMeshProviderModifiers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProviderModifiers), 2576269943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_1362905654(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
