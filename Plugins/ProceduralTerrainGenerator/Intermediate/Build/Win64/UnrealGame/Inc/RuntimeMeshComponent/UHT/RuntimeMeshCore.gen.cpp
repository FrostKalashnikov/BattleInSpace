// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshCore() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeMeshMobility;
	static UEnum* ERuntimeMeshMobility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshMobility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeMeshMobility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshMobility"));
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshMobility.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshMobility>()
	{
		return ERuntimeMeshMobility_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::Enumerators[] = {
		{ "ERuntimeMeshMobility::Movable", (int64)ERuntimeMeshMobility::Movable },
		{ "ERuntimeMeshMobility::Stationary", (int64)ERuntimeMeshMobility::Stationary },
		{ "ERuntimeMeshMobility::Static", (int64)ERuntimeMeshMobility::Static },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Mobility status for a RuntimeMeshComponent */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "Movable.Name", "ERuntimeMeshMobility::Movable" },
		{ "Static.Name", "ERuntimeMeshMobility::Static" },
		{ "Stationary.Name", "ERuntimeMeshMobility::Stationary" },
		{ "ToolTip", "Mobility status for a RuntimeMeshComponent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		"ERuntimeMeshMobility",
		"ERuntimeMeshMobility",
		Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshMobility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeMeshMobility.InnerSingleton, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshMobility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency;
	static UEnum* ERuntimeMeshUpdateFrequency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshUpdateFrequency"));
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshUpdateFrequency>()
	{
		return ERuntimeMeshUpdateFrequency_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::Enumerators[] = {
		{ "ERuntimeMeshUpdateFrequency::Average", (int64)ERuntimeMeshUpdateFrequency::Average },
		{ "ERuntimeMeshUpdateFrequency::Frequent", (int64)ERuntimeMeshUpdateFrequency::Frequent },
		{ "ERuntimeMeshUpdateFrequency::Infrequent", (int64)ERuntimeMeshUpdateFrequency::Infrequent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::Enum_MetaDataParams[] = {
		{ "Average.Comment", "/* Tries to skip recreating the scene proxy if possible. */" },
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "ERuntimeMeshUpdateFrequency::Average" },
		{ "Average.ToolTip", "Tries to skip recreating the scene proxy if possible." },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Update frequency for a section. Used to optimize for update or render speed*/" },
		{ "Frequent.Comment", "/* Tries to skip recreating the scene proxy if possible and optimizes the buffers for frequent updates. */" },
		{ "Frequent.DisplayName", "Frequent" },
		{ "Frequent.Name", "ERuntimeMeshUpdateFrequency::Frequent" },
		{ "Frequent.ToolTip", "Tries to skip recreating the scene proxy if possible and optimizes the buffers for frequent updates." },
		{ "Infrequent.Comment", "/* If the component is static it will try to use the static rendering path (this will force a recreate of the scene proxy) */" },
		{ "Infrequent.DisplayName", "Infrequent" },
		{ "Infrequent.Name", "ERuntimeMeshUpdateFrequency::Infrequent" },
		{ "Infrequent.ToolTip", "If the component is static it will try to use the static rendering path (this will force a recreate of the scene proxy)" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Update frequency for a section. Used to optimize for update or render speed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		"ERuntimeMeshUpdateFrequency",
		"ERuntimeMeshUpdateFrequency",
		Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency.InnerSingleton, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode;
	static UEnum* ERuntimeMeshCollisionCookingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshCollisionCookingMode"));
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionCookingMode>()
	{
		return ERuntimeMeshCollisionCookingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::Enumerators[] = {
		{ "ERuntimeMeshCollisionCookingMode::CollisionPerformance", (int64)ERuntimeMeshCollisionCookingMode::CollisionPerformance },
		{ "ERuntimeMeshCollisionCookingMode::CookingPerformance", (int64)ERuntimeMeshCollisionCookingMode::CookingPerformance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CollisionPerformance.Comment", "/*\n\x09*\x09""Favors runtime collision performance of cooking speed.\n\x09*\x09This means that cooking a new mesh will be slower, but collision will be faster.\n\x09*/" },
		{ "CollisionPerformance.DisplayName", "Collision Performance" },
		{ "CollisionPerformance.Name", "ERuntimeMeshCollisionCookingMode::CollisionPerformance" },
		{ "CollisionPerformance.ToolTip", "*       Favors runtime collision performance of cooking speed.\n*       This means that cooking a new mesh will be slower, but collision will be faster." },
		{ "Comment", "/*\n*\x09""Configuration flag for the collision cooking to prioritize cooking speed or collision performance.\n*/" },
		{ "CookingPerformance.Comment", "/*\n\x09*\x09""Favors cooking speed over collision performance.\n\x09*\x09This means that cooking a new mesh will be faster, but collision will be slower.\n\x09*/" },
		{ "CookingPerformance.DisplayName", "Cooking Performance" },
		{ "CookingPerformance.Name", "ERuntimeMeshCollisionCookingMode::CookingPerformance" },
		{ "CookingPerformance.ToolTip", "*       Favors cooking speed over collision performance.\n*       This means that cooking a new mesh will be faster, but collision will be slower." },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "*      Configuration flag for the collision cooking to prioritize cooking speed or collision performance." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		"ERuntimeMeshCollisionCookingMode",
		"ERuntimeMeshCollisionCookingMode",
		Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode.InnerSingleton, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority;
	static UEnum* ERuntimeMeshThreadingPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshThreadingPriority"));
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshThreadingPriority>()
	{
		return ERuntimeMeshThreadingPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::Enumerators[] = {
		{ "ERuntimeMeshThreadingPriority::Normal", (int64)ERuntimeMeshThreadingPriority::Normal },
		{ "ERuntimeMeshThreadingPriority::AboveNormal", (int64)ERuntimeMeshThreadingPriority::AboveNormal },
		{ "ERuntimeMeshThreadingPriority::BelowNormal", (int64)ERuntimeMeshThreadingPriority::BelowNormal },
		{ "ERuntimeMeshThreadingPriority::Highest", (int64)ERuntimeMeshThreadingPriority::Highest },
		{ "ERuntimeMeshThreadingPriority::Lowest", (int64)ERuntimeMeshThreadingPriority::Lowest },
		{ "ERuntimeMeshThreadingPriority::SlightlyBelowNormal", (int64)ERuntimeMeshThreadingPriority::SlightlyBelowNormal },
		{ "ERuntimeMeshThreadingPriority::TimeCritical", (int64)ERuntimeMeshThreadingPriority::TimeCritical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::Enum_MetaDataParams[] = {
		{ "AboveNormal.Name", "ERuntimeMeshThreadingPriority::AboveNormal" },
		{ "BelowNormal.Name", "ERuntimeMeshThreadingPriority::BelowNormal" },
		{ "BlueprintType", "true" },
		{ "Highest.Name", "ERuntimeMeshThreadingPriority::Highest" },
		{ "Lowest.Name", "ERuntimeMeshThreadingPriority::Lowest" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "Normal.Name", "ERuntimeMeshThreadingPriority::Normal" },
		{ "SlightlyBelowNormal.Name", "ERuntimeMeshThreadingPriority::SlightlyBelowNormal" },
		{ "TimeCritical.Name", "ERuntimeMeshThreadingPriority::TimeCritical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		"ERuntimeMeshThreadingPriority",
		"ERuntimeMeshThreadingPriority",
		Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority.InnerSingleton, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshTangent;
class UScriptStruct* FRuntimeMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshTangent, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshTangent.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshTangent>()
{
	return FRuntimeMeshTangent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Direction of X tangent for this vertex */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Direction of X tangent for this vertex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FRuntimeMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshTangent), &Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshTangent",
		sizeof(FRuntimeMeshTangent),
		alignof(FRuntimeMeshTangent),
		Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshTangent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshTangent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData;
class UScriptStruct* FRuntimeMeshDistanceFieldData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshDistanceFieldData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshDistanceFieldData>()
{
	return FRuntimeMeshDistanceFieldData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshDistanceFieldData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshDistanceFieldData",
		sizeof(FRuntimeMeshDistanceFieldData),
		alignof(FRuntimeMeshDistanceFieldData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics::EnumInfo[] = {
		{ ERuntimeMeshMobility_StaticEnum, TEXT("ERuntimeMeshMobility"), &Z_Registration_Info_UEnum_ERuntimeMeshMobility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 401337605U) },
		{ ERuntimeMeshUpdateFrequency_StaticEnum, TEXT("ERuntimeMeshUpdateFrequency"), &Z_Registration_Info_UEnum_ERuntimeMeshUpdateFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1982090825U) },
		{ ERuntimeMeshCollisionCookingMode_StaticEnum, TEXT("ERuntimeMeshCollisionCookingMode"), &Z_Registration_Info_UEnum_ERuntimeMeshCollisionCookingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1780715496U) },
		{ ERuntimeMeshThreadingPriority_StaticEnum, TEXT("ERuntimeMeshThreadingPriority"), &Z_Registration_Info_UEnum_ERuntimeMeshThreadingPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3823912335U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics::ScriptStructInfo[] = {
		{ FRuntimeMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewStructOps, TEXT("RuntimeMeshTangent"), &Z_Registration_Info_UScriptStruct_RuntimeMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshTangent), 4146801855U) },
		{ FRuntimeMeshDistanceFieldData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics::NewStructOps, TEXT("RuntimeMeshDistanceFieldData"), &Z_Registration_Info_UScriptStruct_RuntimeMeshDistanceFieldData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshDistanceFieldData), 2897006705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_918329860(TEXT("/Script/RuntimeMeshComponent"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
