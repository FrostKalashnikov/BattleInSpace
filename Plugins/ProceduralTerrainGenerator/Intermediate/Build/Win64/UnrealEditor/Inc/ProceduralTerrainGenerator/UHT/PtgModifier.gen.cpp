// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTerrainGenerator/Public/PtgModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePtgModifier() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_APtgModifier();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_APtgModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralTerrainGenerator();
// End Cross Module References
	struct PtgModifier_eventGetShapeComponent_Parms
	{
		UShapeComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		PtgModifier_eventGetShapeComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_APtgModifier_GetShapeComponent = FName(TEXT("GetShapeComponent"));
	UShapeComponent* APtgModifier::GetShapeComponent() const
	{
		PtgModifier_eventGetShapeComponent_Parms Parms;
		const_cast<APtgModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_APtgModifier_GetShapeComponent),&Parms);
		return Parms.ReturnValue;
	}
	void APtgModifier::StaticRegisterNativesAPtgModifier()
	{
	}
	struct Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgModifier_eventGetShapeComponent_Parms, ReturnValue), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Modifier" },
		{ "Comment", "/**\n\x09* Gets the modifier shape component.\n\x09*\n\x09* @return The modifier shape component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgModifier.h" },
		{ "ToolTip", "Gets the modifier shape component.\n\n@return The modifier shape component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgModifier, nullptr, "GetShapeComponent", nullptr, nullptr, sizeof(PtgModifier_eventGetShapeComponent_Parms), Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgModifier_GetShapeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgModifier_GetShapeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APtgModifier);
	UClass* Z_Construct_UClass_APtgModifier_NoRegister()
	{
		return APtgModifier::StaticClass();
	}
	struct Z_Construct_UClass_APtgModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APtgModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APtgModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APtgModifier_GetShapeComponent, "GetShapeComponent" }, // 290258941
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Base class for nature generation modifiers.\n*/" },
		{ "IncludePath", "PtgModifier.h" },
		{ "ModuleRelativePath", "Public/PtgModifier.h" },
		{ "ToolTip", "Base class for nature generation modifiers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APtgModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APtgModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APtgModifier_Statics::ClassParams = {
		&APtgModifier::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APtgModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APtgModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APtgModifier()
	{
		if (!Z_Registration_Info_UClass_APtgModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APtgModifier.OuterSingleton, Z_Construct_UClass_APtgModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APtgModifier.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<APtgModifier>()
	{
		return APtgModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APtgModifier);
	APtgModifier::~APtgModifier() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APtgModifier, APtgModifier::StaticClass, TEXT("APtgModifier"), &Z_Registration_Info_UClass_APtgModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APtgModifier), 701804705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgModifier_h_948731353(TEXT("/Script/ProceduralTerrainGenerator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
