// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodySetup;
class URuntimeMeshProvider;
struct FRuntimeMeshCollisionHitInfo;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMesh_generated_h
#error "RuntimeMesh.generated.h already included, missing '#pragma once' in RuntimeMesh.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMesh_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_40_DELEGATE \
static inline void FRuntimeMeshCollisionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RuntimeMeshCollisionUpdatedDelegate) \
{ \
	RuntimeMeshCollisionUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBodySetup); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetHitSource); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetProviderPtr); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitialize);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBodySetup); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetHitSource); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetProviderPtr); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitialize);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPtgRuntimeMesh(); \
	friend struct Z_Construct_UClass_UPtgRuntimeMesh_Statics; \
public: \
	DECLARE_CLASS(UPtgRuntimeMesh, URuntimeMeshProviderTargetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UPtgRuntimeMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UPtgRuntimeMesh*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUPtgRuntimeMesh(); \
	friend struct Z_Construct_UClass_UPtgRuntimeMesh_Statics; \
public: \
	DECLARE_CLASS(UPtgRuntimeMesh, URuntimeMeshProviderTargetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UPtgRuntimeMesh) \
	virtual UObject* _getUObject() const override { return const_cast<UPtgRuntimeMesh*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPtgRuntimeMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPtgRuntimeMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPtgRuntimeMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPtgRuntimeMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPtgRuntimeMesh(UPtgRuntimeMesh&&); \
	NO_API UPtgRuntimeMesh(const UPtgRuntimeMesh&); \
public: \
	NO_API virtual ~UPtgRuntimeMesh();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPtgRuntimeMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPtgRuntimeMesh(UPtgRuntimeMesh&&); \
	NO_API UPtgRuntimeMesh(const UPtgRuntimeMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPtgRuntimeMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPtgRuntimeMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPtgRuntimeMesh) \
	NO_API virtual ~UPtgRuntimeMesh();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_43_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PtgRuntimeMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class UPtgRuntimeMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
