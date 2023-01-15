// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderBox();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderBox::execSetBoxMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderBox::execGetBoxMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetBoxMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderBox::execSetBoxRadius)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxRadius(Z_Param_Out_InRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderBox::execGetBoxRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoxRadius();
		P_NATIVE_END;
	}
	void URuntimeMeshProviderBox::StaticRegisterNativesURuntimeMeshProviderBox()
	{
		UClass* Class = URuntimeMeshProviderBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoxMaterial", &URuntimeMeshProviderBox::execGetBoxMaterial },
			{ "GetBoxRadius", &URuntimeMeshProviderBox::execGetBoxRadius },
			{ "SetBoxMaterial", &URuntimeMeshProviderBox::execSetBoxMaterial },
			{ "SetBoxRadius", &URuntimeMeshProviderBox::execSetBoxRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics
	{
		struct RuntimeMeshProviderBox_eventGetBoxMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderBox_eventGetBoxMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Box" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderBox, nullptr, "GetBoxMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::RuntimeMeshProviderBox_eventGetBoxMaterial_Parms), Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics
	{
		struct RuntimeMeshProviderBox_eventGetBoxRadius_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderBox_eventGetBoxRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Box" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderBox, nullptr, "GetBoxRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::RuntimeMeshProviderBox_eventGetBoxRadius_Parms), Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics
	{
		struct RuntimeMeshProviderBox_eventSetBoxMaterial_Parms
		{
			UMaterialInterface* InMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderBox_eventSetBoxMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Box" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderBox, nullptr, "SetBoxMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::RuntimeMeshProviderBox_eventSetBoxMaterial_Parms), Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics
	{
		struct RuntimeMeshProviderBox_eventSetBoxRadius_Parms
		{
			FVector InRadius;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::NewProp_InRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshProviderBox_eventSetBoxRadius_Parms, InRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::NewProp_InRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::NewProp_InRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::NewProp_InRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Box" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderBox, nullptr, "SetBoxRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::RuntimeMeshProviderBox_eventSetBoxRadius_Parms), Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshProviderBox);
	UClass* Z_Construct_UClass_URuntimeMeshProviderBox_NoRegister()
	{
		return URuntimeMeshProviderBox::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxMaterial, "GetBoxMaterial" }, // 3078400137
		{ &Z_Construct_UFunction_URuntimeMeshProviderBox_GetBoxRadius, "GetBoxRadius" }, // 2383857398
		{ &Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxMaterial, "SetBoxMaterial" }, // 1000428127
		{ &Z_Construct_UFunction_URuntimeMeshProviderBox_SetBoxRadius, "SetBoxRadius" }, // 3490600006
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderBox.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_BoxRadius_MetaData[] = {
		{ "BlueprintGetter", "GetBoxRadius" },
		{ "BlueprintSetter", "SetBoxRadius" },
		{ "Category", "RuntimeMesh|Providers|Box" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_BoxRadius = { "BoxRadius", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderBox, BoxRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_BoxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_BoxRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_Material_MetaData[] = {
		{ "BlueprintGetter", "GetBoxMaterial" },
		{ "BlueprintSetter", "SetBoxMaterial" },
		{ "Category", "RuntimeMesh|Providers|Box" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeMeshProviderBox, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_BoxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderBox_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderBox_Statics::ClassParams = {
		&URuntimeMeshProviderBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderBox()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshProviderBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshProviderBox.OuterSingleton, Z_Construct_UClass_URuntimeMeshProviderBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshProviderBox.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderBox>()
	{
		return URuntimeMeshProviderBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderBox);
	URuntimeMeshProviderBox::~URuntimeMeshProviderBox() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshProviderBox, URuntimeMeshProviderBox::StaticClass, TEXT("URuntimeMeshProviderBox"), &Z_Registration_Info_UClass_URuntimeMeshProviderBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshProviderBox), 2595900341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_4169395247(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
