// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeMeshCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshCore_generated_h
#error "RuntimeMeshCore.generated.h already included, missing '#pragma once' in RuntimeMeshCore.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshCore_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics; \
	RUNTIMEMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshTangent>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshDistanceFieldData_Statics; \
	RUNTIMEMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshDistanceFieldData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCore_h


#define FOREACH_ENUM_ERUNTIMEMESHMOBILITY(op) \
	op(ERuntimeMeshMobility::Movable) \
	op(ERuntimeMeshMobility::Stationary) \
	op(ERuntimeMeshMobility::Static) 

enum class ERuntimeMeshMobility : uint8;
template<> struct TIsUEnumClass<ERuntimeMeshMobility> { enum { Value = true }; };
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshMobility>();

#define FOREACH_ENUM_ERUNTIMEMESHUPDATEFREQUENCY(op) \
	op(ERuntimeMeshUpdateFrequency::Average) \
	op(ERuntimeMeshUpdateFrequency::Frequent) \
	op(ERuntimeMeshUpdateFrequency::Infrequent) 

enum class ERuntimeMeshUpdateFrequency : uint8;
template<> struct TIsUEnumClass<ERuntimeMeshUpdateFrequency> { enum { Value = true }; };
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshUpdateFrequency>();

#define FOREACH_ENUM_ERUNTIMEMESHCOLLISIONCOOKINGMODE(op) \
	op(ERuntimeMeshCollisionCookingMode::CollisionPerformance) \
	op(ERuntimeMeshCollisionCookingMode::CookingPerformance) 

enum class ERuntimeMeshCollisionCookingMode : uint8;
template<> struct TIsUEnumClass<ERuntimeMeshCollisionCookingMode> { enum { Value = true }; };
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionCookingMode>();

#define FOREACH_ENUM_ERUNTIMEMESHTHREADINGPRIORITY(op) \
	op(ERuntimeMeshThreadingPriority::Normal) \
	op(ERuntimeMeshThreadingPriority::AboveNormal) \
	op(ERuntimeMeshThreadingPriority::BelowNormal) \
	op(ERuntimeMeshThreadingPriority::Highest) \
	op(ERuntimeMeshThreadingPriority::Lowest) \
	op(ERuntimeMeshThreadingPriority::SlightlyBelowNormal) \
	op(ERuntimeMeshThreadingPriority::TimeCritical) 

enum class ERuntimeMeshThreadingPriority : uint8;
template<> struct TIsUEnumClass<ERuntimeMeshThreadingPriority> { enum { Value = true }; };
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshThreadingPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
