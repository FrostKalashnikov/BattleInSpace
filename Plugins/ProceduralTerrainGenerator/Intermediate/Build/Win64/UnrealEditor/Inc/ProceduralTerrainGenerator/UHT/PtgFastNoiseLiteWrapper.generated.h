// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PtgFastNoiseLiteWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPtgFastNoiseLiteWrapperCellularDistanceFunction : uint8;
enum class EPtgFastNoiseLiteWrapperCellularReturnType : uint8;
enum class EPtgFastNoiseLiteWrapperDomainWarpType : uint8;
enum class EPtgFastNoiseLiteWrapperFractalType : uint8;
enum class EPtgFastNoiseLiteWrapperNoiseType : uint8;
enum class EPtgFastNoiseLiteWrapperRotationType3D : uint8;
#ifdef PROCEDURALTERRAINGENERATOR_PtgFastNoiseLiteWrapper_generated_h
#error "PtgFastNoiseLiteWrapper.generated.h already included, missing '#pragma once' in PtgFastNoiseLiteWrapper.h"
#endif
#define PROCEDURALTERRAINGENERATOR_PtgFastNoiseLiteWrapper_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDomainWarpAmp); \
	DECLARE_FUNCTION(execSetDomainWarpType); \
	DECLARE_FUNCTION(execSetCellularJitter); \
	DECLARE_FUNCTION(execSetCellularReturnType); \
	DECLARE_FUNCTION(execSetCellularDistanceFunction); \
	DECLARE_FUNCTION(execSetFractalPingPongStrength); \
	DECLARE_FUNCTION(execSetFractalWeightedStrength); \
	DECLARE_FUNCTION(execSetFractalGain); \
	DECLARE_FUNCTION(execSetFractalLacunarity); \
	DECLARE_FUNCTION(execSetFractalOctaves); \
	DECLARE_FUNCTION(execSetFractalType); \
	DECLARE_FUNCTION(execSetRotationType3D); \
	DECLARE_FUNCTION(execSetNoiseType); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execGetNoise3D); \
	DECLARE_FUNCTION(execGetNoise2D); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSetupFastNoiseLite);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDomainWarpAmp); \
	DECLARE_FUNCTION(execSetDomainWarpType); \
	DECLARE_FUNCTION(execSetCellularJitter); \
	DECLARE_FUNCTION(execSetCellularReturnType); \
	DECLARE_FUNCTION(execSetCellularDistanceFunction); \
	DECLARE_FUNCTION(execSetFractalPingPongStrength); \
	DECLARE_FUNCTION(execSetFractalWeightedStrength); \
	DECLARE_FUNCTION(execSetFractalGain); \
	DECLARE_FUNCTION(execSetFractalLacunarity); \
	DECLARE_FUNCTION(execSetFractalOctaves); \
	DECLARE_FUNCTION(execSetFractalType); \
	DECLARE_FUNCTION(execSetRotationType3D); \
	DECLARE_FUNCTION(execSetNoiseType); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execGetNoise3D); \
	DECLARE_FUNCTION(execGetNoise2D); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSetupFastNoiseLite);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPtgFastNoiseLiteWrapper(); \
	friend struct Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics; \
public: \
	DECLARE_CLASS(UPtgFastNoiseLiteWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralTerrainGenerator"), NO_API) \
	DECLARE_SERIALIZER(UPtgFastNoiseLiteWrapper)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUPtgFastNoiseLiteWrapper(); \
	friend struct Z_Construct_UClass_UPtgFastNoiseLiteWrapper_Statics; \
public: \
	DECLARE_CLASS(UPtgFastNoiseLiteWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralTerrainGenerator"), NO_API) \
	DECLARE_SERIALIZER(UPtgFastNoiseLiteWrapper)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPtgFastNoiseLiteWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPtgFastNoiseLiteWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPtgFastNoiseLiteWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPtgFastNoiseLiteWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPtgFastNoiseLiteWrapper(UPtgFastNoiseLiteWrapper&&); \
	NO_API UPtgFastNoiseLiteWrapper(const UPtgFastNoiseLiteWrapper&); \
public: \
	NO_API virtual ~UPtgFastNoiseLiteWrapper();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPtgFastNoiseLiteWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPtgFastNoiseLiteWrapper(UPtgFastNoiseLiteWrapper&&); \
	NO_API UPtgFastNoiseLiteWrapper(const UPtgFastNoiseLiteWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPtgFastNoiseLiteWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPtgFastNoiseLiteWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPtgFastNoiseLiteWrapper) \
	NO_API virtual ~UPtgFastNoiseLiteWrapper();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_74_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<class UPtgFastNoiseLiteWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgFastNoiseLiteWrapper_h


#define FOREACH_ENUM_EPTGFASTNOISELITEWRAPPERNOISETYPE(op) \
	op(EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2) \
	op(EPtgFastNoiseLiteWrapperNoiseType::NoiseType_OpenSimplex2S) \
	op(EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Cellular) \
	op(EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Perlin) \
	op(EPtgFastNoiseLiteWrapperNoiseType::NoiseType_ValueCubic) \
	op(EPtgFastNoiseLiteWrapperNoiseType::NoiseType_Value) 

enum class EPtgFastNoiseLiteWrapperNoiseType : uint8;
template<> struct TIsUEnumClass<EPtgFastNoiseLiteWrapperNoiseType> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperNoiseType>();

#define FOREACH_ENUM_EPTGFASTNOISELITEWRAPPERROTATIONTYPE3D(op) \
	op(EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_None) \
	op(EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXYPlanes) \
	op(EPtgFastNoiseLiteWrapperRotationType3D::RotationType3D_ImproveXZPlanes) 

enum class EPtgFastNoiseLiteWrapperRotationType3D : uint8;
template<> struct TIsUEnumClass<EPtgFastNoiseLiteWrapperRotationType3D> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperRotationType3D>();

#define FOREACH_ENUM_EPTGFASTNOISELITEWRAPPERFRACTALTYPE(op) \
	op(EPtgFastNoiseLiteWrapperFractalType::FractalType_None) \
	op(EPtgFastNoiseLiteWrapperFractalType::FractalType_FBm) \
	op(EPtgFastNoiseLiteWrapperFractalType::FractalType_Ridged) \
	op(EPtgFastNoiseLiteWrapperFractalType::FractalType_PingPong) \
	op(EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpProgressive) \
	op(EPtgFastNoiseLiteWrapperFractalType::FractalType_DomainWarpIndependent) 

enum class EPtgFastNoiseLiteWrapperFractalType : uint8;
template<> struct TIsUEnumClass<EPtgFastNoiseLiteWrapperFractalType> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperFractalType>();

#define FOREACH_ENUM_EPTGFASTNOISELITEWRAPPERCELLULARDISTANCEFUNCTION(op) \
	op(EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Euclidean) \
	op(EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_EuclideanSq) \
	op(EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Manhattan) \
	op(EPtgFastNoiseLiteWrapperCellularDistanceFunction::CellularDistanceFunction_Hybrid) 

enum class EPtgFastNoiseLiteWrapperCellularDistanceFunction : uint8;
template<> struct TIsUEnumClass<EPtgFastNoiseLiteWrapperCellularDistanceFunction> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperCellularDistanceFunction>();

#define FOREACH_ENUM_EPTGFASTNOISELITEWRAPPERCELLULARRETURNTYPE(op) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_CellValue) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Add) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Sub) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Mul) \
	op(EPtgFastNoiseLiteWrapperCellularReturnType::CellularReturnType_Distance2Div) 

enum class EPtgFastNoiseLiteWrapperCellularReturnType : uint8;
template<> struct TIsUEnumClass<EPtgFastNoiseLiteWrapperCellularReturnType> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperCellularReturnType>();

#define FOREACH_ENUM_EPTGFASTNOISELITEWRAPPERDOMAINWARPTYPE(op) \
	op(EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_None) \
	op(EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2) \
	op(EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_OpenSimplex2Reduced) \
	op(EPtgFastNoiseLiteWrapperDomainWarpType::DomainWarpType_BasicGrid) 

enum class EPtgFastNoiseLiteWrapperDomainWarpType : uint8;
template<> struct TIsUEnumClass<EPtgFastNoiseLiteWrapperDomainWarpType> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgFastNoiseLiteWrapperDomainWarpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
