// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeMeshProviderTargetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FRuntimeMeshLODProperties;
struct FRuntimeMeshMaterialSlot;
struct FRuntimeMeshSectionProperties;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderTargetInterface_generated_h
#error "RuntimeMeshProviderTargetInterface.generated.h already included, missing '#pragma once' in RuntimeMeshProviderTargetInterface.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderTargetInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execGetMaterialSlot); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execMarkCollisionDirty); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execMarkSectionDirty); \
	DECLARE_FUNCTION(execSetSectionCastsShadow); \
	DECLARE_FUNCTION(execSetSectionVisibility); \
	DECLARE_FUNCTION(execCreateSection); \
	DECLARE_FUNCTION(execMarkAllLODsDirty); \
	DECLARE_FUNCTION(execMarkLODDirty); \
	DECLARE_FUNCTION(execSetLODScreenSize); \
	DECLARE_FUNCTION(execConfigureLODs);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execGetMaterialSlot); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execMarkCollisionDirty); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execMarkSectionDirty); \
	DECLARE_FUNCTION(execSetSectionCastsShadow); \
	DECLARE_FUNCTION(execSetSectionVisibility); \
	DECLARE_FUNCTION(execCreateSection); \
	DECLARE_FUNCTION(execMarkAllLODsDirty); \
	DECLARE_FUNCTION(execMarkLODDirty); \
	DECLARE_FUNCTION(execSetLODScreenSize); \
	DECLARE_FUNCTION(execConfigureLODs);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderTargetInterface(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderTargetInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderTargetInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderTargetInterface(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderTargetInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderTargetInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderTargetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderTargetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderTargetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderTargetInterface(URuntimeMeshProviderTargetInterface&&); \
	NO_API URuntimeMeshProviderTargetInterface(const URuntimeMeshProviderTargetInterface&); \
public: \
	NO_API virtual ~URuntimeMeshProviderTargetInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderTargetInterface(URuntimeMeshProviderTargetInterface&&); \
	NO_API URuntimeMeshProviderTargetInterface(const URuntimeMeshProviderTargetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderTargetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderTargetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderTargetInterface) \
	NO_API virtual ~URuntimeMeshProviderTargetInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderTargetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
