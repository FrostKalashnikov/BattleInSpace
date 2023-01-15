// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTerrainGenerator/Public/PtgFastNoiseLiteWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePtgFastNoiseLiteWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgFastNoiseLiteWrapper();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgFastNoiseLiteWrapper_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D();
	UPackage* Z_Construct_UPackage__Script_ProceduralTerrainGenerator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType;
	static UEnum* EPtgFastNoiseLiteWrapperNoiseType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgFastNoiseLiteWrapperNoiseType"));
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperNoiseType>()
	{
		return EPtgFastNoiseLiteWrapperNoiseType_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::Enumerators[] = {
		{ "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2", (int64)EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2 },
		{ "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2S", (int64)EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2S },
		{ "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular", (int64)EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular },
		{ "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Perlin", (int64)EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Perlin },
		{ "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_ValueCubic", (int64)EPtgFastNoiseLiteWrapperNoiseType::NoiseType_ValueCubic },
		{ "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Value", (int64)EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Value },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Fast Noise Lite enum wrappers\n" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "NoiseType_Cellular.DisplayName", "Cellular" },
		{ "NoiseType_Cellular.Name", "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular" },
		{ "NoiseType_OpenSimplex2.DisplayName", "Open Simplex 2" },
		{ "NoiseType_OpenSimplex2.Name", "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2" },
		{ "NoiseType_OpenSimplex2S.DisplayName", "Open Simplex 2S" },
		{ "NoiseType_OpenSimplex2S.Name", "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2S" },
		{ "NoiseType_Perlin.DisplayName", "Perlin" },
		{ "NoiseType_Perlin.Name", "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Perlin" },
		{ "NoiseType_Value.DisplayName", "Value" },
		{ "NoiseType_Value.Name", "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Value" },
		{ "NoiseType_ValueCubic.DisplayName", "Value Cubic" },
		{ "NoiseType_ValueCubic.Name", "EPtgFastNoiseLiteWrapperNoiseType::NoiseType_ValueCubic" },
		{ "ToolTip", "Fast Noise Lite enum wrappers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgFastNoiseLiteWrapperNoiseType",
		"EPtgFastNoiseLiteWrapperNoiseType",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D;
	static UEnum* EPtgFastNoiseLiteWrapperRotationType3D_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgFastNoiseLiteWrapperRotationType3D"));
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperRotationType3D>()
	{
		return EPtgFastNoiseLiteWrapperRotationType3D_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::Enumerators[] = {
		{ "EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_None", (int64)EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_None },
		{ "EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXYPlanes", (int64)EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXYPlanes },
		{ "EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXZPlanes", (int64)EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXZPlanes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "RotationType3D_ImproveXYPlanes.DisplayName", "Improve XY Planes" },
		{ "RotationType3D_ImproveXYPlanes.Name", "EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXYPlanes" },
		{ "RotationType3D_ImproveXZPlanes.DisplayName", "Improve XZ Planes" },
		{ "RotationType3D_ImproveXZPlanes.Name", "EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXZPlanes" },
		{ "RotationType3D_None.DisplayName", "None" },
		{ "RotationType3D_None.Name", "EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgFastNoiseLiteWrapperRotationType3D",
		"EPtgFastNoiseLiteWrapperRotationType3D",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType;
	static UEnum* EPtgFastNoiseLiteWrapperFractalType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgFastNoiseLiteWrapperFractalType"));
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperFractalType>()
	{
		return EPtgFastNoiseLiteWrapperFractalType_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::Enumerators[] = {
		{ "EPtgFastNoiseLiteWrapperFractalType::FractalType_None", (int64)EPtgFastNoiseLiteWrapperFractalType::FractalType_None },
		{ "EPtgFastNoiseLiteWrapperFractalType::FractalType_FBm", (int64)EPtgFastNoiseLiteWrapperFractalType::FractalType_FBm },
		{ "EPtgFastNoiseLiteWrapperFractalType::FractalType_Ridged", (int64)EPtgFastNoiseLiteWrapperFractalType::FractalType_Ridged },
		{ "EPtgFastNoiseLiteWrapperFractalType::FractalType_PingPong", (int64)EPtgFastNoiseLiteWrapperFractalType::FractalType_PingPong },
		{ "EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpProgressive", (int64)EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpProgressive },
		{ "EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpIndependent", (int64)EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpIndependent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FractalType_DomainWarpIndependent.DisplayName", "Domain Warp Independent" },
		{ "FractalType_DomainWarpIndependent.Name", "EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpIndependent" },
		{ "FractalType_DomainWarpProgressive.DisplayName", "Domain Warp Progressive" },
		{ "FractalType_DomainWarpProgressive.Name", "EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpProgressive" },
		{ "FractalType_FBm.DisplayName", "FBM" },
		{ "FractalType_FBm.Name", "EPtgFastNoiseLiteWrapperFractalType::FractalType_FBm" },
		{ "FractalType_None.DisplayName", "None" },
		{ "FractalType_None.Name", "EPtgFastNoiseLiteWrapperFractalType::FractalType_None" },
		{ "FractalType_PingPong.DisplayName", "Ping Pong" },
		{ "FractalType_PingPong.Name", "EPtgFastNoiseLiteWrapperFractalType::FractalType_PingPong" },
		{ "FractalType_Ridged.DisplayName", "Ridged" },
		{ "FractalType_Ridged.Name", "EPtgFastNoiseLiteWrapperFractalType::FractalType_Ridged" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgFastNoiseLiteWrapperFractalType",
		"EPtgFastNoiseLiteWrapperFractalType",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction;
	static UEnum* EPtgFastNoiseLiteWrapperCellularDistanceFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgFastNoiseLiteWrapperCellularDistanceFunction"));
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperCellularDistanceFunction>()
	{
		return EPtgFastNoiseLiteWrapperCellularDistanceFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::Enumerators[] = {
		{ "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Euclidean", (int64)EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Euclidean },
		{ "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_EuclideanSq", (int64)EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_EuclideanSq },
		{ "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Manhattan", (int64)EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Manhattan },
		{ "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Hybrid", (int64)EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Hybrid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CellularDistanceFunction_Euclidean.DisplayName", "Euclidean" },
		{ "CellularDistanceFunction_Euclidean.Name", "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Euclidean" },
		{ "CellularDistanceFunction_EuclideanSq.DisplayName", "Euclidean Sq" },
		{ "CellularDistanceFunction_EuclideanSq.Name", "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_EuclideanSq" },
		{ "CellularDistanceFunction_Hybrid.DisplayName", "Hybrid" },
		{ "CellularDistanceFunction_Hybrid.Name", "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Hybrid" },
		{ "CellularDistanceFunction_Manhattan.DisplayName", "Manhattan" },
		{ "CellularDistanceFunction_Manhattan.Name", "EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Manhattan" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgFastNoiseLiteWrapperCellularDistanceFunction",
		"EPtgFastNoiseLiteWrapperCellularDistanceFunction",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType;
	static UEnum* EPtgFastNoiseLiteWrapperCellularReturnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgFastNoiseLiteWrapperCellularReturnType"));
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperCellularReturnType>()
	{
		return EPtgFastNoiseLiteWrapperCellularReturnType_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::Enumerators[] = {
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_CellValue", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_CellValue },
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance },
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2 },
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Add", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Add },
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Sub", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Sub },
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Mul", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Mul },
		{ "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Div", (int64)EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Div },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CellularReturnType_CellValue.DisplayName", "Cell Value" },
		{ "CellularReturnType_CellValue.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_CellValue" },
		{ "CellularReturnType_Distance.DisplayName", "Distance" },
		{ "CellularReturnType_Distance.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance" },
		{ "CellularReturnType_Distance2.DisplayName", "Distance 2" },
		{ "CellularReturnType_Distance2.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2" },
		{ "CellularReturnType_Distance2Add.DisplayName", "Distance 2 Add" },
		{ "CellularReturnType_Distance2Add.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Add" },
		{ "CellularReturnType_Distance2Div.DisplayName", "Distance 2 Div" },
		{ "CellularReturnType_Distance2Div.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Div" },
		{ "CellularReturnType_Distance2Mul.DisplayName", "Distance 2 Mul" },
		{ "CellularReturnType_Distance2Mul.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Mul" },
		{ "CellularReturnType_Distance2Sub.DisplayName", "Distance 2 Sub" },
		{ "CellularReturnType_Distance2Sub.Name", "EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Sub" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgFastNoiseLiteWrapperCellularReturnType",
		"EPtgFastNoiseLiteWrapperCellularReturnType",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType;
	static UEnum* EPtgFastNoiseLiteWrapperDomainWarpType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgFastNoiseLiteWrapperDomainWarpType"));
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperDomainWarpType>()
	{
		return EPtgFastNoiseLiteWrapperDomainWarpType_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::Enumerators[] = {
		{ "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_None", (int64)EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_None },
		{ "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2", (int64)EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2 },
		{ "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2Reduced", (int64)EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2Reduced },
		{ "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_BasicGrid", (int64)EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_BasicGrid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DomainWarpType_BasicGrid.DisplayName", "Basic Grid" },
		{ "DomainWarpType_BasicGrid.Name", "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_BasicGrid" },
		{ "DomainWarpType_None.DisplayName", "None" },
		{ "DomainWarpType_None.Name", "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_None" },
		{ "DomainWarpType_OpenSimplex2.DisplayName", "Open Simplex 2" },
		{ "DomainWarpType_OpenSimplex2.Name", "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2" },
		{ "DomainWarpType_OpenSimplex2Reduced.DisplayName", "Open Simplex 2 Reduced" },
		{ "DomainWarpType_OpenSimplex2Reduced.Name", "EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2Reduced" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgFastNoiseLiteWrapperDomainWarpType",
		"EPtgFastNoiseLiteWrapperDomainWarpType",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType()
	{
		if (!Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType.InnerSingleton;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetDomainWarpAmp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_domainWarpAmp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDomainWarpAmp(Z_Param_domainWarpAmp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetDomainWarpType)
	{
		P_GET_ENUM(EPtgFastNoiseLiteWrapperDomainWarpType,Z_Param_domainWarpType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDomainWarpType(EPtgFastNoiseLiteWrapperDomainWarpType(Z_Param_domainWarpType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetCellularJitter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCellularJitter(Z_Param_cellularJitter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetCellularReturnType)
	{
		P_GET_ENUM(EPtgFastNoiseLiteWrapperCellularReturnType,Z_Param_cellularReturnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCellularReturnType(EPtgFastNoiseLiteWrapperCellularReturnType(Z_Param_cellularReturnType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetCellularDistanceFunction)
	{
		P_GET_ENUM(EPtgFastNoiseLiteWrapperCellularDistanceFunction,Z_Param_cellularDistanceFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCellularDistanceFunction(EPtgFastNoiseLiteWrapperCellularDistanceFunction(Z_Param_cellularDistanceFunction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFractalPingPongStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pingPongStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalPingPongStrength(Z_Param_pingPongStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFractalWeightedStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_weightedStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalWeightedStrength(Z_Param_weightedStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFractalGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalGain(Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFractalLacunarity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalLacunarity(Z_Param_lacunarity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFractalOctaves)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalOctaves(Z_Param_octaves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFractalType)
	{
		P_GET_ENUM(EPtgFastNoiseLiteWrapperFractalType,Z_Param_fractalType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalType(EPtgFastNoiseLiteWrapperFractalType(Z_Param_fractalType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetRotationType3D)
	{
		P_GET_ENUM(EPtgFastNoiseLiteWrapperRotationType3D,Z_Param_rotationType3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationType3D(EPtgFastNoiseLiteWrapperRotationType3D(Z_Param_rotationType3D));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetNoiseType)
	{
		P_GET_ENUM(EPtgFastNoiseLiteWrapperNoiseType,Z_Param_noiseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoiseType(EPtgFastNoiseLiteWrapperNoiseType(Z_Param_noiseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeed(Z_Param_seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execGetNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoise3D(Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execGetNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoise2D(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPtgFastNoiseLiteWrapper::execSetupFastNoiseLite)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_ENUM(EPtgFastNoiseLiteWrapperNoiseType,Z_Param_noiseType);
		P_GET_ENUM(EPtgFastNoiseLiteWrapperRotationType3D,Z_Param_rotationType3D);
		P_GET_ENUM(EPtgFastNoiseLiteWrapperFractalType,Z_Param_fractalType);
		P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_weightedStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pingPongStrength);
		P_GET_ENUM(EPtgFastNoiseLiteWrapperCellularDistanceFunction,Z_Param_cellularDistanceFunction);
		P_GET_ENUM(EPtgFastNoiseLiteWrapperCellularReturnType,Z_Param_cellularReturnType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
		P_GET_ENUM(EPtgFastNoiseLiteWrapperDomainWarpType,Z_Param_domainWarpType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_domainWarpAmp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupFastNoiseLite(Z_Param_seed,Z_Param_frequency,EPtgFastNoiseLiteWrapperNoiseType(Z_Param_noiseType),EPtgFastNoiseLiteWrapperRotationType3D(Z_Param_rotationType3D),EPtgFastNoiseLiteWrapperFractalType(Z_Param_fractalType),Z_Param_octaves,Z_Param_lacunarity,Z_Param_gain,Z_Param_weightedStrength,Z_Param_pingPongStrength,EPtgFastNoiseLiteWrapperCellularDistanceFunction(Z_Param_cellularDistanceFunction),EPtgFastNoiseLiteWrapperCellularReturnType(Z_Param_cellularReturnType),Z_Param_cellularJitter,EPtgFastNoiseLiteWrapperDomainWarpType(Z_Param_domainWarpType),Z_Param_domainWarpAmp);
		P_NATIVE_END;
	}
	void UPtgFastNoiseLiteWrapper::StaticRegisterNativesUPtgFastNoiseLiteWrapper()
	{
		UClass* Class = UPtgFastNoiseLiteWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNoise2D", &UPtgFastNoiseLiteWrapper::execGetNoise2D },
			{ "GetNoise3D", &UPtgFastNoiseLiteWrapper::execGetNoise3D },
			{ "IsInitialized", &UPtgFastNoiseLiteWrapper::execIsInitialized },
			{ "SetCellularDistanceFunction", &UPtgFastNoiseLiteWrapper::execSetCellularDistanceFunction },
			{ "SetCellularJitter", &UPtgFastNoiseLiteWrapper::execSetCellularJitter },
			{ "SetCellularReturnType", &UPtgFastNoiseLiteWrapper::execSetCellularReturnType },
			{ "SetDomainWarpAmp", &UPtgFastNoiseLiteWrapper::execSetDomainWarpAmp },
			{ "SetDomainWarpType", &UPtgFastNoiseLiteWrapper::execSetDomainWarpType },
			{ "SetFractalGain", &UPtgFastNoiseLiteWrapper::execSetFractalGain },
			{ "SetFractalLacunarity", &UPtgFastNoiseLiteWrapper::execSetFractalLacunarity },
			{ "SetFractalOctaves", &UPtgFastNoiseLiteWrapper::execSetFractalOctaves },
			{ "SetFractalPingPongStrength", &UPtgFastNoiseLiteWrapper::execSetFractalPingPongStrength },
			{ "SetFractalType", &UPtgFastNoiseLiteWrapper::execSetFractalType },
			{ "SetFractalWeightedStrength", &UPtgFastNoiseLiteWrapper::execSetFractalWeightedStrength },
			{ "SetFrequency", &UPtgFastNoiseLiteWrapper::execSetFrequency },
			{ "SetNoiseType", &UPtgFastNoiseLiteWrapper::execSetNoiseType },
			{ "SetRotationType3D", &UPtgFastNoiseLiteWrapper::execSetRotationType3D },
			{ "SetSeed", &UPtgFastNoiseLiteWrapper::execSetSeed },
			{ "SetupFastNoiseLite", &UPtgFastNoiseLiteWrapper::execSetupFastNoiseLite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventGetNoise2D_Parms
		{
			float x;
			float y;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise2D_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise2D_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_y_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x and y values.\n\x09*\n\x09* @param x\x09- The x axis value.\n\x09* @param y\x09- The y axis value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x and y values.\n\n@param x      - The x axis value.\n@param y      - The y axis value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "GetNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::PtgFastNoiseLiteWrapper_eventGetNoise2D_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventGetNoise3D_Parms
		{
			float x;
			float y;
			float z;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise3D_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise3D_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise3D_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_z_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventGetNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x, y and z values.\n\x09*\n\x09* @param x\x09- The x axis value.\n\x09* @param y\x09- The y axis value.\n\x09* @param z\x09- The z axis value.\n\x09*/" },
		{ "CPP_Default_z", "0.000000" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x, y and z values.\n\n@param x      - The x axis value.\n@param y      - The y axis value.\n@param z      - The z axis value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "GetNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::PtgFastNoiseLiteWrapper_eventGetNoise3D_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PtgFastNoiseLiteWrapper_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PtgFastNoiseLiteWrapper_eventIsInitialized_Parms), &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper" },
		{ "Comment", "/** Returns true if Fast Noise Lite properties are initialized, false otherwise. */" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "ToolTip", "Returns true if Fast Noise Lite properties are initialized, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::PtgFastNoiseLiteWrapper_eventIsInitialized_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetCellularDistanceFunction_Parms
		{
			EPtgFastNoiseLiteWrapperCellularDistanceFunction cellularDistanceFunction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularDistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction = { "cellularDistanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetCellularDistanceFunction_Parms, cellularDistanceFunction), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction_MetaData)) }; // 3881904465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::NewProp_cellularDistanceFunction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Cellular settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetCellularDistanceFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::PtgFastNoiseLiteWrapper_eventSetCellularDistanceFunction_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetCellularJitter_Parms
		{
			float cellularJitter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetCellularJitter_Parms, cellularJitter), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::NewProp_cellularJitter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Cellular settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetCellularJitter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::PtgFastNoiseLiteWrapper_eventSetCellularJitter_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetCellularReturnType_Parms
		{
			EPtgFastNoiseLiteWrapperCellularReturnType cellularReturnType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetCellularReturnType_Parms, cellularReturnType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType_MetaData)) }; // 1544631172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::NewProp_cellularReturnType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Cellular settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetCellularReturnType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::PtgFastNoiseLiteWrapper_eventSetCellularReturnType_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetDomainWarpAmp_Parms
		{
			float domainWarpAmp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_domainWarpAmp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_domainWarpAmp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::NewProp_domainWarpAmp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::NewProp_domainWarpAmp = { "domainWarpAmp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetDomainWarpAmp_Parms, domainWarpAmp), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::NewProp_domainWarpAmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::NewProp_domainWarpAmp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::NewProp_domainWarpAmp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Domain Warp settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetDomainWarpAmp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::PtgFastNoiseLiteWrapper_eventSetDomainWarpAmp_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetDomainWarpType_Parms
		{
			EPtgFastNoiseLiteWrapperDomainWarpType domainWarpType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_domainWarpType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_domainWarpType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_domainWarpType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType = { "domainWarpType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetDomainWarpType_Parms, domainWarpType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType_MetaData)) }; // 305474475
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::NewProp_domainWarpType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Domain Warp settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetDomainWarpType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::PtgFastNoiseLiteWrapper_eventSetDomainWarpType_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFractalGain_Parms
		{
			float gain;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFractalGain_Parms, gain), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::NewProp_gain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::NewProp_gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Fractal settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFractalGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::PtgFastNoiseLiteWrapper_eventSetFractalGain_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFractalLacunarity_Parms
		{
			float lacunarity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFractalLacunarity_Parms, lacunarity), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::NewProp_lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::NewProp_lacunarity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::NewProp_lacunarity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Fractal settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFractalLacunarity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::PtgFastNoiseLiteWrapper_eventSetFractalLacunarity_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFractalOctaves_Parms
		{
			int32 octaves;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFractalOctaves_Parms, octaves), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::NewProp_octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::NewProp_octaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::NewProp_octaves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Fractal settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFractalOctaves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::PtgFastNoiseLiteWrapper_eventSetFractalOctaves_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFractalPingPongStrength_Parms
		{
			float pingPongStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pingPongStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pingPongStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::NewProp_pingPongStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::NewProp_pingPongStrength = { "pingPongStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFractalPingPongStrength_Parms, pingPongStrength), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::NewProp_pingPongStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::NewProp_pingPongStrength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::NewProp_pingPongStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Fractal settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFractalPingPongStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::PtgFastNoiseLiteWrapper_eventSetFractalPingPongStrength_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFractalType_Parms
		{
			EPtgFastNoiseLiteWrapperFractalType fractalType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fractalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fractalType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType = { "fractalType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFractalType_Parms, fractalType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData)) }; // 388281875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::NewProp_fractalType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Fractal settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFractalType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::PtgFastNoiseLiteWrapper_eventSetFractalType_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFractalWeightedStrength_Parms
		{
			float weightedStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weightedStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weightedStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::NewProp_weightedStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::NewProp_weightedStrength = { "weightedStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFractalWeightedStrength_Parms, weightedStrength), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::NewProp_weightedStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::NewProp_weightedStrength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::NewProp_weightedStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|Fractal settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFractalWeightedStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::PtgFastNoiseLiteWrapper_eventSetFractalWeightedStrength_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetFrequency_Parms
		{
			float frequency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetFrequency_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::NewProp_frequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::NewProp_frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|General settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::PtgFastNoiseLiteWrapper_eventSetFrequency_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetNoiseType_Parms
		{
			EPtgFastNoiseLiteWrapperNoiseType noiseType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_noiseType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetNoiseType_Parms, noiseType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData)) }; // 1765731174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::NewProp_noiseType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|General settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetNoiseType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::PtgFastNoiseLiteWrapper_eventSetNoiseType_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetRotationType3D_Parms
		{
			EPtgFastNoiseLiteWrapperRotationType3D rotationType3D;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_rotationType3D_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationType3D_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_rotationType3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D = { "rotationType3D", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetRotationType3D_Parms, rotationType3D), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D_MetaData)) }; // 1967871088
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::NewProp_rotationType3D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|General settings" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetRotationType3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::PtgFastNoiseLiteWrapper_eventSetRotationType3D_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetSeed_Parms
		{
			int32 seed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetSeed_Parms, seed), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::NewProp_seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper|General settings" },
		{ "Comment", "//***********************************************************\n//*********************     SETTERS     *********************\n//***********************************************************\n" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "ToolTip", "*****************     SETTERS     *********************" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::PtgFastNoiseLiteWrapper_eventSetSeed_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics
	{
		struct PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms
		{
			int32 seed;
			float frequency;
			EPtgFastNoiseLiteWrapperNoiseType noiseType;
			EPtgFastNoiseLiteWrapperRotationType3D rotationType3D;
			EPtgFastNoiseLiteWrapperFractalType fractalType;
			int32 octaves;
			float lacunarity;
			float gain;
			float weightedStrength;
			float pingPongStrength;
			EPtgFastNoiseLiteWrapperCellularDistanceFunction cellularDistanceFunction;
			EPtgFastNoiseLiteWrapperCellularReturnType cellularReturnType;
			float cellularJitter;
			EPtgFastNoiseLiteWrapperDomainWarpType domainWarpType;
			float domainWarpAmp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_noiseType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_rotationType3D_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationType3D_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_rotationType3D;
		static const UECodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fractalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fractalType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_octaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weightedStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weightedStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pingPongStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pingPongStrength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularDistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_domainWarpType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_domainWarpType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_domainWarpType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_domainWarpAmp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_domainWarpAmp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, seed), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_frequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, noiseType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperNoiseType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType_MetaData)) }; // 1765731174
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D = { "rotationType3D", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, rotationType3D), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperRotationType3D, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D_MetaData)) }; // 1967871088
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType = { "fractalType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, fractalType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperFractalType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType_MetaData)) }; // 388281875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, octaves), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_octaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, lacunarity), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_lacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, gain), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_weightedStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_weightedStrength = { "weightedStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, weightedStrength), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_weightedStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_weightedStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_pingPongStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_pingPongStrength = { "pingPongStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, pingPongStrength), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_pingPongStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_pingPongStrength_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction = { "cellularDistanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, cellularDistanceFunction), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularDistanceFunction, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction_MetaData)) }; // 3881904465
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, cellularReturnType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperCellularReturnType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType_MetaData)) }; // 1544631172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, cellularJitter), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularJitter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType = { "domainWarpType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, domainWarpType), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgFastNoiseLiteWrapperDomainWarpType, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType_MetaData)) }; // 305474475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpAmp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpAmp = { "domainWarpAmp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms, domainWarpAmp), METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpAmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpAmp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_noiseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_rotationType3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_fractalType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_octaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_weightedStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_pingPongStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularDistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularReturnType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_cellularJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::NewProp_domainWarpAmp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Fast Noise Lite Wrapper" },
		{ "Comment", "/**\n\x09* Set all the properties needed to generate the noise.\n\x09*\n\x09* @param seed\x09\x09\x09\x09\x09\x09- Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1619\n\x09* @param frequency\x09\x09\x09\x09\x09- Sets frequency for all noise types. Default value: 0.02\n\x09* @param noiseType\x09\x09\x09\x09\x09- Sets noise algorithm used for GetNoise(...). Default value: OpenSimplex2\n\x09* @param rotationType3D\x09\x09\x09\x09- Sets domain rotation type for 3D Noise and 3D DomainWarp. Default value: None\n\x09* @param fractalType\x09\x09\x09\x09- Sets method for combining octaves in all fractal noise types. Default value: FBM\n\x09* @param octaves\x09\x09\x09\x09\x09- Sets octave count for all fractal noise types. Default value: 5\n\x09* @param lacunarity\x09\x09\x09\x09\x09- Sets octave lacunarity for all fractal noise types. Default value: 2.0\n\x09* @param gain\x09\x09\x09\x09\x09\x09- Sets octave gain for all fractal noise types. Default value: 0.5\n\x09* @param weightedStrength\x09\x09\x09- Sets octave weighting for all non DomainWarp fractal types. Default value: 0.0. Note: Keep between 0...1 to maintain -1...1 output bounding.\n\x09* @param pingPongStrength\x09\x09\x09- Sets strength of the fractal ping pong effect. Default value: 2.0\n\x09* @param cellularDistanceFunction\x09- Sets distance function used in cellular noise calculations. Default value: EuclideanSq\n\x09* @param cellularReturnType\x09\x09\x09- Sets return type from cellular noise calculations. Default value: Distance\n\x09* @param cellularJitter\x09\x09\x09\x09- Sets the maximum distance a cellular point can move from it's grid position. Default value: 1.0. Note: Setting this higher than 1 will cause artifacts\n\x09* @param domainWarpType\x09\x09\x09\x09- Sets the warp algorithm when using DomainWarp(...). Default value: None\n\x09* @param domainWarpAmp\x09\x09\x09\x09- Sets the maximum warp distance from original position when using DomainWarp(...). Default value: 30.0\n\x09*/" },
		{ "CPP_Default_cellularDistanceFunction", "CellularDistanceFunction_EuclideanSq" },
		{ "CPP_Default_cellularJitter", "1.000000" },
		{ "CPP_Default_cellularReturnType", "CellularReturnType_Distance" },
		{ "CPP_Default_domainWarpAmp", "30.000000" },
		{ "CPP_Default_domainWarpType", "DomainWarpType_None" },
		{ "CPP_Default_fractalType", "FractalType_FBm" },
		{ "CPP_Default_frequency", "0.020000" },
		{ "CPP_Default_gain", "0.500000" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_noiseType", "NoiseType_OpenSimplex2" },
		{ "CPP_Default_octaves", "5" },
		{ "CPP_Default_pingPongStrength", "2.000000" },
		{ "CPP_Default_rotationType3D", "RotationType3D_None" },
		{ "CPP_Default_seed", "1619" },
		{ "CPP_Default_weightedStrength", "0.000000" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "ToolTip", "Set all the properties needed to generate the noise.\n\n@param seed                                           - Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1619\n@param frequency                                      - Sets frequency for all noise types. Default value: 0.02\n@param noiseType                                      - Sets noise algorithm used for GetNoise(...). Default value: OpenSimplex2\n@param rotationType3D                         - Sets domain rotation type for 3D Noise and 3D DomainWarp. Default value: None\n@param fractalType                            - Sets method for combining octaves in all fractal noise types. Default value: FBM\n@param octaves                                        - Sets octave count for all fractal noise types. Default value: 5\n@param lacunarity                                     - Sets octave lacunarity for all fractal noise types. Default value: 2.0\n@param gain                                           - Sets octave gain for all fractal noise types. Default value: 0.5\n@param weightedStrength                       - Sets octave weighting for all non DomainWarp fractal types. Default value: 0.0. Note: Keep between 0...1 to maintain -1...1 output bounding.\n@param pingPongStrength                       - Sets strength of the fractal ping pong effect. Default value: 2.0\n@param cellularDistanceFunction       - Sets distance function used in cellular noise calculations. Default value: EuclideanSq\n@param cellularReturnType                     - Sets return type from cellular noise calculations. Default value: Distance\n@param cellularJitter                         - Sets the maximum distance a cellular point can move from it's grid position. Default value: 1.0. Note: Setting this higher than 1 will cause artifacts\n@param domainWarpType                         - Sets the warp algorithm when using DomainWarp(...). Default value: None\n@param domainWarpAmp                          - Sets the maximum warp distance from original position when using DomainWarp(...). Default value: 30.0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgFastNoiseLiteWrapper, nullptr, "SetupFastNoiseLite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::PtgFastNoiseLiteWrapper_eventSetupFastNoiseLite_Parms), Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPtgFastNoiseLiteWrapper);
	UClass* Z_Construct_UClass_UPtgFastNoiseLiteWrapper_NoRegister()
	{
		return UPtgFastNoiseLiteWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise2D, "GetNoise2D" }, // 4089926586
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_GetNoise3D, "GetNoise3D" }, // 2499171363
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_IsInitialized, "IsInitialized" }, // 289295222
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularDistanceFunction, "SetCellularDistanceFunction" }, // 3546984915
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularJitter, "SetCellularJitter" }, // 2709262533
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetCellularReturnType, "SetCellularReturnType" }, // 769431660
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpAmp, "SetDomainWarpAmp" }, // 4192256126
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetDomainWarpType, "SetDomainWarpType" }, // 753140310
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalGain, "SetFractalGain" }, // 144798009
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalLacunarity, "SetFractalLacunarity" }, // 2194872206
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalOctaves, "SetFractalOctaves" }, // 46626562
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalPingPongStrength, "SetFractalPingPongStrength" }, // 3172654624
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalType, "SetFractalType" }, // 1778862676
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFractalWeightedStrength, "SetFractalWeightedStrength" }, // 4285509377
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetFrequency, "SetFrequency" }, // 1452877031
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetNoiseType, "SetNoiseType" }, // 4022268108
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetRotationType3D, "SetRotationType3D" }, // 2608413901
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetSeed, "SetSeed" }, // 2051762429
		{ &Z_Construct_UFunction_UPtgFastNoiseLiteWrapper_SetupFastNoiseLite, "SetupFastNoiseLite" }, // 2236906785
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper for Auburns's Fast Noise Lite library, also available for blueprints usage.\n */" },
		{ "IncludePath", "PtgFastNoiseLiteWrapper.h" },
		{ "ModuleRelativePath", "Public/PtgFastNoiseLiteWrapper.h" },
		{ "ToolTip", "Wrapper for Auburns's Fast Noise Lite library, also available for blueprints usage." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPtgFastNoiseLiteWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::ClassParams = {
		&UPtgFastNoiseLiteWrapper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPtgFastNoiseLiteWrapper()
	{
		if (!Z_Registration_Info_UClass_UPtgFastNoiseLiteWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPtgFastNoiseLiteWrapper.OuterSingleton, Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPtgFastNoiseLiteWrapper.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<UPtgFastNoiseLiteWrapper>()
	{
		return UPtgFastNoiseLiteWrapper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPtgFastNoiseLiteWrapper);
	UPtgFastNoiseLiteWrapper::~UPtgFastNoiseLiteWrapper() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics::EnumInfo[] = {
		{ EPtgFastNoiseLiteWrapperNoiseType_StaticEnum, TEXT("EPtgFastNoiseLiteWrapperNoiseType"), &Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperNoiseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1765731174U) },
		{ EPtgFastNoiseLiteWrapperRotationType3D_StaticEnum, TEXT("EPtgFastNoiseLiteWrapperRotationType3D"), &Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperRotationType3D, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1967871088U) },
		{ EPtgFastNoiseLiteWrapperFractalType_StaticEnum, TEXT("EPtgFastNoiseLiteWrapperFractalType"), &Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperFractalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 388281875U) },
		{ EPtgFastNoiseLiteWrapperCellularDistanceFunction_StaticEnum, TEXT("EPtgFastNoiseLiteWrapperCellularDistanceFunction"), &Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularDistanceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3881904465U) },
		{ EPtgFastNoiseLiteWrapperCellularReturnType_StaticEnum, TEXT("EPtgFastNoiseLiteWrapperCellularReturnType"), &Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperCellularReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1544631172U) },
		{ EPtgFastNoiseLiteWrapperDomainWarpType_StaticEnum, TEXT("EPtgFastNoiseLiteWrapperDomainWarpType"), &Z_Registration_Info_UEnum_EPtgFastNoiseLiteWrapperDomainWarpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 305474475U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPtgFastNoiseLiteWrapper, UPtgFastNoiseLiteWrapper::StaticClass, TEXT("UPtgFastNoiseLiteWrapper"), &Z_Registration_Info_UClass_UPtgFastNoiseLiteWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPtgFastNoiseLiteWrapper), 497021530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_250432250(TEXT("/Script/ProceduralTerrainGenerator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
