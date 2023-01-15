// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralTerrainGenerator/Public/PtgProcMeshDataHelper.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePtgProcMeshDataHelper() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgFastNoiseLiteWrapper_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgProcMeshDataHelper();
	PROCEDURALTERRAINGENERATOR_API UClass* Z_Construct_UClass_UPtgProcMeshDataHelper_NoRegister();
	PROCEDURALTERRAINGENERATOR_API UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes();
	PROCEDURALTERRAINGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPtgProcMeshData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	UPackage* Z_Construct_UPackage__Script_ProceduralTerrainGenerator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPtgProcMeshShapes;
	static UEnum* EPtgProcMeshShapes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPtgProcMeshShapes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPtgProcMeshShapes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("EPtgProcMeshShapes"));
		}
		return Z_Registration_Info_UEnum_EPtgProcMeshShapes.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UEnum* StaticEnum<EPtgProcMeshShapes>()
	{
		return EPtgProcMeshShapes_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::Enumerators[] = {
		{ "EPtgProcMeshShapes::Plane", (int64)EPtgProcMeshShapes::Plane },
		{ "EPtgProcMeshShapes::Cube", (int64)EPtgProcMeshShapes::Cube },
		{ "EPtgProcMeshShapes::Sphere", (int64)EPtgProcMeshShapes::Sphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Possible shapes for the procedural mesh.\n*/" },
		{ "Cube.DisplayName", "Cube" },
		{ "Cube.Name", "EPtgProcMeshShapes::Cube" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
		{ "Plane.DisplayName", "Plane" },
		{ "Plane.Name", "EPtgProcMeshShapes::Plane" },
		{ "Sphere.DisplayName", "Sphere" },
		{ "Sphere.Name", "EPtgProcMeshShapes::Sphere" },
		{ "ToolTip", "Possible shapes for the procedural mesh." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		"EPtgProcMeshShapes",
		"EPtgProcMeshShapes",
		Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes()
	{
		if (!Z_Registration_Info_UEnum_EPtgProcMeshShapes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPtgProcMeshShapes.InnerSingleton, Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPtgProcMeshShapes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PtgProcMeshData;
class UScriptStruct* FPtgProcMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PtgProcMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PtgProcMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPtgProcMeshData, Z_Construct_UPackage__Script_ProceduralTerrainGenerator(), TEXT("PtgProcMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_PtgProcMeshData.OuterSingleton;
}
template<> PROCEDURALTERRAINGENERATOR_API UScriptStruct* StaticStruct<FPtgProcMeshData>()
{
	return FPtgProcMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPtgProcMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CubeVertexFaceAssetRotation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeVertexFaceAssetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CubeVertexFaceAssetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Properties that define a tile when a procedural mesh is used.\n*/" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
		{ "ToolTip", "Properties that define a tile when a procedural mesh is used." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPtgProcMeshData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, SectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_SectionIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 4146801855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents_MetaData)) }; // 4146801855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FPtgProcMeshData*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPtgProcMeshData), &Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation_Inner = { "CubeVertexFaceAssetRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation = { "CubeVertexFaceAssetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPtgProcMeshData, CubeVertexFaceAssetRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewProp_CubeVertexFaceAssetRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
		nullptr,
		&NewStructOps,
		"PtgProcMeshData",
		sizeof(FPtgProcMeshData),
		alignof(FPtgProcMeshData),
		Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPtgProcMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_PtgProcMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PtgProcMeshData.InnerSingleton, Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PtgProcMeshData.InnerSingleton;
	}
	DEFINE_FUNCTION(UPtgProcMeshDataHelper::execGenerateProcMeshData)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_lowestGeneratedHeight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_highestGeneratedHeight);
		P_GET_ENUM(EPtgProcMeshShapes,Z_Param_procMeshShape);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_resolution);
		P_GET_UBOOL(Z_Param_bUseTerrainTiling);
		P_GET_OBJECT(UPtgFastNoiseLiteWrapper,Z_Param_fastNoiseLiteWrapper);
		P_GET_PROPERTY(FFloatProperty,Z_Param_noiseInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_noiseOutput);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_actorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPtgProcMeshData*)Z_Param__Result=UPtgProcMeshDataHelper::GenerateProcMeshData(Z_Param_Out_lowestGeneratedHeight,Z_Param_Out_highestGeneratedHeight,EPtgProcMeshShapes(Z_Param_procMeshShape),Z_Param_radius,Z_Param_resolution,Z_Param_bUseTerrainTiling,Z_Param_fastNoiseLiteWrapper,Z_Param_noiseInput,Z_Param_noiseOutput,Z_Param_Out_actorLocation);
		P_NATIVE_END;
	}
	void UPtgProcMeshDataHelper::StaticRegisterNativesUPtgProcMeshDataHelper()
	{
		UClass* Class = UPtgProcMeshDataHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateProcMeshData", &UPtgProcMeshDataHelper::execGenerateProcMeshData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics
	{
		struct PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms
		{
			float lowestGeneratedHeight;
			float highestGeneratedHeight;
			EPtgProcMeshShapes procMeshShape;
			float radius;
			int32 resolution;
			bool bUseTerrainTiling;
			UPtgFastNoiseLiteWrapper* fastNoiseLiteWrapper;
			float noiseInput;
			float noiseOutput;
			FVector actorLocation;
			FPtgProcMeshData ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lowestGeneratedHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_highestGeneratedHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_procMeshShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_procMeshShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_procMeshShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTerrainTiling_MetaData[];
#endif
		static void NewProp_bUseTerrainTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTerrainTiling;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fastNoiseLiteWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noiseInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_noiseInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noiseOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_noiseOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_actorLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_lowestGeneratedHeight = { "lowestGeneratedHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, lowestGeneratedHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_highestGeneratedHeight = { "highestGeneratedHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, highestGeneratedHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape = { "procMeshShape", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, procMeshShape), Z_Construct_UEnum_ProceduralTerrainGenerator_EPtgProcMeshShapes, METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape_MetaData)) }; // 3724957555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, radius), METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_resolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, resolution), METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling_SetBit(void* Obj)
	{
		((PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms*)Obj)->bUseTerrainTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling = { "bUseTerrainTiling", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms), &Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_fastNoiseLiteWrapper = { "fastNoiseLiteWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, fastNoiseLiteWrapper), Z_Construct_UClass_UPtgFastNoiseLiteWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseInput = { "noiseInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, noiseInput), METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseOutput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseOutput = { "noiseOutput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, noiseOutput), METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_actorLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_actorLocation = { "actorLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, actorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_actorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_actorLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms, ReturnValue), Z_Construct_UScriptStruct_FPtgProcMeshData, METADATA_PARAMS(nullptr, 0) }; // 197982339
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_lowestGeneratedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_highestGeneratedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_procMeshShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_bUseTerrainTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_fastNoiseLiteWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_noiseOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_actorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PTG Procedural Mesh Data Helper" },
		{ "Comment", "/**\n\x09* Generates data for procedural mesh component with the specified shape. Noise could be applied if specified.\n\x09*\n\x09* @param procMeshShape\x09\x09\x09\x09\x09- Shape of the procedural mesh that will be created.\n\x09* @param radius\x09\x09\x09\x09\x09\x09\x09- Radius of the generated mesh.\n\x09* @param resolution\x09\x09\x09\x09\x09\x09- Number of subdivisions the algorithm will generate on x and y axis.\n\x09* @param useTerrainTiling\x09\x09\x09\x09- If true, it will add an offset to the noise based on actor location, so the terrain will tile with other generated terrains. Only available on plane terrain shape.\n\x09* @param fastNoiseLiteWrapper\x09\x09\x09- Fast Noise Lite wrapper that should be specified if noise will be applied.\n\x09* @param noiseInput\x09\x09\x09\x09\x09\x09- Making this smaller will \"stretch\" the noise terrain, if Fast Noise Lite wrapper is specified.\n\x09* @param noiseOutput\x09\x09\x09\x09\x09- Making this bigger will scale the terrain's height, if Fast Noise Lite wrapper is specified.\n\x09* @param actorLocation\x09\x09\x09\x09\x09- Terrain actor location, used only for terrain tiling on plane terrains if use terrain tiling is true.\n\x09*\n\x09* @param [out] lowestGeneratedHeight\x09- Lowest generated vertex height.\n\x09* @param [out] highestGeneratedHeight\x09- Highest generated vertex height.\n\x09* @return Procedural mesh data structure (vertices, triangles, normals, etc.).\n\x09*/" },
		{ "CPP_Default_actorLocation", "" },
		{ "CPP_Default_bUseTerrainTiling", "false" },
		{ "CPP_Default_fastNoiseLiteWrapper", "None" },
		{ "CPP_Default_noiseInput", "1.000000" },
		{ "CPP_Default_noiseOutput", "1000.000000" },
		{ "CPP_Default_procMeshShape", "Plane" },
		{ "CPP_Default_radius", "15000.000000" },
		{ "CPP_Default_resolution", "150" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
		{ "ToolTip", "Generates data for procedural mesh component with the specified shape. Noise could be applied if specified.\n\n@param procMeshShape                                  - Shape of the procedural mesh that will be created.\n@param radius                                                 - Radius of the generated mesh.\n@param resolution                                             - Number of subdivisions the algorithm will generate on x and y axis.\n@param useTerrainTiling                               - If true, it will add an offset to the noise based on actor location, so the terrain will tile with other generated terrains. Only available on plane terrain shape.\n@param fastNoiseLiteWrapper                   - Fast Noise Lite wrapper that should be specified if noise will be applied.\n@param noiseInput                                             - Making this smaller will \"stretch\" the noise terrain, if Fast Noise Lite wrapper is specified.\n@param noiseOutput                                    - Making this bigger will scale the terrain's height, if Fast Noise Lite wrapper is specified.\n@param actorLocation                                  - Terrain actor location, used only for terrain tiling on plane terrains if use terrain tiling is true.\n\n@param [out] lowestGeneratedHeight    - Lowest generated vertex height.\n@param [out] highestGeneratedHeight   - Highest generated vertex height.\n@return Procedural mesh data structure (vertices, triangles, normals, etc.)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPtgProcMeshDataHelper, nullptr, "GenerateProcMeshData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::PtgProcMeshDataHelper_eventGenerateProcMeshData_Parms), Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPtgProcMeshDataHelper);
	UClass* Z_Construct_UClass_UPtgProcMeshDataHelper_NoRegister()
	{
		return UPtgProcMeshDataHelper::StaticClass();
	}
	struct Z_Construct_UClass_UPtgProcMeshDataHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralTerrainGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPtgProcMeshDataHelper_GenerateProcMeshData, "GenerateProcMeshData" }, // 3608874259
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class creates the needed procedural mesh data to create a plane, cube or sphere with noise, if specified.\n * It is also exposed to blueprints.\n */" },
		{ "IncludePath", "PtgProcMeshDataHelper.h" },
		{ "ModuleRelativePath", "Public/PtgProcMeshDataHelper.h" },
		{ "ToolTip", "This class creates the needed procedural mesh data to create a plane, cube or sphere with noise, if specified.\nIt is also exposed to blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPtgProcMeshDataHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::ClassParams = {
		&UPtgProcMeshDataHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPtgProcMeshDataHelper()
	{
		if (!Z_Registration_Info_UClass_UPtgProcMeshDataHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPtgProcMeshDataHelper.OuterSingleton, Z_Construct_UClass_UPtgProcMeshDataHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPtgProcMeshDataHelper.OuterSingleton;
	}
	template<> PROCEDURALTERRAINGENERATOR_API UClass* StaticClass<UPtgProcMeshDataHelper>()
	{
		return UPtgProcMeshDataHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPtgProcMeshDataHelper);
	UPtgProcMeshDataHelper::~UPtgProcMeshDataHelper() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::EnumInfo[] = {
		{ EPtgProcMeshShapes_StaticEnum, TEXT("EPtgProcMeshShapes"), &Z_Registration_Info_UEnum_EPtgProcMeshShapes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3724957555U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::ScriptStructInfo[] = {
		{ FPtgProcMeshData::StaticStruct, Z_Construct_UScriptStruct_FPtgProcMeshData_Statics::NewStructOps, TEXT("PtgProcMeshData"), &Z_Registration_Info_UScriptStruct_PtgProcMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPtgProcMeshData), 197982339U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPtgProcMeshDataHelper, UPtgProcMeshDataHelper::StaticClass, TEXT("UPtgProcMeshDataHelper"), &Z_Registration_Info_UClass_UPtgProcMeshDataHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPtgProcMeshDataHelper), 1411702611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_2132079091(TEXT("/Script/ProceduralTerrainGenerator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ProceduralTerrainGenerator_Public_PtgProcMeshDataHelper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
