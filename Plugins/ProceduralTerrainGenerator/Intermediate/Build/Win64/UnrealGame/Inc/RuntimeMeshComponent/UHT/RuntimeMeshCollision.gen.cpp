// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshCollision() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh;
class UScriptStruct* FRuntimeMeshCollisionConvexMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionConvexMesh"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionConvexMesh>()
{
	return FRuntimeMeshCollisionConvexMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionConvexMesh>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_Inner = { "VertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Convex" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer = { "VertexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionConvexMesh, VertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Convex" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionConvexMesh, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionConvexMesh",
		sizeof(FRuntimeMeshCollisionConvexMesh),
		alignof(FRuntimeMeshCollisionConvexMesh),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere;
class UScriptStruct* FRuntimeMeshCollisionSphere::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSphere"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionSphere>()
{
	return FRuntimeMeshCollisionSphere::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSphere>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Sphere" },
		{ "Comment", "/** Position of the sphere's origin */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Position of the sphere's origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSphere, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Sphere" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSphere, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionSphere",
		sizeof(FRuntimeMeshCollisionSphere),
		alignof(FRuntimeMeshCollisionSphere),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox;
class UScriptStruct* FRuntimeMeshCollisionBox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionBox"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionBox>()
{
	return FRuntimeMeshCollisionBox::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionBox>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Box" },
		{ "Comment", "/** Position of the box's origin */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Position of the box's origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Box" },
		{ "Comment", "/** Rotation of the box */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Rotation of the box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Box" },
		{ "Comment", "/** Extents of the box */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Extents of the box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionBox",
		sizeof(FRuntimeMeshCollisionBox),
		alignof(FRuntimeMeshCollisionBox),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule;
class UScriptStruct* FRuntimeMeshCollisionCapsule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionCapsule"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionCapsule>()
{
	return FRuntimeMeshCollisionCapsule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionCapsule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** Position of the capsule's origin */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Position of the capsule's origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** Rotation of the capsule */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Rotation of the capsule" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** Radius of the capsule */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Radius of the capsule" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** This is of line-segment ie. add Radius to both ends to find total length. */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "This is of line-segment ie. add Radius to both ends to find total length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionCapsule",
		sizeof(FRuntimeMeshCollisionCapsule),
		alignof(FRuntimeMeshCollisionCapsule),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream;
class UScriptStruct* FRuntimeMeshCollisionVertexStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionVertexStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionVertexStream>()
{
	return FRuntimeMeshCollisionVertexStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionVertexStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionVertexStream",
		sizeof(FRuntimeMeshCollisionVertexStream),
		alignof(FRuntimeMeshCollisionVertexStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream;
class UScriptStruct* FRuntimeMeshCollisionTriangleStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionTriangleStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionTriangleStream>()
{
	return FRuntimeMeshCollisionTriangleStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionTriangleStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionTriangleStream",
		sizeof(FRuntimeMeshCollisionTriangleStream),
		alignof(FRuntimeMeshCollisionTriangleStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream;
class UScriptStruct* FRuntimeMeshCollisionTexCoordStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionTexCoordStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionTexCoordStream>()
{
	return FRuntimeMeshCollisionTexCoordStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionTexCoordStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionTexCoordStream",
		sizeof(FRuntimeMeshCollisionTexCoordStream),
		alignof(FRuntimeMeshCollisionTexCoordStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream;
class UScriptStruct* FRuntimeMeshCollisionMaterialIndexStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionMaterialIndexStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionMaterialIndexStream>()
{
	return FRuntimeMeshCollisionMaterialIndexStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionMaterialIndexStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionMaterialIndexStream",
		sizeof(FRuntimeMeshCollisionMaterialIndexStream),
		alignof(FRuntimeMeshCollisionMaterialIndexStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings;
class UScriptStruct* FRuntimeMeshCollisionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionSettings>()
{
	return FRuntimeMeshCollisionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimple_MetaData[];
#endif
		static void NewProp_bUseComplexAsSimple_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimple;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[];
#endif
		static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CookingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CookingMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexElements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Capsules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Capsules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionSettings*)Obj)->bUseComplexAsSimple = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple = { "bUseComplexAsSimple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshCollisionSettings), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionSettings*)Obj)->bUseAsyncCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshCollisionSettings), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode = { "CookingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, CookingMode), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_MetaData)) }; // 1780715496
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_Inner = { "ConvexElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh, METADATA_PARAMS(nullptr, 0) }; // 152493415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements = { "ConvexElements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, ConvexElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_MetaData)) }; // 152493415
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere, METADATA_PARAMS(nullptr, 0) }; // 2290713253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_MetaData)) }; // 2290713253
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox, METADATA_PARAMS(nullptr, 0) }; // 1964654185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_MetaData)) }; // 1964654185
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_Inner = { "Capsules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule, METADATA_PARAMS(nullptr, 0) }; // 3810911320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules = { "Capsules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, Capsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_MetaData)) }; // 3810911320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionSettings",
		sizeof(FRuntimeMeshCollisionSettings),
		alignof(FRuntimeMeshCollisionSettings),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType;
	static UEnum* ERuntimeMeshCollisionFaceSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshCollisionFaceSourceType"));
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionFaceSourceType>()
	{
		return ERuntimeMeshCollisionFaceSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::Enumerators[] = {
		{ "ERuntimeMeshCollisionFaceSourceType::Collision", (int64)ERuntimeMeshCollisionFaceSourceType::Collision },
		{ "ERuntimeMeshCollisionFaceSourceType::Renderable", (int64)ERuntimeMeshCollisionFaceSourceType::Renderable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collision.Comment", "/* Collision face was created by a collision specific source */" },
		{ "Collision.DisplayName", "Collision" },
		{ "Collision.Name", "ERuntimeMeshCollisionFaceSourceType::Collision" },
		{ "Collision.ToolTip", "Collision face was created by a collision specific source" },
		{ "Comment", "/* Source of a mesh face, whether it was collision or rendering */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "Renderable.Comment", "/* Collision face was created by a renderable section */" },
		{ "Renderable.DisplayName", "Renderable" },
		{ "Renderable.Name", "ERuntimeMeshCollisionFaceSourceType::Renderable" },
		{ "Renderable.ToolTip", "Collision face was created by a renderable section" },
		{ "ToolTip", "Source of a mesh face, whether it was collision or rendering" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		"ERuntimeMeshCollisionFaceSourceType",
		"ERuntimeMeshCollisionFaceSourceType",
		Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType.InnerSingleton, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo;
class UScriptStruct* FRuntimeMeshCollisionSourceSectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSourceSectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionSourceSectionInfo>()
{
	return FRuntimeMeshCollisionSourceSectionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceProvider_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSourceSectionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, StartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, EndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider = { "SourceProvider", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, SourceProvider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, SectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, SourceType), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_MetaData)) }; // 1355567256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionSourceSectionInfo",
		sizeof(FRuntimeMeshCollisionSourceSectionInfo),
		alignof(FRuntimeMeshCollisionSourceSectionInfo),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo;
class UScriptStruct* FRuntimeMeshCollisionHitInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionHitInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionHitInfo>()
{
	return FRuntimeMeshCollisionHitInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceProvider_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceProvider;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionHitInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider = { "SourceProvider", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, SourceProvider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, SourceType), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_MetaData)) }; // 1355567256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, SectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, FaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionHitInfo",
		sizeof(FRuntimeMeshCollisionHitInfo),
		alignof(FRuntimeMeshCollisionHitInfo),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData;
class UScriptStruct* FRuntimeMeshCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionData>()
{
	return FRuntimeMeshCollisionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormals_MetaData[];
#endif
		static void NewProp_bFlipNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeformableMesh_MetaData[];
#endif
		static void NewProp_bDeformableMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformableMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFastCook_MetaData[];
#endif
		static void NewProp_bFastCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableActiveEdgePrecompute_MetaData[];
#endif
		static void NewProp_bDisableActiveEdgePrecompute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableActiveEdgePrecompute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionData, Vertices), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices_MetaData)) }; // 3461203405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionData, Triangles), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles_MetaData)) }; // 1219785124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords = { "TexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionData, TexCoords), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords_MetaData)) }; // 2371067157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices = { "MaterialIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionData, MaterialIndices), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices_MetaData)) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_Inner = { "CollisionSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, METADATA_PARAMS(nullptr, 0) }; // 2384311701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources = { "CollisionSources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionData, CollisionSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_MetaData)) }; // 2384311701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bFlipNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals = { "bFlipNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bDeformableMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh = { "bDeformableMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bFastCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook = { "bFastCook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bDisableActiveEdgePrecompute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute = { "bDisableActiveEdgePrecompute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionData",
		sizeof(FRuntimeMeshCollisionData),
		alignof(FRuntimeMeshCollisionData),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData;
class UScriptStruct* FRuntimeMeshAsyncBodySetupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshAsyncBodySetupData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshAsyncBodySetupData>()
{
	return FRuntimeMeshAsyncBodySetupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshAsyncBodySetupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshAsyncBodySetupData, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_Inner = { "CollisionSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, METADATA_PARAMS(nullptr, 0) }; // 2384311701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources = { "CollisionSources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshAsyncBodySetupData, CollisionSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_MetaData)) }; // 2384311701
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshAsyncBodySetupData",
		sizeof(FRuntimeMeshAsyncBodySetupData),
		alignof(FRuntimeMeshAsyncBodySetupData),
		Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData;
class UScriptStruct* FRuntimeMeshRenderableCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshRenderableCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshRenderableCollisionData>()
{
	return FRuntimeMeshRenderableCollisionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshRenderableCollisionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableCollisionData, Vertices), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices_MetaData)) }; // 3461203405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableCollisionData, Triangles), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles_MetaData)) }; // 1219785124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords = { "TexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableCollisionData, TexCoords), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords_MetaData)) }; // 2371067157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshRenderableCollisionData",
		sizeof(FRuntimeMeshRenderableCollisionData),
		alignof(FRuntimeMeshRenderableCollisionData),
		Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics::EnumInfo[] = {
		{ ERuntimeMeshCollisionFaceSourceType_StaticEnum, TEXT("ERuntimeMeshCollisionFaceSourceType"), &Z_Registration_Info_UEnum_ERuntimeMeshCollisionFaceSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1355567256U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics::ScriptStructInfo[] = {
		{ FRuntimeMeshCollisionConvexMesh::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewStructOps, TEXT("RuntimeMeshCollisionConvexMesh"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionConvexMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionConvexMesh), 152493415U) },
		{ FRuntimeMeshCollisionSphere::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewStructOps, TEXT("RuntimeMeshCollisionSphere"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSphere, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionSphere), 2290713253U) },
		{ FRuntimeMeshCollisionBox::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewStructOps, TEXT("RuntimeMeshCollisionBox"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionBox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionBox), 1964654185U) },
		{ FRuntimeMeshCollisionCapsule::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewStructOps, TEXT("RuntimeMeshCollisionCapsule"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionCapsule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionCapsule), 3810911320U) },
		{ FRuntimeMeshCollisionVertexStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::NewStructOps, TEXT("RuntimeMeshCollisionVertexStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionVertexStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionVertexStream), 3461203405U) },
		{ FRuntimeMeshCollisionTriangleStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::NewStructOps, TEXT("RuntimeMeshCollisionTriangleStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTriangleStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionTriangleStream), 1219785124U) },
		{ FRuntimeMeshCollisionTexCoordStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::NewStructOps, TEXT("RuntimeMeshCollisionTexCoordStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionTexCoordStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionTexCoordStream), 2371067157U) },
		{ FRuntimeMeshCollisionMaterialIndexStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::NewStructOps, TEXT("RuntimeMeshCollisionMaterialIndexStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionMaterialIndexStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionMaterialIndexStream), 3578018582U) },
		{ FRuntimeMeshCollisionSettings::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewStructOps, TEXT("RuntimeMeshCollisionSettings"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionSettings), 3364003493U) },
		{ FRuntimeMeshCollisionSourceSectionInfo::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewStructOps, TEXT("RuntimeMeshCollisionSourceSectionInfo"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionSourceSectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionSourceSectionInfo), 2384311701U) },
		{ FRuntimeMeshCollisionHitInfo::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewStructOps, TEXT("RuntimeMeshCollisionHitInfo"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionHitInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionHitInfo), 3367805164U) },
		{ FRuntimeMeshCollisionData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewStructOps, TEXT("RuntimeMeshCollisionData"), &Z_Registration_Info_UScriptStruct_RuntimeMeshCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshCollisionData), 538173297U) },
		{ FRuntimeMeshAsyncBodySetupData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewStructOps, TEXT("RuntimeMeshAsyncBodySetupData"), &Z_Registration_Info_UScriptStruct_RuntimeMeshAsyncBodySetupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshAsyncBodySetupData), 2415854422U) },
		{ FRuntimeMeshRenderableCollisionData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewStructOps, TEXT("RuntimeMeshRenderableCollisionData"), &Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshRenderableCollisionData), 813553429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_1535905102(TEXT("/Script/RuntimeMeshComponent"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshCollision_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
