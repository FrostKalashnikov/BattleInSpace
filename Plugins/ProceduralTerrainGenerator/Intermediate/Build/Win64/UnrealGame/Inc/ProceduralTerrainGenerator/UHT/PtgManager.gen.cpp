// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTerrainGenerator/Public/PtgManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePtgManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_APtgManager();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_APtgManager_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_APtgModifier_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgFastNoiseLiteWrapper_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType();
	PROCEDURALTERRAINGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPtgBiomaActors();
	PROCEDURALTERRAINGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPtgBiomaNature();
	PROCEDURALTERRAINGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPtgTriangle();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_UPtgRuntimeMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralTerrainGenerator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType;
	static UEnum* EPtgWaterHeightGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgWaterHeightGenerationType"));
		}
		return Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgWaterHeightGenerationType>()
	{
		return EPtgWaterHeightGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::Enumerators[] = {
		{ "EPtgWaterHeightGenerationType::RandomPercentage", (int64)EPtgWaterHeightGenerationType::RandomPercentage },
		{ "EPtgWaterHeightGenerationType::FixedPercentage", (int64)EPtgWaterHeightGenerationType::FixedPercentage },
		{ "EPtgWaterHeightGenerationType::FixedHeight", (int64)EPtgWaterHeightGenerationType::FixedHeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Types of water height generation. Fixed Height is only available on plane terrain shape.\n*/" },
		{ "FixedHeight.DisplayName", "Fixed Height" },
		{ "FixedHeight.Name", "EPtgWaterHeightGenerationType::FixedHeight" },
		{ "FixedPercentage.DisplayName", "Fixed Percentage" },
		{ "FixedPercentage.Name", "EPtgWaterHeightGenerationType::FixedPercentage" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "RandomPercentage.DisplayName", "Random Percentage" },
		{ "RandomPercentage.Name", "EPtgWaterHeightGenerationType::RandomPercentage" },
		{ "ToolTip", "Types of water height generation. Fixed Height is only available on plane terrain shape." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgWaterHeightGenerationType",
		"EPtgWaterHeightGenerationType",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType()
	{
		if (!Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgNatureBiomas;
	static UEnum* EPtgNatureBiomas_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgNatureBiomas.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgNatureBiomas.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgNatureBiomas"));
		}
		return Z_Registration_Info_UEnum_EPtgNatureBiomas.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgNatureBiomas>()
	{
		return EPtgNatureBiomas_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::Enumerators[] = {
		{ "EPtgNatureBiomas::Earth", (int64)EPtgNatureBiomas::Earth },
		{ "EPtgNatureBiomas::Underwater", (int64)EPtgNatureBiomas::Underwater },
		{ "EPtgNatureBiomas::Both", (int64)EPtgNatureBiomas::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "EPtgNatureBiomas::Both" },
		{ "Comment", "/**\n* Types of biomas.\n*/" },
		{ "Earth.DisplayName", "Earth surface" },
		{ "Earth.Name", "EPtgNatureBiomas::Earth" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Types of biomas." },
		{ "Underwater.DisplayName", "Underwater" },
		{ "Underwater.Name", "EPtgNatureBiomas::Underwater" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgNatureBiomas",
		"EPtgNatureBiomas",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas()
	{
		if (!Z_Registration_Info_UEnum_EPtgNatureBiomas.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgNatureBiomas.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgNatureBiomas.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgNatureRotationTypes;
	static UEnum* EPtgNatureRotationTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgNatureRotationTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgNatureRotationTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgNatureRotationTypes"));
		}
		return Z_Registration_Info_UEnum_EPtgNatureRotationTypes.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgNatureRotationTypes>()
	{
		return EPtgNatureRotationTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::Enumerators[] = {
		{ "EPtgNatureRotationTypes::Random", (int64)EPtgNatureRotationTypes::Random },
		{ "EPtgNatureRotationTypes::TerrainShapeNormal", (int64)EPtgNatureRotationTypes::TerrainShapeNormal },
		{ "EPtgNatureRotationTypes::MeshSurfaceNormal", (int64)EPtgNatureRotationTypes::MeshSurfaceNormal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Types of nature and actors rotations.\n*/" },
		{ "MeshSurfaceNormal.DisplayName", "Mesh Surface Normal" },
		{ "MeshSurfaceNormal.Name", "EPtgNatureRotationTypes::MeshSurfaceNormal" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EPtgNatureRotationTypes::Random" },
		{ "TerrainShapeNormal.DisplayName", "Terrain Shape Normal" },
		{ "TerrainShapeNormal.Name", "EPtgNatureRotationTypes::TerrainShapeNormal" },
		{ "ToolTip", "Types of nature and actors rotations." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgNatureRotationTypes",
		"EPtgNatureRotationTypes",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes()
	{
		if (!Z_Registration_Info_UEnum_EPtgNatureRotationTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgNatureRotationTypes.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgNatureRotationTypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PtgBiomaNature;
class UScriptStruct* FPtgBiomaNature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PtgBiomaNature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PtgBiomaNature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPtgBiomaNature, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("PtgBiomaNature"));
	}
	return Z_Registration_Info_UScriptStruct_PtgBiomaNature.OuterSingleton;
}
template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<FPtgBiomaNature>()
{
	return FPtgBiomaNature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPtgBiomaNature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CorrespondingBioma_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrespondingBioma_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CorrespondingBioma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CullDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMeshesToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinMeshesToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMeshesToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMeshesToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinMaxScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocationsOutsideModifiers_MetaData[];
#endif
		static void NewProp_bUseLocationsOutsideModifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocationsOutsideModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightPercentageRangeToLocateNatureMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightPercentageRangeToLocateNatureMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocationsOutsideHeightRange_MetaData[];
#endif
		static void NewProp_bUseLocationsOutsideHeightRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocationsOutsideHeightRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Defines a bunch of properties that will generate a random number of nature meshes on a certain bioma.\n*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Defines a bunch of properties that will generate a random number of nature meshes on a certain bioma." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPtgBiomaNature>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Bioma where the nature mesh will be randomly placed. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Bioma where the nature mesh will be randomly placed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma = { "CorrespondingBioma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, CorrespondingBioma), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma_MetaData)) }; // 293616626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance (in centimeters) from camera at which each generated instance fades out. A value of 0 means infinite. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Distance (in centimeters) from camera at which each generated instance fades out. A value of 0 means infinite." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CullDistance_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Array of nature meshes used by PTG to randomly pick each time it adds a nature mesh in the bioma. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Array of nature meshes used by PTG to randomly pick each time it adds a nature mesh in the bioma." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMeshesToSpawn_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Minimum nature meshes that will be added on the corresponding bioma. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Minimum nature meshes that will be added on the corresponding bioma." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMeshesToSpawn = { "MinMeshesToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, MinMeshesToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMeshesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMeshesToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MaxMeshesToSpawn_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Maximum nature meshes that will be added on the corresponding bioma. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Maximum nature meshes that will be added on the corresponding bioma." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MaxMeshesToSpawn = { "MaxMeshesToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, MaxMeshesToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MaxMeshesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MaxMeshesToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMaxScale_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Min. and max. range to randomly scale each added nature mesh. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Min. and max. range to randomly scale each added nature mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMaxScale = { "MinMaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, MinMaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMaxScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09* Different types of rotation for the nature mesh:\n\x09* - Random: random rotation, commonly used on stones, for example.\n\x09* - Terrain Shape Normal: rotation that matches the terrain face normal, commonly used on trees, for example.\n\x09* - Mesh Surface Normal: rotation that matches the normal of the nature mesh surface where it is placed, commonly used for grass, for example.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Different types of rotation for the nature mesh:\n- Random: random rotation, commonly used on stones, for example.\n- Terrain Shape Normal: rotation that matches the terrain face normal, commonly used on trees, for example.\n- Mesh Surface Normal: rotation that matches the normal of the nature mesh surface where it is placed, commonly used for grass, for example." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, RotationType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType_MetaData)) }; // 668445549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Seed used for all the random operations of this bioma nature. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Seed used for all the random operations of this bioma nature." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APtgModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Array of shape modifiers to avoid when placing new nature meshes. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Array of shape modifiers to avoid when placing new nature meshes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Disable this option to get the inverted result on modifiers (nature meshes will be located only inside of them). */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Disable this option to get the inverted result on modifiers (nature meshes will be located only inside of them)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers_SetBit(void* Obj)
	{
		((FPtgBiomaNature*)Obj)->bUseLocationsOutsideModifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers = { "bUseLocationsOutsideModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPtgBiomaNature), &Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_HeightPercentageRangeToLocateNatureMeshes_MetaData[] = {
		{ "Category", "Properties" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Height percentage range where nature meshes will be placed.\n\x09* For example, with these values:\n\x09* \xef\xbf\xbd Lowest Landscape Height = 0.0\n\x09* \xef\xbf\xbd Highest Landscape Height = 1000.0\n\x09* \xef\xbf\xbd Height Percentage Range to Locate Meshes = (25.0, 75.0)\n\x09* Nature meshes will be only placed in heights between 250.0 and 750.0.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Height percentage range where nature meshes will be placed.\nFor example, with these values:\n\xef\xbf\xbd Lowest Landscape Height = 0.0\n\xef\xbf\xbd Highest Landscape Height = 1000.0\n\xef\xbf\xbd Height Percentage Range to Locate Meshes = (25.0, 75.0)\nNature meshes will be only placed in heights between 250.0 and 750.0." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_HeightPercentageRangeToLocateNatureMeshes = { "HeightPercentageRangeToLocateNatureMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaNature, HeightPercentageRangeToLocateNatureMeshes), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_HeightPercentageRangeToLocateNatureMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_HeightPercentageRangeToLocateNatureMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Enable this option to get the inverted result (nature meshes will be located only out of height range). */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Enable this option to get the inverted result (nature meshes will be located only out of height range)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange_SetBit(void* Obj)
	{
		((FPtgBiomaNature*)Obj)->bUseLocationsOutsideHeightRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange = { "bUseLocationsOutsideHeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPtgBiomaNature), &Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CorrespondingBioma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_CullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMeshesToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MaxMeshesToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_MinMaxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_RotationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_HeightPercentageRangeToLocateNatureMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewProp_bUseLocationsOutsideHeightRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		&NewStructOps,
		"PtgBiomaNature",
		sizeof(FPtgBiomaNature),
		alignof(FPtgBiomaNature),
		Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPtgBiomaNature()
	{
		if (!Z_Registration_Info_UScriptStruct_PtgBiomaNature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PtgBiomaNature.InnerSingleton, Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PtgBiomaNature.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PtgBiomaActors;
class UScriptStruct* FPtgBiomaActors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PtgBiomaActors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PtgBiomaActors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPtgBiomaActors, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("PtgBiomaActors"));
	}
	return Z_Registration_Info_UScriptStruct_PtgBiomaActors.OuterSingleton;
}
template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<FPtgBiomaActors>()
{
	return FPtgBiomaActors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPtgBiomaActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CorrespondingBioma_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrespondingBioma_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CorrespondingBioma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinActorsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinActorsToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxActorsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActorsToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinMaxScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocationsOutsideModifiers_MetaData[];
#endif
		static void NewProp_bUseLocationsOutsideModifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocationsOutsideModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightPercentageRangeToLocateActors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightPercentageRangeToLocateActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocationsOutsideHeightRange_MetaData[];
#endif
		static void NewProp_bUseLocationsOutsideHeightRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocationsOutsideHeightRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Defines a bunch of properties that will spawn a random number of actors on a certain bioma.\n*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Defines a bunch of properties that will spawn a random number of actors on a certain bioma." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPtgBiomaActors>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Bioma where the actor will be randomly placed. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Bioma where the actor will be randomly placed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma = { "CorrespondingBioma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, CorrespondingBioma), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureBiomas, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma_MetaData)) }; // 293616626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance (in centimeters) from camera at which each generated actor fades out. A value of 0 means infinite. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Distance (in centimeters) from camera at which each generated actor fades out. A value of 0 means infinite." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Class of the actor that will be randomly placed. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Class of the actor that will be randomly placed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinActorsToSpawn_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Minimum actors that will be spawned on the corresponding bioma. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Minimum actors that will be spawned on the corresponding bioma." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinActorsToSpawn = { "MinActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, MinActorsToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinActorsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinActorsToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MaxActorsToSpawn_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Maximum actors that will be spawned on the corresponding bioma. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Maximum actors that will be spawned on the corresponding bioma." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MaxActorsToSpawn = { "MaxActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, MaxActorsToSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MaxActorsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MaxActorsToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinMaxScale_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Min. and max. range to randomly scale each added actor. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Min. and max. range to randomly scale each added actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinMaxScale = { "MinMaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, MinMaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinMaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinMaxScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09* Different types of rotation for the mesh:\n\x09* - Random: random rotation, commonly used on stones, for example.\n\x09* - Terrain Shape Normal: rotation that matches the terrain face normal, commonly used on trees, for example.\n\x09* - Mesh Surface Normal: rotation that matches the normal of the mesh surface where it is placed, commonly used for grass, for example.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Different types of rotation for the mesh:\n- Random: random rotation, commonly used on stones, for example.\n- Terrain Shape Normal: rotation that matches the terrain face normal, commonly used on trees, for example.\n- Mesh Surface Normal: rotation that matches the normal of the mesh surface where it is placed, commonly used for grass, for example." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, RotationType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgNatureRotationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType_MetaData)) }; // 668445549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Seed used for all the random operations on the actor generation. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Seed used for all the random operations on the actor generation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Seed_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APtgModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Array of shape modifiers to avoid when placing new actors.  */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Array of shape modifiers to avoid when placing new actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Disable this option to get the inverted result on modifiers (actors will be located only inside of them). */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Disable this option to get the inverted result on modifiers (actors will be located only inside of them)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers_SetBit(void* Obj)
	{
		((FPtgBiomaActors*)Obj)->bUseLocationsOutsideModifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers = { "bUseLocationsOutsideModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPtgBiomaActors), &Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_HeightPercentageRangeToLocateActors_MetaData[] = {
		{ "Category", "Properties" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Height percentage range where actors will be placed.\n\x09* For example, with these values:\n\x09* \xef\xbf\xbd Lowest Landscape Height = 0.0\n\x09* \xef\xbf\xbd Highest Landscape Height = 1000.0\n\x09* \xef\xbf\xbd Height Percentage Range to Locate Actors = (25.0, 75.0)\n\x09* Actors will be only placed in heights between 250.0 and 750.0.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Height percentage range where actors will be placed.\nFor example, with these values:\n\xef\xbf\xbd Lowest Landscape Height = 0.0\n\xef\xbf\xbd Highest Landscape Height = 1000.0\n\xef\xbf\xbd Height Percentage Range to Locate Actors = (25.0, 75.0)\nActors will be only placed in heights between 250.0 and 750.0." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_HeightPercentageRangeToLocateActors = { "HeightPercentageRangeToLocateActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgBiomaActors, HeightPercentageRangeToLocateActors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_HeightPercentageRangeToLocateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_HeightPercentageRangeToLocateActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Enable this option to get the inverted result (actors will be located only out of height range). */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Enable this option to get the inverted result (actors will be located only out of height range)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange_SetBit(void* Obj)
	{
		((FPtgBiomaActors*)Obj)->bUseLocationsOutsideHeightRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange = { "bUseLocationsOutsideHeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPtgBiomaActors), &Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CorrespondingBioma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_CullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinActorsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MaxActorsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_MinMaxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_RotationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_HeightPercentageRangeToLocateActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewProp_bUseLocationsOutsideHeightRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		&NewStructOps,
		"PtgBiomaActors",
		sizeof(FPtgBiomaActors),
		alignof(FPtgBiomaActors),
		Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPtgBiomaActors()
	{
		if (!Z_Registration_Info_UScriptStruct_PtgBiomaActors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PtgBiomaActors.InnerSingleton, Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PtgBiomaActors.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PtgTriangle;
class UScriptStruct* FPtgTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PtgTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PtgTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPtgTriangle, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("PtgTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_PtgTriangle.OuterSingleton;
}
template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<FPtgTriangle>()
{
	return FPtgTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPtgTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgTriangle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Represents a terrain mesh triangle. It has some functions to help creating random locations to place nature and actors.\n*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Represents a terrain mesh triangle. It has some functions to help creating random locations to place nature and actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPtgTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPtgTriangle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPtgTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		&NewStructOps,
		"PtgTriangle",
		sizeof(FPtgTriangle),
		alignof(FPtgTriangle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPtgTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_PtgTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PtgTriangle.InnerSingleton, Z_Construct_UScriptStruct_FPtgTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PtgTriangle.InnerSingleton;
	}
	DEFINE_FUNCTION(APtgManager::execGetHighestGeneratedHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHighestGeneratedHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGetLowestGeneratedHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLowestGeneratedHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGetVertexHeightData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetVertexHeightData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGetProcMeshWaterComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshComponent**)Z_Param__Result=P_THIS->GetProcMeshWaterComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGetProcMeshTerrainComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshComponent**)Z_Param__Result=P_THIS->GetProcMeshTerrainComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGetShape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPtgProcMeshShapes*)Z_Param__Result=P_THIS->GetShape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execClearActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateActorsWithRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateActorsWithRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateActorsWithCustomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_actorsSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateActorsWithCustomSeed(Z_Param_actorsSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execClearNature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearNature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateNatureWithRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateNatureWithRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateNatureWithCustomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_natureSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateNatureWithCustomSeed(Z_Param_natureSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateNature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateNature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execClearWaterMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWaterMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateWaterMeshWithRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateWaterMeshWithRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateWaterMeshWithCustomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_waterSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateWaterMeshWithCustomSeed(Z_Param_waterSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateWaterMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateWaterMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execClearTerrainMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTerrainMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateTerrainMeshWithRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateTerrainMeshWithRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateTerrainMeshWithCustomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_terrainSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateTerrainMeshWithCustomSeed(Z_Param_terrainSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateTerrainMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateTerrainMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execClearNatureAndActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearNatureAndActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateEverythingWithRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateEverythingWithRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateEverythingWithCustomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_terrainSeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_waterSeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_natureSeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_actorsSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateEverythingWithCustomSeed(Z_Param_terrainSeed,Z_Param_waterSeed,Z_Param_natureSeed,Z_Param_actorsSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APtgManager::execGenerateEverything)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateEverything();
		P_NATIVE_END;
	}
	void APtgManager::StaticRegisterNativesAPtgManager()
	{
		UClass* Class = APtgManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActors", &APtgManager::execClearActors },
			{ "ClearNature", &APtgManager::execClearNature },
			{ "ClearNatureAndActors", &APtgManager::execClearNatureAndActors },
			{ "ClearTerrainMesh", &APtgManager::execClearTerrainMesh },
			{ "ClearWaterMesh", &APtgManager::execClearWaterMesh },
			{ "GenerateActors", &APtgManager::execGenerateActors },
			{ "GenerateActorsWithCustomSeed", &APtgManager::execGenerateActorsWithCustomSeed },
			{ "GenerateActorsWithRandomSeed", &APtgManager::execGenerateActorsWithRandomSeed },
			{ "GenerateEverything", &APtgManager::execGenerateEverything },
			{ "GenerateEverythingWithCustomSeed", &APtgManager::execGenerateEverythingWithCustomSeed },
			{ "GenerateEverythingWithRandomSeed", &APtgManager::execGenerateEverythingWithRandomSeed },
			{ "GenerateNature", &APtgManager::execGenerateNature },
			{ "GenerateNatureWithCustomSeed", &APtgManager::execGenerateNatureWithCustomSeed },
			{ "GenerateNatureWithRandomSeed", &APtgManager::execGenerateNatureWithRandomSeed },
			{ "GenerateTerrainMesh", &APtgManager::execGenerateTerrainMesh },
			{ "GenerateTerrainMeshWithCustomSeed", &APtgManager::execGenerateTerrainMeshWithCustomSeed },
			{ "GenerateTerrainMeshWithRandomSeed", &APtgManager::execGenerateTerrainMeshWithRandomSeed },
			{ "GenerateWaterMesh", &APtgManager::execGenerateWaterMesh },
			{ "GenerateWaterMeshWithCustomSeed", &APtgManager::execGenerateWaterMeshWithCustomSeed },
			{ "GenerateWaterMeshWithRandomSeed", &APtgManager::execGenerateWaterMeshWithRandomSeed },
			{ "GetHighestGeneratedHeight", &APtgManager::execGetHighestGeneratedHeight },
			{ "GetLowestGeneratedHeight", &APtgManager::execGetLowestGeneratedHeight },
			{ "GetProcMeshTerrainComp", &APtgManager::execGetProcMeshTerrainComp },
			{ "GetProcMeshWaterComp", &APtgManager::execGetProcMeshWaterComp },
			{ "GetShape", &APtgManager::execGetShape },
			{ "GetVertexHeightData", &APtgManager::execGetVertexHeightData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APtgManager_ClearActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_ClearActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 5 - Actors generation actions" },
		{ "Comment", "/** Removes all actors on the terrain. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Removes all actors on the terrain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_ClearActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "ClearActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_ClearActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_ClearActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_ClearActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_ClearActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_ClearNature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_ClearNature_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 4 - Nature generation actions" },
		{ "Comment", "/** Removes all nature meshes on the terrain. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Removes all nature meshes on the terrain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_ClearNature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "ClearNature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_ClearNature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_ClearNature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_ClearNature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_ClearNature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_ClearNatureAndActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_ClearNatureAndActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 1 - General actions" },
		{ "Comment", "/** Removes all nature meshes and actors on the terrain. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Removes all nature meshes and actors on the terrain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_ClearNatureAndActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "ClearNatureAndActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_ClearNatureAndActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_ClearNatureAndActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_ClearNatureAndActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_ClearNatureAndActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_ClearTerrainMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_ClearTerrainMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 2 - Terrain generation actions" },
		{ "Comment", "/** Removes the terrain mesh. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Removes the terrain mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_ClearTerrainMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "ClearTerrainMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_ClearTerrainMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_ClearTerrainMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_ClearTerrainMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_ClearTerrainMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_ClearWaterMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_ClearWaterMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 3 - Water generation actions" },
		{ "Comment", "/** Removes the water mesh. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Removes the water mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_ClearWaterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "ClearWaterMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_ClearWaterMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_ClearWaterMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_ClearWaterMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_ClearWaterMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 5 - Actors generation actions" },
		{ "Comment", "/** Regenerates the actor spawning using the seeds configured in the manager. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the actor spawning using the seeds configured in the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics
	{
		struct PtgManager_eventGenerateActorsWithCustomSeed_Parms
		{
			int32 actorsSeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorsSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_actorsSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::NewProp_actorsSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::NewProp_actorsSeed = { "actorsSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateActorsWithCustomSeed_Parms, actorsSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::NewProp_actorsSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::NewProp_actorsSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::NewProp_actorsSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG 5 - Actors generation actions" },
		{ "Comment", "/**\n\x09* Regenerates the actor spawning using the seeds configured in the manager.\n\x09*\n\x09* @param actorsSeed -\x09""Custom seed for the actor generation algorythm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the actor spawning using the seeds configured in the manager.\n\n@param actorsSeed -   Custom seed for the actor generation algorythm." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateActorsWithCustomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::PtgManager_eventGenerateActorsWithCustomSeed_Parms), Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 5 - Actors generation actions" },
		{ "Comment", "/** Calculates a random seed for the bioma actors and regenerates actors ONLY if Generate Actors is true. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Calculates a random seed for the bioma actors and regenerates actors ONLY if Generate Actors is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateActorsWithRandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateEverything_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverything_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 1 - General actions" },
		{ "Comment", "/** Regenerates the terrain, water, nature and actors using the seeds configured in the manager. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the terrain, water, nature and actors using the seeds configured in the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateEverything_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateEverything", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverything_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverything_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateEverything()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateEverything_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics
	{
		struct PtgManager_eventGenerateEverythingWithCustomSeed_Parms
		{
			int32 terrainSeed;
			int32 waterSeed;
			int32 natureSeed;
			int32 actorsSeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_terrainSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_terrainSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waterSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_waterSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_natureSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_natureSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorsSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_actorsSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_terrainSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_terrainSeed = { "terrainSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateEverythingWithCustomSeed_Parms, terrainSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_terrainSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_terrainSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_waterSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_waterSeed = { "waterSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateEverythingWithCustomSeed_Parms, waterSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_waterSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_waterSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_natureSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_natureSeed = { "natureSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateEverythingWithCustomSeed_Parms, natureSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_natureSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_natureSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_actorsSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_actorsSeed = { "actorsSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateEverythingWithCustomSeed_Parms, actorsSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_actorsSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_actorsSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_terrainSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_waterSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_natureSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::NewProp_actorsSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG 1 - General actions" },
		{ "Comment", "/** \n\x09* Use custom seeds to regenerate the terrain, water, nature and actors.\n\x09* \n\x09* @param terrainSeed -\x09""Custom seed for the terrain noise generation algorythm.\n\x09* @param waterSeed -\x09""Custom seed for the water heigh generation algorythm.\n\x09* @param natureSeed -\x09""Custom seed for the nature meshes generation algorythm.\n\x09* @param actorsSeed -\x09""Custom seed for the actor generation algorythm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Use custom seeds to regenerate the terrain, water, nature and actors.\n\n@param terrainSeed -  Custom seed for the terrain noise generation algorythm.\n@param waterSeed -    Custom seed for the water heigh generation algorythm.\n@param natureSeed -   Custom seed for the nature meshes generation algorythm.\n@param actorsSeed -   Custom seed for the actor generation algorythm." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateEverythingWithCustomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::PtgManager_eventGenerateEverythingWithCustomSeed_Parms), Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 1 - General actions" },
		{ "Comment", "/** Calculates random seeds and regenerates the terrain, water, nature and actors. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Calculates random seeds and regenerates the terrain, water, nature and actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateEverythingWithRandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateNature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateNature_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 4 - Nature generation actions" },
		{ "Comment", "/** Regenerates the nature and the actor spawning using the seeds configured in the manager. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the nature and the actor spawning using the seeds configured in the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateNature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateNature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateNature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateNature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateNature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateNature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics
	{
		struct PtgManager_eventGenerateNatureWithCustomSeed_Parms
		{
			int32 natureSeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_natureSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_natureSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::NewProp_natureSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::NewProp_natureSeed = { "natureSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateNatureWithCustomSeed_Parms, natureSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::NewProp_natureSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::NewProp_natureSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::NewProp_natureSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG 4 - Nature generation actions" },
		{ "Comment", "/** \n\x09* Regenerates the nature spawning using the seeds configured in the manager. \n\x09* \n\x09* @param natureSeed -\x09""Custom seed for the nature meshes generation algorythm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the nature spawning using the seeds configured in the manager.\n\n@param natureSeed -   Custom seed for the nature meshes generation algorythm." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateNatureWithCustomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::PtgManager_eventGenerateNatureWithCustomSeed_Parms), Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 4 - Nature generation actions" },
		{ "Comment", "/** Calculates a random seed for the bioma nature and regenerates the nature ONLY if Generate Nature is true. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Calculates a random seed for the bioma nature and regenerates the nature ONLY if Generate Nature is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateNatureWithRandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateTerrainMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateTerrainMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 2 - Terrain generation actions" },
		{ "Comment", "/** Regenerates the terrain mesh using the seed configured in the manager. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the terrain mesh using the seed configured in the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateTerrainMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateTerrainMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateTerrainMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateTerrainMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateTerrainMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateTerrainMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics
	{
		struct PtgManager_eventGenerateTerrainMeshWithCustomSeed_Parms
		{
			int32 terrainSeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_terrainSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_terrainSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::NewProp_terrainSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::NewProp_terrainSeed = { "terrainSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateTerrainMeshWithCustomSeed_Parms, terrainSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::NewProp_terrainSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::NewProp_terrainSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::NewProp_terrainSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG 2 - Terrain generation actions" },
		{ "Comment", "/**\n\x09* Use custom seed for the terrain and regenerates the mesh.\n\x09*\n\x09* @param terrainSeed -\x09""Custom seed for the terrain noise generation algorythm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Use custom seed for the terrain and regenerates the mesh.\n\n@param terrainSeed -  Custom seed for the terrain noise generation algorythm." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateTerrainMeshWithCustomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::PtgManager_eventGenerateTerrainMeshWithCustomSeed_Parms), Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 2 - Terrain generation actions" },
		{ "Comment", "/** Calculates a random seed for the terrain mesh and regenerates the mesh. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Calculates a random seed for the terrain mesh and regenerates the mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateTerrainMeshWithRandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateWaterMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateWaterMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 3 - Water generation actions" },
		{ "Comment", "/** Regenerates the water mesh using the seed configured in the manager. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Regenerates the water mesh using the seed configured in the manager." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateWaterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateWaterMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateWaterMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateWaterMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateWaterMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateWaterMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics
	{
		struct PtgManager_eventGenerateWaterMeshWithCustomSeed_Parms
		{
			int32 waterSeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waterSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_waterSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::NewProp_waterSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::NewProp_waterSeed = { "waterSeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGenerateWaterMeshWithCustomSeed_Parms, waterSeed), METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::NewProp_waterSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::NewProp_waterSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::NewProp_waterSeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG 3 - Water generation actions" },
		{ "Comment", "/** \n\x09* Use custom seed for the water and regenerates the mesh ONLY if Generate Water is true AND Water Height Generation Type is Random Percentage. \n\x09* \n\x09* @param waterSeed -\x09""Custom seed for the water heigh generation algorythm.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Use custom seed for the water and regenerates the mesh ONLY if Generate Water is true AND Water Height Generation Type is Random Percentage.\n\n@param waterSeed -    Custom seed for the water heigh generation algorythm." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateWaterMeshWithCustomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::PtgManager_eventGenerateWaterMeshWithCustomSeed_Parms), Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PTG 3 - Water generation actions" },
		{ "Comment", "/** Calculates a random seed for the water and regenerates the mesh ONLY if Generate Water is true AND Water Height Generation Type is Random Percentage. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Calculates a random seed for the water and regenerates the mesh ONLY if Generate Water is true AND Water Height Generation Type is Random Percentage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GenerateWaterMeshWithRandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics
	{
		struct PtgManager_eventGetHighestGeneratedHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGetHighestGeneratedHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Manager" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GetHighestGeneratedHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::PtgManager_eventGetHighestGeneratedHeight_Parms), Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics
	{
		struct PtgManager_eventGetLowestGeneratedHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGetLowestGeneratedHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Manager" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GetLowestGeneratedHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::PtgManager_eventGetLowestGeneratedHeight_Parms), Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics
	{
		struct PtgManager_eventGetProcMeshTerrainComp_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGetProcMeshTerrainComp_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Manager" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GetProcMeshTerrainComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::PtgManager_eventGetProcMeshTerrainComp_Parms), Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics
	{
		struct PtgManager_eventGetProcMeshWaterComp_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGetProcMeshWaterComp_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Manager" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GetProcMeshWaterComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::PtgManager_eventGetProcMeshWaterComp_Parms), Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GetShape_Statics
	{
		struct PtgManager_eventGetShape_Parms
		{
			EPtgProcMeshShapes ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APtgManager_GetShape_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APtgManager_GetShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGetShape_Parms, ReturnValue), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes, METADATA_PARAMS(nullptr, 0) }; // 3724957555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GetShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetShape_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Manager" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GetShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GetShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GetShape_Statics::PtgManager_eventGetShape_Parms), Z_Construct_UFunction_APtgManager_GetShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GetShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GetShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics
	{
		struct PtgManager_eventGetVertexHeightData_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgManager_eventGetVertexHeightData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Manager" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APtgManager, nullptr, "GetVertexHeightData", nullptr, nullptr, sizeof(Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::PtgManager_eventGetVertexHeightData_Parms), Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APtgManager_GetVertexHeightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APtgManager_GetVertexHeightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APtgManager);
	UClass* Z_Construct_UClass_APtgManager_NoRegister()
	{
		return APtgManager::StaticClass();
	}
	struct Z_Construct_UClass_APtgManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODScreenSizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODScreenSizeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateEverythingOnPropertyChange_MetaData[];
#endif
		static void NewProp_bGenerateEverythingOnPropertyChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateEverythingOnPropertyChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTerrainTiling_MetaData[];
#endif
		static void NewProp_bUseTerrainTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTerrainTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseInputScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseInputScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOutputScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseOutputScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTerrainCollision_MetaData[];
#endif
		static void NewProp_bEnableTerrainCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTerrainCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowestGeneratedHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestGeneratedHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighestGeneratedHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighestGeneratedHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateWater_MetaData[];
#endif
		static void NewProp_bGenerateWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWater;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaterHeightGenerationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeightGenerationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WaterHeightGenerationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaterSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterRandomHeightRangePercentages_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterRandomHeightRangePercentages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterFixedHeightPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterFixedHeightPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterFixedHeightValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterFixedHeightValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWaterCollision_MetaData[];
#endif
		static void NewProp_bEnableWaterCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWaterCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNature_MetaData[];
#endif
		static void NewProp_bGenerateNature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNature;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiomaNature_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiomaNature_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BiomaNature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateActors_MetaData[];
#endif
		static void NewProp_bGenerateActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BiomaActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiomaActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BiomaActors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NoiseType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType3D_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationType3D_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FractalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FractalType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalOctaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FractalOctaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractalLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractalGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalWeightedStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractalWeightedStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractalPingPongStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractalPingPongStrength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellularDistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellularDistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellularDistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellularReturnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellularReturnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellularReturnType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellularJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellularJitter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DomainWarpType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomainWarpType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DomainWarpType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomainWarpAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DomainWarpAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugMessages_MetaData[];
#endif
		static void NewProp_bShowDebugMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessagesTimeOnScreen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugMessagesTimeOnScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshTerrainComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcMeshTerrainComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshWaterComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcMeshWaterComp;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NatureStaticMeshHISM_Correspondence_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NatureStaticMeshHISM_Correspondence_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NatureStaticMeshHISM_Correspondence_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NatureStaticMeshHISM_Correspondence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_biomaActorsSpawned_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_biomaActorsSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_biomaActorsSpawned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fastNoiseWrapper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fastNoiseWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_terrainRuntimeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_terrainRuntimeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waterRuntimeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_waterRuntimeMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APtgManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APtgManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APtgManager_ClearActors, "ClearActors" }, // 1712832787
		{ &Z_Construct_UFunction_APtgManager_ClearNature, "ClearNature" }, // 1985351011
		{ &Z_Construct_UFunction_APtgManager_ClearNatureAndActors, "ClearNatureAndActors" }, // 1615115641
		{ &Z_Construct_UFunction_APtgManager_ClearTerrainMesh, "ClearTerrainMesh" }, // 3535583234
		{ &Z_Construct_UFunction_APtgManager_ClearWaterMesh, "ClearWaterMesh" }, // 1118682773
		{ &Z_Construct_UFunction_APtgManager_GenerateActors, "GenerateActors" }, // 1717123158
		{ &Z_Construct_UFunction_APtgManager_GenerateActorsWithCustomSeed, "GenerateActorsWithCustomSeed" }, // 2684261227
		{ &Z_Construct_UFunction_APtgManager_GenerateActorsWithRandomSeed, "GenerateActorsWithRandomSeed" }, // 2001955204
		{ &Z_Construct_UFunction_APtgManager_GenerateEverything, "GenerateEverything" }, // 1702678953
		{ &Z_Construct_UFunction_APtgManager_GenerateEverythingWithCustomSeed, "GenerateEverythingWithCustomSeed" }, // 4268736743
		{ &Z_Construct_UFunction_APtgManager_GenerateEverythingWithRandomSeed, "GenerateEverythingWithRandomSeed" }, // 3398409174
		{ &Z_Construct_UFunction_APtgManager_GenerateNature, "GenerateNature" }, // 1963375561
		{ &Z_Construct_UFunction_APtgManager_GenerateNatureWithCustomSeed, "GenerateNatureWithCustomSeed" }, // 1517629932
		{ &Z_Construct_UFunction_APtgManager_GenerateNatureWithRandomSeed, "GenerateNatureWithRandomSeed" }, // 261483647
		{ &Z_Construct_UFunction_APtgManager_GenerateTerrainMesh, "GenerateTerrainMesh" }, // 1622131730
		{ &Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithCustomSeed, "GenerateTerrainMeshWithCustomSeed" }, // 4054885969
		{ &Z_Construct_UFunction_APtgManager_GenerateTerrainMeshWithRandomSeed, "GenerateTerrainMeshWithRandomSeed" }, // 3741230757
		{ &Z_Construct_UFunction_APtgManager_GenerateWaterMesh, "GenerateWaterMesh" }, // 3094374230
		{ &Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithCustomSeed, "GenerateWaterMeshWithCustomSeed" }, // 1069981878
		{ &Z_Construct_UFunction_APtgManager_GenerateWaterMeshWithRandomSeed, "GenerateWaterMeshWithRandomSeed" }, // 2211500851
		{ &Z_Construct_UFunction_APtgManager_GetHighestGeneratedHeight, "GetHighestGeneratedHeight" }, // 4028725001
		{ &Z_Construct_UFunction_APtgManager_GetLowestGeneratedHeight, "GetLowestGeneratedHeight" }, // 2931956405
		{ &Z_Construct_UFunction_APtgManager_GetProcMeshTerrainComp, "GetProcMeshTerrainComp" }, // 1720766837
		{ &Z_Construct_UFunction_APtgManager_GetProcMeshWaterComp, "GetProcMeshWaterComp" }, // 1767014744
		{ &Z_Construct_UFunction_APtgManager_GetShape, "GetShape" }, // 2423775686
		{ &Z_Construct_UFunction_APtgManager_GetVertexHeightData, "GetVertexHeightData" }, // 3001075227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Main class for procedural terrain generation.\n*/" },
		{ "IncludePath", "PtgManager.h" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Main class for procedural terrain generation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "PTG 0 - Properties" },
		{ "ClampMin", "100.000000" },
		{ "Comment", "/**\n\x09* Extension radius of the terrain, in centimeters.\n\x09* Default value: 15000.0\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Extension radius of the terrain, in centimeters.\nDefault value: 15000.0" },
		{ "UIMin", "100.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, Radius), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "PTG 0 - Properties" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* Number of tiles that will be generated on x and y.\n\x09* Default value: 150\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Number of tiles that will be generated on x and y.\nDefault value: 150" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, Resolution), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_NumberOfLODs_MetaData[] = {
		{ "Category", "PTG 0 - Properties" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* Number of LODs that will be generated for the terrain and water meshes. A Value of 1 means no LODs (only LOD 0 will be generated).\n\x09* Default value: 8\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Number of LODs that will be generated for the terrain and water meshes. A Value of 1 means no LODs (only LOD 0 will be generated).\nDefault value: 8" },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NumberOfLODs = { "NumberOfLODs", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, NumberOfLODs), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_NumberOfLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_NumberOfLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_LODScreenSizeMultiplier_MetaData[] = {
		{ "Category", "PTG 0 - Properties" },
		{ "ClampMax", "0.990000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* The screen size multiplier applied to each LOD (0.0 - 0.99). The screen size is calculated using this: Pow(LODScreenSizeMultiplier, LODIndex)\n\x09* So, for example, for a value of 0.5 and 4 LODs, the screen sizes for each LOD would be:\n\x09* - LOD 0: 1.0\n\x09* - LOD 1: Pow(0.5, 1) = 0.5\n\x09* - LOD 2: Pow(0.5, 2) = 0.25\n\x09* - LOD 3: Pow(0.5, 3) = 0.125\n\x09* Default value: 0.5\n\x09*/" },
		{ "DisplayName", "LOD Screen Size Multiplier" },
		{ "EditCondition", "NumberOfLODs > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "The screen size multiplier applied to each LOD (0.0 - 0.99). The screen size is calculated using this: Pow(LODScreenSizeMultiplier, LODIndex)\nSo, for example, for a value of 0.5 and 4 LODs, the screen sizes for each LOD would be:\n- LOD 0: 1.0\n- LOD 1: Pow(0.5, 1) = 0.5\n- LOD 2: Pow(0.5, 2) = 0.25\n- LOD 3: Pow(0.5, 3) = 0.125\nDefault value: 0.5" },
		{ "UIMax", "0.990000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_LODScreenSizeMultiplier = { "LODScreenSizeMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, LODScreenSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_LODScreenSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_LODScreenSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange_MetaData[] = {
		{ "Category", "PTG 0 - Properties" },
		{ "Comment", "/** If true, regenerates the corresponding stuff automatically when some property changes. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "If true, regenerates the corresponding stuff automatically when some property changes." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bGenerateEverythingOnPropertyChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange = { "bGenerateEverythingOnPropertyChange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/** Describes the shape of the terrain. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Describes the shape of the terrain." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, Shape), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_Shape_MetaData)) }; // 3724957555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/** If true, it will add an offset to the noise based on actor location, so the terrain will tile with other generated terrains. Only available on plane terrain shape. */" },
		{ "EditCondition", "Shape == EPtgProcMeshShapes::Plane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "If true, it will add an offset to the noise based on actor location, so the terrain will tile with other generated terrains. Only available on plane terrain shape." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bUseTerrainTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling = { "bUseTerrainTiling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseInputScale_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/**\n\x09* Making this smaller will \"stretch\" the noise on the terrain.\n\x09* Default value: 1.0\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Making this smaller will \"stretch\" the noise on the terrain.\nDefault value: 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseInputScale = { "NoiseInputScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, NoiseInputScale), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseInputScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseInputScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseOutputScale_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/**\n\x09* Making this bigger will scale the terrain's height.\n\x09* Default value: 1000.0\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Making this bigger will scale the terrain's height.\nDefault value: 1000.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseOutputScale = { "NoiseOutputScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, NoiseOutputScale), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseOutputScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseOutputScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/** Material used for the terrain mesh. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Material used for the terrain mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, TerrainMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_TerrainMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_TerrainMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/** Whether the generated terrain mesh should have collision or not. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Whether the generated terrain mesh should have collision or not." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bEnableTerrainCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision = { "bEnableTerrainCollision", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_LowestGeneratedHeight_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/** Lowest height value of the generated terrain. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Lowest height value of the generated terrain." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_LowestGeneratedHeight = { "LowestGeneratedHeight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, LowestGeneratedHeight), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_LowestGeneratedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_LowestGeneratedHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_HighestGeneratedHeight_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Terrain generation" },
		{ "Comment", "/** Highest height value of the generated terrain. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Highest height value of the generated terrain." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_HighestGeneratedHeight = { "HighestGeneratedHeight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, HighestGeneratedHeight), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_HighestGeneratedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_HighestGeneratedHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/** Whether to generate water mesh or not. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Whether to generate water mesh or not." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bGenerateWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater = { "bGenerateWater", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/** Type of water height generation. Fixed Height is only available on plane terrain shape. */" },
		{ "EditCondition", "bGenerateWater" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Type of water height generation. Fixed Height is only available on plane terrain shape." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType = { "WaterHeightGenerationType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterHeightGenerationType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgWaterHeightGenerationType, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType_MetaData)) }; // 3380225491
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterSeed_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/**\n\x09* Seed used to generate the water mesh height when Water Height Generation Type is Random Percentage using Water Random Height Range Percentages.\n\x09* Default value: 1619\n\x09*/" },
		{ "EditCondition", "bGenerateWater && WaterHeightGenerationType == EPtgWaterHeightGenerationType::RandomPercentage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Seed used to generate the water mesh height when Water Height Generation Type is Random Percentage using Water Random Height Range Percentages.\nDefault value: 1619" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterSeed = { "WaterSeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterSeed), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterRandomHeightRangePercentages_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/**\n\x09* Range of height percentages where the water will be randomly placed between Lowest Generated Height and Highest Generated Height ONLY when Water Height Generation Type is Random Percentage.\n\x09* For example: Lowest Generated Height = -100, Highest Generated Height = 100 and Water Random Height Range Percentages = (25,75), the water will be placed at a random height between -50 and 50.\n\x09* Default value: (10%,50%)\n\x09*/" },
		{ "EditCondition", "bGenerateWater && WaterHeightGenerationType == EPtgWaterHeightGenerationType::RandomPercentage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Range of height percentages where the water will be randomly placed between Lowest Generated Height and Highest Generated Height ONLY when Water Height Generation Type is Random Percentage.\nFor example: Lowest Generated Height = -100, Highest Generated Height = 100 and Water Random Height Range Percentages = (25,75), the water will be placed at a random height between -50 and 50.\nDefault value: (10%,50%)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterRandomHeightRangePercentages = { "WaterRandomHeightRangePercentages", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterRandomHeightRangePercentages), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterRandomHeightRangePercentages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterRandomHeightRangePercentages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightPercentage_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09* Percentage of height where the water will be placed between Lowest Generated Height and Highest Generated Height ONLY when Water Height Generation Type is Fixed Percentage.\n\x09* For example: Lowest Generated Height = -100, Highest Generated Height = 100 and Water Fixed Height Percentage = 75, the water will be placed at a height of 50.\n\x09* Default value: 50%\n\x09*/" },
		{ "EditCondition", "bGenerateWater && WaterHeightGenerationType == EPtgWaterHeightGenerationType::FixedPercentage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Percentage of height where the water will be placed between Lowest Generated Height and Highest Generated Height ONLY when Water Height Generation Type is Fixed Percentage.\nFor example: Lowest Generated Height = -100, Highest Generated Height = 100 and Water Fixed Height Percentage = 75, the water will be placed at a height of 50.\nDefault value: 50%" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightPercentage = { "WaterFixedHeightPercentage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterFixedHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightValue_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/**\n\x09* Relative fixed height (Z) value for the water generation ONLY when Water Height Generation Type is Fixed Height.\n\x09*/" },
		{ "EditCondition", "bGenerateWater && WaterHeightGenerationType == EPtgWaterHeightGenerationType::FixedHeight" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Relative fixed height (Z) value for the water generation ONLY when Water Height Generation Type is Fixed Height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightValue = { "WaterFixedHeightValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterFixedHeightValue), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterMaterial_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/** Material used for the water mesh. */" },
		{ "EditCondition", "bGenerateWater" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Material used for the water mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterMaterial = { "WaterMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/** Whether the generated water mesh should have collision or not. */" },
		{ "EditCondition", "bGenerateWater" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Whether the generated water mesh should have collision or not." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bEnableWaterCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision = { "bEnableWaterCollision", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeight_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Water generation" },
		{ "Comment", "/** Relative height of the water mesh. */" },
		{ "EditCondition", "bGenerateWater" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Relative height of the water mesh." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeight = { "WaterHeight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, WaterHeight), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Nature generation" },
		{ "Comment", "/** Whether to generate nature meshes or not. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Whether to generate nature meshes or not." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bGenerateNature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature = { "bGenerateNature", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature_Inner = { "BiomaNature", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPtgBiomaNature, METADATA_PARAMS(nullptr, 0) }; // 1177687691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Nature generation" },
		{ "Comment", "/** Array of different meshes per bioma. For example, you can set 2 registers for Underwater, one with bush meshes, and other for rocks. */" },
		{ "EditCondition", "bGenerateNature" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Array of different meshes per bioma. For example, you can set 2 registers for Underwater, one with bush meshes, and other for rocks." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature = { "BiomaNature", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, BiomaNature), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature_MetaData)) }; // 1177687691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Actors generation" },
		{ "Comment", "/** Whether to spawn actors or not. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Whether to spawn actors or not." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bGenerateActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors = { "bGenerateActors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors_Inner = { "BiomaActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPtgBiomaActors, METADATA_PARAMS(nullptr, 0) }; // 1566835566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Actors generation" },
		{ "Comment", "/** Array of different actors per bioma. For example, you can set 2 registers for Underwater, one with a character, and other with an actor blueprint. */" },
		{ "EditCondition", "bGenerateActors" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Array of different actors per bioma. For example, you can set 2 registers for Underwater, one with a character, and other with an actor blueprint." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors = { "BiomaActors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, BiomaActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors_MetaData)) }; // 1566835566
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|General settings" },
		{ "Comment", "/**\n\x09* Noise algorithm used to generate the terrain height.\n\x09* Default value: Open Simplex 2\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Noise algorithm used to generate the terrain height.\nDefault value: Open Simplex 2" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType = { "NoiseType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, NoiseType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType_MetaData)) }; // 1765731174
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|General settings" },
		{ "Comment", "/**\n\x09* Domain rotation type for 3D Noise (Cube or Sphere terrain shapes) and 3D DomainWarp.\n\x09* Default value: None\n\x09*/" },
		{ "EditCondition", "Shape != EPtgProcMeshShapes::Plane" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Domain rotation type for 3D Noise (Cube or Sphere terrain shapes) and 3D DomainWarp.\nDefault value: None" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D = { "RotationType3D", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, RotationType3D), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D_MetaData)) }; // 1967871088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|General settings" },
		{ "Comment", "/**\n\x09* Seed used for all noise types. Using different seeds will cause the noise output to change.\n\x09* Default value: 1619\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Seed used for all noise types. Using different seeds will cause the noise output to change.\nDefault value: 1619" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, Seed), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|General settings" },
		{ "Comment", "/**\n\x09* Frequency for all noise types. Affects how coarse the noise output is.\n\x09* Default value: 0.02\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Frequency for all noise types. Affects how coarse the noise output is.\nDefault value: 0.02" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, Frequency), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_Frequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Fractal settings" },
		{ "Comment", "/**\n\x09* Method for combining octaves in all fractal noise types.\n\x09* Default value: FBM\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Method for combining octaves in all fractal noise types.\nDefault value: FBM" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType = { "FractalType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, FractalType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType_MetaData)) }; // 388281875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_FractalOctaves_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Fractal settings" },
		{ "Comment", "/**\n\x09* Octave count for all fractal noise types. The amount of noise layers used to create the fractal.\n\x09* Default value: 5\n\x09*/" },
		{ "EditCondition", "FractalType != EPtgFastNoiseLiteWrapperFractalType::FractalType_None" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Octave count for all fractal noise types. The amount of noise layers used to create the fractal.\nDefault value: 5" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalOctaves = { "FractalOctaves", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, FractalOctaves), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalOctaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalOctaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_FractalLacunarity_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Fractal settings" },
		{ "Comment", "/**\n\x09* Octave lacunarity for all fractal noise types. The frequency multiplier between each octave.\n\x09* Default value: 2.0\n\x09*/" },
		{ "EditCondition", "FractalType != EPtgFastNoiseLiteWrapperFractalType::FractalType_None" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Octave lacunarity for all fractal noise types. The frequency multiplier between each octave.\nDefault value: 2.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalLacunarity = { "FractalLacunarity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, FractalLacunarity), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalLacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalLacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_FractalGain_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Fractal settings" },
		{ "Comment", "/**\n\x09* Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last.\n\x09* Default value: 0.5\n\x09*/" },
		{ "EditCondition", "FractalType != EPtgFastNoiseLiteWrapperFractalType::FractalType_None" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last.\nDefault value: 0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalGain = { "FractalGain", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, FractalGain), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_FractalWeightedStrength_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Fractal settings" },
		{ "Comment", "/**\n\x09* Octave weighting for all non DomainWarp fractal types. Default value: 0.0. Note: Keep between 0...1 to maintain -1...1 output bounding.\n\x09* Default value: 0.0\n\x09*/" },
		{ "EditCondition", "FractalType == EPtgFastNoiseLiteWrapperFractalType::FractalType_FBm || FractalType == EPtgFastNoiseLiteWrapperFractalType::FractalType_Ridged || FractalType == EPtgFastNoiseLiteWrapperFractalType::FractalType_PingPong" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Octave weighting for all non DomainWarp fractal types. Default value: 0.0. Note: Keep between 0...1 to maintain -1...1 output bounding.\nDefault value: 0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalWeightedStrength = { "FractalWeightedStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, FractalWeightedStrength), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalWeightedStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalWeightedStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_FractalPingPongStrength_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Fractal settings" },
		{ "Comment", "/**\n\x09* Strength of the fractal ping pong effect.\n\x09* Default value: 2.0\n\x09*/" },
		{ "EditCondition", "FractalType == EPtgFastNoiseLiteWrapperFractalType::FractalType_PingPong" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Strength of the fractal ping pong effect.\nDefault value: 2.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_FractalPingPongStrength = { "FractalPingPongStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, FractalPingPongStrength), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalPingPongStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_FractalPingPongStrength_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Cellular settings" },
		{ "Comment", "/**\n\x09* Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point.\n\x09* Default value: Euclidean Sq\n\x09*/" },
		{ "EditCondition", "NoiseType == EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point.\nDefault value: Euclidean Sq" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction = { "CellularDistanceFunction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, CellularDistanceFunction), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction_MetaData)) }; // 3881904465
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Cellular settings" },
		{ "Comment", "/**\n\x09* Return type from cellular noise calculations.\n\x09* Default value: Distance\n\x09*/" },
		{ "EditCondition", "NoiseType == EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Return type from cellular noise calculations.\nDefault value: Distance" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType = { "CellularReturnType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, CellularReturnType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType_MetaData)) }; // 1544631172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_CellularJitter_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Cellular settings" },
		{ "Comment", "/**\n\x09* Maximum distance a cellular point can move from its grid position. Setting this higher than 1 will cause artifacts.\n\x09* Default value: 1.0\n\x09*/" },
		{ "EditCondition", "NoiseType == EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Maximum distance a cellular point can move from its grid position. Setting this higher than 1 will cause artifacts.\nDefault value: 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_CellularJitter = { "CellularJitter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, CellularJitter), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_CellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_CellularJitter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Domain Warp settings" },
		{ "Comment", "/**\n\x09* Warp algorithm.\n\x09* Default value: None\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Warp algorithm.\nDefault value: None" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType = { "DomainWarpType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, DomainWarpType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType_MetaData)) }; // 305474475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpAmplitude_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite|Domain Warp settings" },
		{ "Comment", "/**\n\x09* Maximum warp distance from original position when using DomainWarp.\n\x09* Default value: 30.0\n\x09*/" },
		{ "EditCondition", "DomainWarpType != EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_None" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Maximum warp distance from original position when using DomainWarp.\nDefault value: 30.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpAmplitude = { "DomainWarpAmplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, DomainWarpAmplitude), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Debug" },
		{ "Comment", "/** If enabled, it will show debug info messages on screen and on the output log. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "If enabled, it will show debug info messages on screen and on the output log." },
	};
#endif
	void Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages_SetBit(void* Obj)
	{
		((APtgManager*)Obj)->bShowDebugMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages = { "bShowDebugMessages", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APtgManager), &Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_DebugMessagesTimeOnScreen_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Debug" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** Specifies the time debug messages will be on screen. */" },
		{ "EditCondition", "bShowDebugMessages" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Specifies the time debug messages will be on screen." },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_DebugMessagesTimeOnScreen = { "DebugMessagesTimeOnScreen", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, DebugMessagesTimeOnScreen), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_DebugMessagesTimeOnScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_DebugMessagesTimeOnScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Components" },
		{ "Comment", "/** Root component where the procedural terrain will be attached. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Root component where the procedural terrain will be attached." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshTerrainComp_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Components" },
		{ "Comment", "/** Procedural mesh where the noise functions will apply to generate the terrain. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Procedural mesh where the noise functions will apply to generate the terrain." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshTerrainComp = { "ProcMeshTerrainComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, ProcMeshTerrainComp), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshTerrainComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshTerrainComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshWaterComp_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Components" },
		{ "Comment", "/** Procedural mesh for the water. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Procedural mesh for the water." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshWaterComp = { "ProcMeshWaterComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, ProcMeshWaterComp), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshWaterComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshWaterComp_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Components" },
		{ "Comment", "/** Billboard used to see the PTG Manager actor in the editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Billboard used to see the PTG Manager actor in the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x002008080008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_ValueProp = { "NatureStaticMeshHISM_Correspondence", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_Key_KeyProp = { "NatureStaticMeshHISM_Correspondence_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_MetaData[] = {
		{ "Comment", "/** Map of HISM components and its corresponding static mesh used to generate nature dinamically while being efficient. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Map of HISM components and its corresponding static mesh used to generate nature dinamically while being efficient." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence = { "NatureStaticMeshHISM_Correspondence", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, NatureStaticMeshHISM_Correspondence), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned_ElementProp = { "biomaActorsSpawned", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned_MetaData[] = {
		{ "Comment", "/** Set of generated bioma actors. */" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Set of generated bioma actors." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned = { "biomaActorsSpawned", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, biomaActorsSpawned), METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_fastNoiseWrapper_MetaData[] = {
		{ "Category", "PTG 0 - Properties|Fast Noise Lite" },
		{ "Comment", "// Visible is neccesary for the pointer to not nullify after constructor.\n// https://forums.unrealengine.com/development-discussion/c-gameplay-programming/28537-uproperty-member-vars-reset-to-null-by-objectinitializer\n" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Visible is neccesary for the pointer to not nullify after constructor.\nhttps:forums.unrealengine.com/development-discussion/c-gameplay-programming/28537-uproperty-member-vars-reset-to-null-by-objectinitializer" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_fastNoiseWrapper = { "fastNoiseWrapper", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, fastNoiseWrapper), Z_Construct_UClass_UPtgFastNoiseLiteWrapper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_fastNoiseWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_fastNoiseWrapper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_terrainRuntimeMesh_MetaData[] = {
		{ "Comment", "// Used to gather RMCs runtime meshes to restore them after editing something on this actor.\n" },
		{ "ModuleRelativePath", "Public/PtgManager.h" },
		{ "ToolTip", "Used to gather RMCs runtime meshes to restore them after editing something on this actor." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_terrainRuntimeMesh = { "terrainRuntimeMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, terrainRuntimeMesh), Z_Construct_UClass_UPtgRuntimeMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_terrainRuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_terrainRuntimeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APtgManager_Statics::NewProp_waterRuntimeMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/PtgManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APtgManager_Statics::NewProp_waterRuntimeMesh = { "waterRuntimeMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APtgManager, waterRuntimeMesh), Z_Construct_UClass_UPtgRuntimeMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::NewProp_waterRuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::NewProp_waterRuntimeMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APtgManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NumberOfLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_LODScreenSizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateEverythingOnPropertyChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bUseTerrainTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseInputScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseOutputScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_TerrainMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableTerrainCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_LowestGeneratedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_HighestGeneratedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeightGenerationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterRandomHeightRangePercentages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterFixedHeightValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bEnableWaterCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_WaterHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateNature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaNature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bGenerateActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_BiomaActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NoiseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_RotationType3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalOctaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalWeightedStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_FractalPingPongStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_CellularDistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_CellularReturnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_CellularJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_DomainWarpAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_bShowDebugMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_DebugMessagesTimeOnScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshTerrainComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_ProcMeshWaterComp,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_NatureStaticMeshHISM_Correspondence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_biomaActorsSpawned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_fastNoiseWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_terrainRuntimeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APtgManager_Statics::NewProp_waterRuntimeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APtgManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APtgManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APtgManager_Statics::ClassParams = {
		&APtgManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APtgManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APtgManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APtgManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APtgManager()
	{
		if (!Z_Registration_Info_UClass_APtgManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APtgManager.OuterSingleton, Z_Construct_UClass_APtgManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APtgManager.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<APtgManager>()
	{
		return APtgManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APtgManager);
	APtgManager::~APtgManager() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::EnumInfo[] = {
		{ EPtgWaterHeightGenerationType_StaticEnum, TEXT("EPtgWaterHeightGenerationType"), &Z_Registration_Info_UEnum_EPtgWaterHeightGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3380225491U) },
		{ EPtgNatureBiomas_StaticEnum, TEXT("EPtgNatureBiomas"), &Z_Registration_Info_UEnum_EPtgNatureBiomas, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 293616626U) },
		{ EPtgNatureRotationTypes_StaticEnum, TEXT("EPtgNatureRotationTypes"), &Z_Registration_Info_UEnum_EPtgNatureRotationTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 668445549U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::ScriptStructInfo[] = {
		{ FPtgBiomaNature::StaticStruct, Z_Construct_UScriptStruct_FPtgBiomaNature_Statics::NewStructOps, TEXT("PtgBiomaNature"), &Z_Registration_Info_UScriptStruct_PtgBiomaNature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPtgBiomaNature), 1177687691U) },
		{ FPtgBiomaActors::StaticStruct, Z_Construct_UScriptStruct_FPtgBiomaActors_Statics::NewStructOps, TEXT("PtgBiomaActors"), &Z_Registration_Info_UScriptStruct_PtgBiomaActors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPtgBiomaActors), 1566835566U) },
		{ FPtgTriangle::StaticStruct, Z_Construct_UScriptStruct_FPtgTriangle_Statics::NewStructOps, TEXT("PtgTriangle"), &Z_Registration_Info_UScriptStruct_PtgTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPtgTriangle), 2818666618U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APtgManager, APtgManager::StaticClass, TEXT("APtgManager"), &Z_Registration_Info_UClass_APtgManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APtgManager), 2105141326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_3905996570(TEXT("/Script/ProceduralTerrainGenerator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
