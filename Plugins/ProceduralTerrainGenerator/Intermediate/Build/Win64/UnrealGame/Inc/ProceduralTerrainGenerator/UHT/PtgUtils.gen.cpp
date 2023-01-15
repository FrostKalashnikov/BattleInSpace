// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTerrainGenerator/Public/PtgUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePtgUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgUtils();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgUtils_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes();
	UPackage* Z_Construct_UPackage__Script_ProceduralTerrainGenerator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgDebugMessageTypes;
	static UEnum* EPtgDebugMessageTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgDebugMessageTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgDebugMessageTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgDebugMessageTypes"));
		}
		return Z_Registration_Info_UEnum_EPtgDebugMessageTypes.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgDebugMessageTypes>()
	{
		return EPtgDebugMessageTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::Enumerators[] = {
		{ "EPtgDebugMessageTypes::Info", (int64)EPtgDebugMessageTypes::Info },
		{ "EPtgDebugMessageTypes::Warning", (int64)EPtgDebugMessageTypes::Warning },
		{ "EPtgDebugMessageTypes::Error", (int64)EPtgDebugMessageTypes::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Defines the debug message types.\n*/" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EPtgDebugMessageTypes::Error" },
		{ "Info.DisplayName", "Info" },
		{ "Info.Name", "EPtgDebugMessageTypes::Info" },
		{ "ModuleRelativePath", "Public/PtgUtils.h" },
		{ "ToolTip", "Defines the debug message types." },
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EPtgDebugMessageTypes::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgDebugMessageTypes",
		"EPtgDebugMessageTypes",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes()
	{
		if (!Z_Registration_Info_UEnum_EPtgDebugMessageTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgDebugMessageTypes.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgDebugMessageTypes.InnerSingleton;
	}
	DEFINE_FUNCTION(UPtgUtils::execPrintDebugMessage)
	{
		P_GET_OBJECT(UObject,Z_Param_caller);
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_GET_ENUM(EPtgDebugMessageTypes,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeOnScreen);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPtgUtils::PrintDebugMessage(Z_Param_caller,Z_Param_msg,EPtgDebugMessageTypes(Z_Param_type),Z_Param_timeOnScreen);
		P_NATIVE_END;
	}
	void UPtgUtils::StaticRegisterNativesUPtgUtils()
	{
		UClass* Class = UPtgUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintDebugMessage", &UPtgUtils::execPrintDebugMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics
	{
		struct PtgUtils_eventPrintDebugMessage_Parms
		{
			const UObject* caller;
			FString msg;
			EPtgDebugMessageTypes type;
			float timeOnScreen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_caller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_caller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeOnScreen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeOnScreen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_caller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgUtils_eventPrintDebugMessage_Parms, caller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_caller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_caller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgUtils_eventPrintDebugMessage_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_msg_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgUtils_eventPrintDebugMessage_Parms, type), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgDebugMessageTypes, METADATA_PARAMS(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type_MetaData)) }; // 1396205459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_timeOnScreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_timeOnScreen = { "timeOnScreen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgUtils_eventPrintDebugMessage_Parms, timeOnScreen), METADATA_PARAMS(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_timeOnScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_timeOnScreen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_caller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_msg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::NewProp_timeOnScreen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Utils" },
		{ "Comment", "/**\n\x09* Prints debug message to screen and log. Color depends on the type.\n\x09*\n\x09* @param caller\x09\x09\x09- Caller object.\n\x09* @param msg\x09\x09\x09- Message to print.\n\x09* @param type\x09\x09\x09- Message type.\n\x09* @param timeOnScreen\x09- Time (in seconds) message will be on screen.\n\x09*/" },
		{ "CPP_Default_caller", "None" },
		{ "CPP_Default_msg", "" },
		{ "CPP_Default_timeOnScreen", "5.000000" },
		{ "CPP_Default_type", "Info" },
		{ "ModuleRelativePath", "Public/PtgUtils.h" },
		{ "ToolTip", "Prints debug message to screen and log. Color depends on the type.\n\n@param caller                 - Caller object.\n@param msg                    - Message to print.\n@param type                   - Message type.\n@param timeOnScreen   - Time (in seconds) message will be on screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgUtils, nullptr, "PrintDebugMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::PtgUtils_eventPrintDebugMessage_Parms), Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgUtils_PrintDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgUtils_PrintDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPtgUtils);
	UClass* Z_Construct_UClass_UPtgUtils_NoRegister()
	{
		return UPtgUtils::StaticClass();
	}
	struct Z_Construct_UClass_UPtgUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPtgUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPtgUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPtgUtils_PrintDebugMessage, "PrintDebugMessage" }, // 2106034368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Utils library. Can be used in blueprints, if exposed.\n */" },
		{ "IncludePath", "PtgUtils.h" },
		{ "ModuleRelativePath", "Public/PtgUtils.h" },
		{ "ToolTip", "Utils library. Can be used in blueprints, if exposed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPtgUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPtgUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPtgUtils_Statics::ClassParams = {
		&UPtgUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPtgUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPtgUtils()
	{
		if (!Z_Registration_Info_UClass_UPtgUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPtgUtils.OuterSingleton, Z_Construct_UClass_UPtgUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPtgUtils.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<UPtgUtils>()
	{
		return UPtgUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPtgUtils);
	UPtgUtils::~UPtgUtils() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics::EnumInfo[] = {
		{ EPtgDebugMessageTypes_StaticEnum, TEXT("EPtgDebugMessageTypes"), &Z_Registration_Info_UEnum_EPtgDebugMessageTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1396205459U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPtgUtils, UPtgUtils::StaticClass, TEXT("UPtgUtils"), &Z_Registration_Info_UClass_UPtgUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPtgUtils), 3841418387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_1200024507(TEXT("/Script/ProceduralTerrainGenerator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
