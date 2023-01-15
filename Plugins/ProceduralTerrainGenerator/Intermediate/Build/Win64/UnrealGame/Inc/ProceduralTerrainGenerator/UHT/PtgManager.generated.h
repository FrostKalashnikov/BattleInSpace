// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PtgManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshComponent;
enum class EPtgProcMeshShapes : uint8;
#ifdef PROCEDURALTERRAINGENERATOR_PtgManager_generated_h
#error "PtgManager.generated.h already included, missing '#pragma once' in PtgManager.h"
#endif
#define PROCEDURALTERRAINGENERATOR_PtgManager_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPtgBiomaNature_Statics; \
	PROCEDURALTERRAINGENERATOR_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<struct FPtgBiomaNature>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPtgBiomaActors_Statics; \
	PROCEDURALTERRAINGENERATOR_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<struct FPtgBiomaActors>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPtgTriangle_Statics; \
	PROCEDURALTERRAINGENERATOR_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<struct FPtgTriangle>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHighestGeneratedHeight); \
	DECLARE_FUNCTION(execGetLowestGeneratedHeight); \
	DECLARE_FUNCTION(execGetVertexHeightData); \
	DECLARE_FUNCTION(execGetProcMeshWaterComp); \
	DECLARE_FUNCTION(execGetProcMeshTerrainComp); \
	DECLARE_FUNCTION(execGetShape); \
	DECLARE_FUNCTION(execClearActors); \
	DECLARE_FUNCTION(execGenerateActorsWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateActorsWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateActors); \
	DECLARE_FUNCTION(execClearNature); \
	DECLARE_FUNCTION(execGenerateNatureWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateNatureWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateNature); \
	DECLARE_FUNCTION(execClearWaterMesh); \
	DECLARE_FUNCTION(execGenerateWaterMeshWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateWaterMeshWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateWaterMesh); \
	DECLARE_FUNCTION(execClearTerrainMesh); \
	DECLARE_FUNCTION(execGenerateTerrainMeshWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateTerrainMeshWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateTerrainMesh); \
	DECLARE_FUNCTION(execClearNatureAndActors); \
	DECLARE_FUNCTION(execGenerateEverythingWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateEverythingWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateEverything);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHighestGeneratedHeight); \
	DECLARE_FUNCTION(execGetLowestGeneratedHeight); \
	DECLARE_FUNCTION(execGetVertexHeightData); \
	DECLARE_FUNCTION(execGetProcMeshWaterComp); \
	DECLARE_FUNCTION(execGetProcMeshTerrainComp); \
	DECLARE_FUNCTION(execGetShape); \
	DECLARE_FUNCTION(execClearActors); \
	DECLARE_FUNCTION(execGenerateActorsWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateActorsWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateActors); \
	DECLARE_FUNCTION(execClearNature); \
	DECLARE_FUNCTION(execGenerateNatureWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateNatureWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateNature); \
	DECLARE_FUNCTION(execClearWaterMesh); \
	DECLARE_FUNCTION(execGenerateWaterMeshWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateWaterMeshWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateWaterMesh); \
	DECLARE_FUNCTION(execClearTerrainMesh); \
	DECLARE_FUNCTION(execGenerateTerrainMeshWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateTerrainMeshWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateTerrainMesh); \
	DECLARE_FUNCTION(execClearNatureAndActors); \
	DECLARE_FUNCTION(execGenerateEverythingWithRandomSeed); \
	DECLARE_FUNCTION(execGenerateEverythingWithCustomSeed); \
	DECLARE_FUNCTION(execGenerateEverything);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPtgManager(); \
	friend struct Z_Construct_UClass_APtgManager_Statics; \
public: \
	DECLARE_CLASS(APtgManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTerrainGenerator"), NO_API) \
	DECLARE_SERIALIZER(APtgManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_INCLASS \
private: \
	static void StaticRegisterNativesAPtgManager(); \
	friend struct Z_Construct_UClass_APtgManager_Statics; \
public: \
	DECLARE_CLASS(APtgManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralTerrainGenerator"), NO_API) \
	DECLARE_SERIALIZER(APtgManager)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APtgManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APtgManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APtgManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APtgManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APtgManager(APtgManager&&); \
	NO_API APtgManager(const APtgManager&); \
public: \
	NO_API virtual ~APtgManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APtgManager(APtgManager&&); \
	NO_API APtgManager(const APtgManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APtgManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APtgManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APtgManager) \
	NO_API virtual ~APtgManager();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_390_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h_393_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<class APtgManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgManager_h


#define FOREACH_ENUM_EPTGWATERHEIGHTGENERATIONTYPE(op) \
	op(EPtgWaterHeightGenerationType::RandomPercentage) \
	op(EPtgWaterHeightGenerationType::FixedPercentage) \
	op(EPtgWaterHeightGenerationType::FixedHeight) 

enum class EPtgWaterHeightGenerationType : uint8;
template<> struct TIsUEnumClass<EPtgWaterHeightGenerationType> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgWaterHeightGenerationType>();

#define FOREACH_ENUM_EPTGNATUREBIOMAS(op) \
	op(EPtgNatureBiomas::Earth) \
	op(EPtgNatureBiomas::Underwater) \
	op(EPtgNatureBiomas::Both) 

enum class EPtgNatureBiomas : uint8;
template<> struct TIsUEnumClass<EPtgNatureBiomas> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgNatureBiomas>();

#define FOREACH_ENUM_EPTGNATUREROTATIONTYPES(op) \
	op(EPtgNatureRotationTypes::Random) \
	op(EPtgNatureRotationTypes::TerrainShapeNormal) \
	op(EPtgNatureRotationTypes::MeshSurfaceNormal) 

enum class EPtgNatureRotationTypes : uint8;
template<> struct TIsUEnumClass<EPtgNatureRotationTypes> { enum { Value = true }; };
template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgNatureRotationTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
