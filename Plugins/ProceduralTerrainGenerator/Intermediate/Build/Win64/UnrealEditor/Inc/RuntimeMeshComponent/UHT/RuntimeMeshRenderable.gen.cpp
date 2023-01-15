// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshRenderable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream;
class UScriptStruct* FRuntimeMeshVertexPositionStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexPositionStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexPositionStream>()
{
	return FRuntimeMeshVertexPositionStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexPositionStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexPositionStream",
		sizeof(FRuntimeMeshVertexPositionStream),
		alignof(FRuntimeMeshVertexPositionStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream;
class UScriptStruct* FRuntimeMeshVertexTangentStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexTangentStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexTangentStream>()
{
	return FRuntimeMeshVertexTangentStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexTangentStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexTangentStream",
		sizeof(FRuntimeMeshVertexTangentStream),
		alignof(FRuntimeMeshVertexTangentStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream;
class UScriptStruct* FRuntimeMeshVertexTexCoordStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexTexCoordStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexTexCoordStream>()
{
	return FRuntimeMeshVertexTexCoordStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexTexCoordStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexTexCoordStream",
		sizeof(FRuntimeMeshVertexTexCoordStream),
		alignof(FRuntimeMeshVertexTexCoordStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream;
class UScriptStruct* FRuntimeMeshVertexColorStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexColorStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexColorStream>()
{
	return FRuntimeMeshVertexColorStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexColorStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexColorStream",
		sizeof(FRuntimeMeshVertexColorStream),
		alignof(FRuntimeMeshVertexColorStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream;
class UScriptStruct* FRuntimeMeshTriangleStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshTriangleStream"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshTriangleStream>()
{
	return FRuntimeMeshTriangleStream::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshTriangleStream>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshTriangleStream",
		sizeof(FRuntimeMeshTriangleStream),
		alignof(FRuntimeMeshTriangleStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties;
class UScriptStruct* FRuntimeMeshSectionProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshSectionProperties"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshSectionProperties>()
{
	return FRuntimeMeshSectionProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateFrequency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMainPassRenderable_MetaData[];
#endif
		static void NewProp_bIsMainPassRenderable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPassRenderable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastsShadow_MetaData[];
#endif
		static void NewProp_bCastsShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastsShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[];
#endif
		static void NewProp_bForceOpaque_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangents_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTexCoords_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTexCoords_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTexCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTexCoords_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumTexCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWants32BitIndices_MetaData[];
#endif
		static void NewProp_bWants32BitIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWants32BitIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshSectionProperties>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshSectionProperties, UpdateFrequency), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_MetaData)) }; // 1982090825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshSectionProperties, MaterialSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bIsMainPassRenderable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable = { "bIsMainPassRenderable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bCastsShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow = { "bCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bForceOpaque = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bUseHighPrecisionTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents = { "bUseHighPrecisionTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bUseHighPrecisionTexCoords = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords = { "bUseHighPrecisionTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords = { "NumTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshSectionProperties, NumTexCoords), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bWants32BitIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices = { "bWants32BitIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshSectionProperties",
		sizeof(FRuntimeMeshSectionProperties),
		alignof(FRuntimeMeshSectionProperties),
		Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties;
class UScriptStruct* FRuntimeMeshLODProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshLODProperties"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshLODProperties>()
{
	return FRuntimeMeshLODProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanGetSectionsIndependently_MetaData[];
#endif
		static void NewProp_bCanGetSectionsIndependently_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGetSectionsIndependently;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanGetAllSectionsAtOnce_MetaData[];
#endif
		static void NewProp_bCanGetAllSectionsAtOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGetAllSectionsAtOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMergeStaticSectionBuffers_MetaData[];
#endif
		static void NewProp_bShouldMergeStaticSectionBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMergeStaticSectionBuffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshLODProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshLODProperties, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_SetBit(void* Obj)
	{
		((FRuntimeMeshLODProperties*)Obj)->bCanGetSectionsIndependently = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently = { "bCanGetSectionsIndependently", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshLODProperties), &Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_SetBit(void* Obj)
	{
		((FRuntimeMeshLODProperties*)Obj)->bCanGetAllSectionsAtOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce = { "bCanGetAllSectionsAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshLODProperties), &Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_SetBit(void* Obj)
	{
		((FRuntimeMeshLODProperties*)Obj)->bShouldMergeStaticSectionBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers = { "bShouldMergeStaticSectionBuffers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRuntimeMeshLODProperties), &Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshLODProperties",
		sizeof(FRuntimeMeshLODProperties),
		alignof(FRuntimeMeshLODProperties),
		Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot;
class UScriptStruct* FRuntimeMeshMaterialSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshMaterialSlot"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshMaterialSlot>()
{
	return FRuntimeMeshMaterialSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshMaterialSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MaterialSlot" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshMaterialSlot, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MaterialSlot" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshMaterialSlot, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshMaterialSlot",
		sizeof(FRuntimeMeshMaterialSlot),
		alignof(FRuntimeMeshMaterialSlot),
		Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData;
class UScriptStruct* FRuntimeMeshRenderableMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshRenderableMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshRenderableMeshData>()
{
	return FRuntimeMeshRenderableMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacencyTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjacencyTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshRenderableMeshData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Positions), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions_MetaData)) }; // 1746571998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Tangents), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents_MetaData)) }; // 425122326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords = { "TexCoords", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, TexCoords), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords_MetaData)) }; // 673251897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Colors), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors_MetaData)) }; // 4073359500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Triangles), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles_MetaData)) }; // 3878568626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles = { "AdjacencyTriangles", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, AdjacencyTriangles), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles_MetaData)) }; // 3878568626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshRenderableMeshData",
		sizeof(FRuntimeMeshRenderableMeshData),
		alignof(FRuntimeMeshRenderableMeshData),
		Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData;
class UScriptStruct* FRuntimeMeshSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshSectionData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData.OuterSingleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshSectionData>()
{
	return FRuntimeMeshSectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshSectionData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshSectionData",
		sizeof(FRuntimeMeshSectionData),
		alignof(FRuntimeMeshSectionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshRenderable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshRenderable_h_Statics::ScriptStructInfo[] = {
		{ FRuntimeMeshVertexPositionStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::NewStructOps, TEXT("RuntimeMeshVertexPositionStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshVertexPositionStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshVertexPositionStream), 1746571998U) },
		{ FRuntimeMeshVertexTangentStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::NewStructOps, TEXT("RuntimeMeshVertexTangentStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTangentStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshVertexTangentStream), 425122326U) },
		{ FRuntimeMeshVertexTexCoordStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::NewStructOps, TEXT("RuntimeMeshVertexTexCoordStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshVertexTexCoordStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshVertexTexCoordStream), 673251897U) },
		{ FRuntimeMeshVertexColorStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::NewStructOps, TEXT("RuntimeMeshVertexColorStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshVertexColorStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshVertexColorStream), 4073359500U) },
		{ FRuntimeMeshTriangleStream::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::NewStructOps, TEXT("RuntimeMeshTriangleStream"), &Z_Registration_Info_UScriptStruct_RuntimeMeshTriangleStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshTriangleStream), 3878568626U) },
		{ FRuntimeMeshSectionProperties::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewStructOps, TEXT("RuntimeMeshSectionProperties"), &Z_Registration_Info_UScriptStruct_RuntimeMeshSectionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshSectionProperties), 2753023655U) },
		{ FRuntimeMeshLODProperties::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewStructOps, TEXT("RuntimeMeshLODProperties"), &Z_Registration_Info_UScriptStruct_RuntimeMeshLODProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshLODProperties), 2708910054U) },
		{ FRuntimeMeshMaterialSlot::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewStructOps, TEXT("RuntimeMeshMaterialSlot"), &Z_Registration_Info_UScriptStruct_RuntimeMeshMaterialSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshMaterialSlot), 2000535622U) },
		{ FRuntimeMeshRenderableMeshData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewStructOps, TEXT("RuntimeMeshRenderableMeshData"), &Z_Registration_Info_UScriptStruct_RuntimeMeshRenderableMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshRenderableMeshData), 3590968504U) },
		{ FRuntimeMeshSectionData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::NewStructOps, TEXT("RuntimeMeshSectionData"), &Z_Registration_Info_UScriptStruct_RuntimeMeshSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeMeshSectionData), 1857621609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshRenderable_h_2085517916(TEXT("/Script/RuntimeMeshComponent"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshRenderable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshRenderable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
