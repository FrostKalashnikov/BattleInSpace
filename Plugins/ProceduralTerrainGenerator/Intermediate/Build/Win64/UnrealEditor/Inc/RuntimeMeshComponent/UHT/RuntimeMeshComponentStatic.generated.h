// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RuntimeMeshComponentStatic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshProviderStatic;
enum class ERuntimeMeshUpdateFrequency : uint8;
struct FLinearColor;
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshCollisionSettings;
struct FRuntimeMeshRenderableMeshData;
struct FRuntimeMeshSectionProperties;
struct FRuntimeMeshTangent;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshComponentStatic_generated_h
#error "RuntimeMeshComponentStatic.generated.h already included, missing '#pragma once' in RuntimeMeshComponentStatic.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshComponentStatic_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasTessellationTriangleGenerationEnabled); \
	DECLARE_FUNCTION(execDisableTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execEnabledTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execHasNormalTangentGenerationEnabled); \
	DECLARE_FUNCTION(execDisableNormalTangentGeneration); \
	DECLARE_FUNCTION(execEnableNormalTangentGeneration); \
	DECLARE_FUNCTION(execGetStaticProvider); \
	DECLARE_FUNCTION(execGetSectionRenderDataAndClear); \
	DECLARE_FUNCTION(execGetSectionRenderData); \
	DECLARE_FUNCTION(execGetSectionProperties); \
	DECLARE_FUNCTION(execGetSectionBounds); \
	DECLARE_FUNCTION(execRemoveAllSectionsForLOD); \
	DECLARE_FUNCTION(execDoesSectionHaveValidMeshData); \
	DECLARE_FUNCTION(execGetLastSectionId); \
	DECLARE_FUNCTION(execGetSectionIds); \
	DECLARE_FUNCTION(execSetRenderableSectionAffectsCollision); \
	DECLARE_FUNCTION(execGetSectionsForMeshCollision); \
	DECLARE_FUNCTION(execSetRenderableLODForCollision); \
	DECLARE_FUNCTION(execGetLODForMeshCollision); \
	DECLARE_FUNCTION(execSetCollisionMesh); \
	DECLARE_FUNCTION(execGetCollisionMesh); \
	DECLARE_FUNCTION(execSetCollisionSettings); \
	DECLARE_FUNCTION(execGetCollisionSettings); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execUpdateSectionFromComponents); \
	DECLARE_FUNCTION(execUpdateSection_Blueprint); \
	DECLARE_FUNCTION(execCreateSectionFromComponents); \
	DECLARE_FUNCTION(execCreateSection_Blueprint);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasTessellationTriangleGenerationEnabled); \
	DECLARE_FUNCTION(execDisableTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execEnabledTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execHasNormalTangentGenerationEnabled); \
	DECLARE_FUNCTION(execDisableNormalTangentGeneration); \
	DECLARE_FUNCTION(execEnableNormalTangentGeneration); \
	DECLARE_FUNCTION(execGetStaticProvider); \
	DECLARE_FUNCTION(execGetSectionRenderDataAndClear); \
	DECLARE_FUNCTION(execGetSectionRenderData); \
	DECLARE_FUNCTION(execGetSectionProperties); \
	DECLARE_FUNCTION(execGetSectionBounds); \
	DECLARE_FUNCTION(execRemoveAllSectionsForLOD); \
	DECLARE_FUNCTION(execDoesSectionHaveValidMeshData); \
	DECLARE_FUNCTION(execGetLastSectionId); \
	DECLARE_FUNCTION(execGetSectionIds); \
	DECLARE_FUNCTION(execSetRenderableSectionAffectsCollision); \
	DECLARE_FUNCTION(execGetSectionsForMeshCollision); \
	DECLARE_FUNCTION(execSetRenderableLODForCollision); \
	DECLARE_FUNCTION(execGetLODForMeshCollision); \
	DECLARE_FUNCTION(execSetCollisionMesh); \
	DECLARE_FUNCTION(execGetCollisionMesh); \
	DECLARE_FUNCTION(execSetCollisionSettings); \
	DECLARE_FUNCTION(execGetCollisionSettings); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execUpdateSectionFromComponents); \
	DECLARE_FUNCTION(execUpdateSection_Blueprint); \
	DECLARE_FUNCTION(execCreateSectionFromComponents); \
	DECLARE_FUNCTION(execCreateSection_Blueprint);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponentStatic(); \
	friend struct Z_Construct_UClass_URuntimeMeshComponentStatic_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshComponentStatic, URuntimeMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponentStatic)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponentStatic(); \
	friend struct Z_Construct_UClass_URuntimeMeshComponentStatic_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshComponentStatic, URuntimeMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponentStatic)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshComponentStatic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponentStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponentStatic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponentStatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponentStatic(URuntimeMeshComponentStatic&&); \
	NO_API URuntimeMeshComponentStatic(const URuntimeMeshComponentStatic&); \
public: \
	NO_API virtual ~URuntimeMeshComponentStatic();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponentStatic(URuntimeMeshComponentStatic&&); \
	NO_API URuntimeMeshComponentStatic(const URuntimeMeshComponentStatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponentStatic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponentStatic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshComponentStatic) \
	NO_API virtual ~URuntimeMeshComponentStatic();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshComponentStatic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
