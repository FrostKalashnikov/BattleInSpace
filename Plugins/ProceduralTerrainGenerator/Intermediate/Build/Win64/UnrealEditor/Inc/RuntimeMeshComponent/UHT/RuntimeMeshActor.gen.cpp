// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARuntimeMeshActor();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARuntimeMeshActor_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(ARuntimeMeshActor::execGetRuntimeMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshComponent**)Z_Param__Result=P_THIS->GetRuntimeMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARuntimeMeshActor::execSetRuntimeMeshMobility)
	{
		P_GET_ENUM(ERuntimeMeshMobility,Z_Param_NewMobility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeMeshMobility(ERuntimeMeshMobility(Z_Param_NewMobility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARuntimeMeshActor::execGetRuntimeMeshMobility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERuntimeMeshMobility*)Z_Param__Result=P_THIS->GetRuntimeMeshMobility();
		P_NATIVE_END;
	}
	void ARuntimeMeshActor::StaticRegisterNativesARuntimeMeshActor()
	{
		UClass* Class = ARuntimeMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRuntimeMeshComponent", &ARuntimeMeshActor::execGetRuntimeMeshComponent },
			{ "GetRuntimeMeshMobility", &ARuntimeMeshActor::execGetRuntimeMeshMobility },
			{ "SetRuntimeMeshMobility", &ARuntimeMeshActor::execSetRuntimeMeshMobility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics
	{
		struct RuntimeMeshActor_eventGetRuntimeMeshComponent_Parms
		{
			URuntimeMeshComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshActor_eventGetRuntimeMeshComponent_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshActor" },
		{ "Comment", "/** Returns RuntimeMeshComponent subobject **/" },
		{ "DisplayName", "Get Runtime Mesh Component" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
		{ "ToolTip", "Returns RuntimeMeshComponent subobject *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, nullptr, "GetRuntimeMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::RuntimeMeshActor_eventGetRuntimeMeshComponent_Parms), Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms, ReturnValue), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) }; // 401337605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshActor" },
		{ "DisplayName", "Get Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, nullptr, "GetRuntimeMeshMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms), Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility NewMobility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMobility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMobility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility = { "NewMobility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms, NewMobility), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) }; // 401337605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshActor" },
		{ "DisplayName", "Set Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, nullptr, "SetRuntimeMeshMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms), Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARuntimeMeshActor);
	UClass* Z_Construct_UClass_ARuntimeMeshActor_NoRegister()
	{
		return ARuntimeMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ARuntimeMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARuntimeMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARuntimeMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent, "GetRuntimeMeshComponent" }, // 874483674
		{ &Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility, "GetRuntimeMeshMobility" }, // 1960987699
		{ &Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility, "SetRuntimeMeshMobility" }, // 1805762339
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "RuntimeMeshActor.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent = { "RuntimeMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARuntimeMeshActor, RuntimeMeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARuntimeMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARuntimeMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARuntimeMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARuntimeMeshActor_Statics::ClassParams = {
		&ARuntimeMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARuntimeMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARuntimeMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARuntimeMeshActor()
	{
		if (!Z_Registration_Info_UClass_ARuntimeMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARuntimeMeshActor.OuterSingleton, Z_Construct_UClass_ARuntimeMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARuntimeMeshActor.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<ARuntimeMeshActor>()
	{
		return ARuntimeMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARuntimeMeshActor);
	ARuntimeMeshActor::~ARuntimeMeshActor() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARuntimeMeshActor, ARuntimeMeshActor::StaticClass, TEXT("ARuntimeMeshActor"), &Z_Registration_Info_UClass_ARuntimeMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARuntimeMeshActor), 2057473682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshActor_h_4287858060(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
