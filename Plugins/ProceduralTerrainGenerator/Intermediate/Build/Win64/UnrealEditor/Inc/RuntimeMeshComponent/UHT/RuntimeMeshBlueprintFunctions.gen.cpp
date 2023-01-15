// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshBlueprintFunctions.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshBlueprintFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshBlueprintFunctions();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshBlueprintFunctions_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionConvex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_Settings);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT(FRuntimeMeshCollisionConvexMesh,Z_Param_NewConvex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionConvex(Z_Param_Out_Settings,Z_Param_Out_OutSettings,Z_Param_NewConvex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionCapsule)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_Settings);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT(FRuntimeMeshCollisionCapsule,Z_Param_NewCapsule);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionCapsule(Z_Param_Out_Settings,Z_Param_Out_OutSettings,Z_Param_NewCapsule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionSphere)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_Settings);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT(FRuntimeMeshCollisionSphere,Z_Param_NewSphere);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionSphere(Z_Param_Out_Settings,Z_Param_Out_OutSettings,Z_Param_NewSphere);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionBox)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_Settings);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT(FRuntimeMeshCollisionBox,Z_Param_NewBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionBox(Z_Param_Out_Settings,Z_Param_Out_OutSettings,Z_Param_NewBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSeCollisionMaterialIndex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SeCollisionMaterialIndex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionMaterialIndex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetCollisionMaterialIndex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionMaterialIndex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionMaterialIndex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewIndex,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyCollisionMaterialIndices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyCollisionMaterialIndices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumCollisionMaterialIndices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumCollisionMaterialIndices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumCollisionMaterialIndices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionMaterialIndexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumCollisionMaterialIndices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetCollisionTexCoord)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector2D,Z_Param_NewTexCoord);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetCollisionTexCoord(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewTexCoord,Z_Param_ChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionTexCoord)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutTexCoord);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetCollisionTexCoord(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutTexCoord,Z_Param_ChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionTexCoord)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_STRUCT(FVector2D,Z_Param_InTexCoord);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionTexCoord(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_InTexCoord,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyCollisionTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyCollisionTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumCollisionTexCoordChannels)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTexCoordChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumCollisionTexCoordChannels(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumTexCoordChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumCollisionTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTexCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumCollisionTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_ChannelId,Z_Param_Out_OutNumTexCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumCollisionTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNumChannels);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNumTexCoords);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumCollisionTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNumChannels,Z_Param_NewNumTexCoords,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionTriangle)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndexA);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndexB);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndexC);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetCollisionTriangle(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutIndexA,Z_Param_Out_OutIndexB,Z_Param_Out_OutIndexC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionTriangle)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndexA);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndexB);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndexC);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTriangleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionTriangle(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewIndexA,Z_Param_NewIndexB,Z_Param_NewIndexC,Z_Param_Out_OutTriangleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyCollisionTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyCollisionTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumCollisionTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumCollisionTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumCollisionTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumCollisionTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetCollisionVertex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_NewVertex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetCollisionVertex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewVertex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionVertex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVertex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetCollisionVertex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutVertex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddCollisionVertex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_OutStream);
		P_GET_STRUCT(FVector,Z_Param_InVertex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddCollisionVertex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_InVertex,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyCollisionVertices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyCollisionVertices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumCollisionVertices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumCollisionVertices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumCollisionVertices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionVertexStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumCollisionVertices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionMaterialIndexStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_CollisionData);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_OutCollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionMaterialIndexStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetCollisionMaterialIndexStream(Z_Param_Out_CollisionData,Z_Param_Out_OutCollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionTexCoordStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_CollisionData);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_OutCollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionTexCoordStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetCollisionTexCoordStream(Z_Param_Out_CollisionData,Z_Param_Out_OutCollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionTriangleStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_CollisionData);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_OutCollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionTriangleStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetCollisionTriangleStream(Z_Param_Out_CollisionData,Z_Param_Out_OutCollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetCollisionVertexStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_CollisionData);
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_OutCollisionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionVertexStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetCollisionVertexStream(Z_Param_Out_CollisionData,Z_Param_Out_OutCollisionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetVertexIndex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetVertexIndex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetVertexIndex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetVertexIndex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAppendTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AppendTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddTriangle)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndexA);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndexB);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndexC);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddTriangle(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewIndexA,Z_Param_NewIndexB,Z_Param_NewIndexC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddIndex)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddIndex(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewIndex,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumIndices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumIndices(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumTriangles)
	{
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshTriangleStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumTriangles(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetColor)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetColor(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetColor)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetColor(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAppendColors)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AppendColors(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddColor)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddColor(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_InColor,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyColors)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyColors(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumColors)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumColors(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumColors)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexColorStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumColors(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetTexCoord)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector2D,Z_Param_NewTexCoord);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetTexCoord(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewTexCoord,Z_Param_ChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetTexCoord)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutTexCoord);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetTexCoord(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_ChannelId,Z_Param_Out_OutTexCoord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAppendTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AppendTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddTexCoord)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_GET_STRUCT(FVector2D,Z_Param_InTexCoord);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddTexCoord(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutIndex,Z_Param_InTexCoord,Z_Param_ChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumTexCoordChannels)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTexCoordChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumTexCoordChannels(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumTexCoordChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTexCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumTexCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumTexCoords)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTexCoordStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumTexCoords(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_InTangentX);
		P_GET_STRUCT(FVector,Z_Param_InTangentY);
		P_GET_STRUCT(FVector,Z_Param_InTangentZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_InTangentX,Z_Param_InTangentY,Z_Param_InTangentZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentX);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentY);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutTangentX,Z_Param_Out_OutTangentY,Z_Param_Out_OutTangentZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetTangent)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_NewTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetTangent(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetTangent)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetTangent(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNormal)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_NewNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNormal(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetNormal)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetNormal(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAppendTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AppendTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_STRUCT(FVector,Z_Param_InTangentX);
		P_GET_STRUCT(FVector,Z_Param_InTangentY);
		P_GET_STRUCT(FVector,Z_Param_InTangentZ);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_InTangentX,Z_Param_InTangentY,Z_Param_InTangentZ,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddNormalAndTangent)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_STRUCT(FVector,Z_Param_InNormal);
		P_GET_STRUCT(FVector,Z_Param_InTangent);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddNormalAndTangent(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_InNormal,Z_Param_InTangent,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumTangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumTangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexTangentStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumTangents(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetBounds)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_OutBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetBounds(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetPosition)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetPosition(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetPosition)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::GetPosition(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Index,Z_Param_Out_OutPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAppendPositions)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AppendPositions(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execAddPosition)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_STRUCT(FVector,Z_Param_InPosition);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::AddPosition(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_InPosition,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execEmptyPositions)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slack);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::EmptyPositions(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Slack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execNumPositions)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::NumPositions(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_Out_OutNumPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execSetNumPositions)
	{
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FRuntimeMeshVertexPositionStream,Z_Param_Out_OutStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
		P_GET_UBOOL(Z_Param_bAllowShrinking);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshBlueprintFunctions::SetNumPositions(Z_Param_Out_Stream,Z_Param_Out_OutStream,Z_Param_NewNum,Z_Param_bAllowShrinking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetAdjacencyTriangleStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshTriangleStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetAdjacencyTriangleStream(Z_Param_Out_MeshData,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetTriangleStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshTriangleStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetTriangleStream(Z_Param_Out_MeshData,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetColorStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshVertexColorStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetColorStream(Z_Param_Out_MeshData,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetTexCoordStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshVertexTexCoordStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetTexCoordStream(Z_Param_Out_MeshData,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetTangentStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshVertexTangentStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetTangentStream(Z_Param_Out_MeshData,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execGetPositionStream)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_OutMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshVertexPositionStream*)Z_Param__Result=URuntimeMeshBlueprintFunctions::GetPositionStream(Z_Param_Out_MeshData,Z_Param_Out_OutMeshData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshBlueprintFunctions::execCreateRenderableMeshData)
	{
		P_GET_UBOOL(Z_Param_bWantsHighPrecisionTangents);
		P_GET_UBOOL(Z_Param_bWantsHighPrecisionTexCoords);
		P_GET_PROPERTY(FByteProperty,Z_Param_NumTexCoords);
		P_GET_UBOOL(Z_Param_bWants32BitIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshRenderableMeshData*)Z_Param__Result=URuntimeMeshBlueprintFunctions::CreateRenderableMeshData(Z_Param_bWantsHighPrecisionTangents,Z_Param_bWantsHighPrecisionTexCoords,Z_Param_NumTexCoords,Z_Param_bWants32BitIndices);
		P_NATIVE_END;
	}
	void URuntimeMeshBlueprintFunctions::StaticRegisterNativesURuntimeMeshBlueprintFunctions()
	{
		UClass* Class = URuntimeMeshBlueprintFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionBox", &URuntimeMeshBlueprintFunctions::execAddCollisionBox },
			{ "AddCollisionCapsule", &URuntimeMeshBlueprintFunctions::execAddCollisionCapsule },
			{ "AddCollisionConvex", &URuntimeMeshBlueprintFunctions::execAddCollisionConvex },
			{ "AddCollisionMaterialIndex", &URuntimeMeshBlueprintFunctions::execAddCollisionMaterialIndex },
			{ "AddCollisionSphere", &URuntimeMeshBlueprintFunctions::execAddCollisionSphere },
			{ "AddCollisionTexCoord", &URuntimeMeshBlueprintFunctions::execAddCollisionTexCoord },
			{ "AddCollisionTriangle", &URuntimeMeshBlueprintFunctions::execAddCollisionTriangle },
			{ "AddCollisionVertex", &URuntimeMeshBlueprintFunctions::execAddCollisionVertex },
			{ "AddColor", &URuntimeMeshBlueprintFunctions::execAddColor },
			{ "AddIndex", &URuntimeMeshBlueprintFunctions::execAddIndex },
			{ "AddNormalAndTangent", &URuntimeMeshBlueprintFunctions::execAddNormalAndTangent },
			{ "AddPosition", &URuntimeMeshBlueprintFunctions::execAddPosition },
			{ "AddTangents", &URuntimeMeshBlueprintFunctions::execAddTangents },
			{ "AddTexCoord", &URuntimeMeshBlueprintFunctions::execAddTexCoord },
			{ "AddTriangle", &URuntimeMeshBlueprintFunctions::execAddTriangle },
			{ "AppendColors", &URuntimeMeshBlueprintFunctions::execAppendColors },
			{ "AppendPositions", &URuntimeMeshBlueprintFunctions::execAppendPositions },
			{ "AppendTangents", &URuntimeMeshBlueprintFunctions::execAppendTangents },
			{ "AppendTexCoords", &URuntimeMeshBlueprintFunctions::execAppendTexCoords },
			{ "AppendTriangles", &URuntimeMeshBlueprintFunctions::execAppendTriangles },
			{ "CreateRenderableMeshData", &URuntimeMeshBlueprintFunctions::execCreateRenderableMeshData },
			{ "EmptyCollisionMaterialIndices", &URuntimeMeshBlueprintFunctions::execEmptyCollisionMaterialIndices },
			{ "EmptyCollisionTexCoords", &URuntimeMeshBlueprintFunctions::execEmptyCollisionTexCoords },
			{ "EmptyCollisionTriangles", &URuntimeMeshBlueprintFunctions::execEmptyCollisionTriangles },
			{ "EmptyCollisionVertices", &URuntimeMeshBlueprintFunctions::execEmptyCollisionVertices },
			{ "EmptyColors", &URuntimeMeshBlueprintFunctions::execEmptyColors },
			{ "EmptyPositions", &URuntimeMeshBlueprintFunctions::execEmptyPositions },
			{ "EmptyTangents", &URuntimeMeshBlueprintFunctions::execEmptyTangents },
			{ "EmptyTexCoords", &URuntimeMeshBlueprintFunctions::execEmptyTexCoords },
			{ "EmptyTriangles", &URuntimeMeshBlueprintFunctions::execEmptyTriangles },
			{ "GetAdjacencyTriangleStream", &URuntimeMeshBlueprintFunctions::execGetAdjacencyTriangleStream },
			{ "GetBounds", &URuntimeMeshBlueprintFunctions::execGetBounds },
			{ "GetCollisionMaterialIndex", &URuntimeMeshBlueprintFunctions::execGetCollisionMaterialIndex },
			{ "GetCollisionMaterialIndexStream", &URuntimeMeshBlueprintFunctions::execGetCollisionMaterialIndexStream },
			{ "GetCollisionTexCoord", &URuntimeMeshBlueprintFunctions::execGetCollisionTexCoord },
			{ "GetCollisionTexCoordStream", &URuntimeMeshBlueprintFunctions::execGetCollisionTexCoordStream },
			{ "GetCollisionTriangle", &URuntimeMeshBlueprintFunctions::execGetCollisionTriangle },
			{ "GetCollisionTriangleStream", &URuntimeMeshBlueprintFunctions::execGetCollisionTriangleStream },
			{ "GetCollisionVertex", &URuntimeMeshBlueprintFunctions::execGetCollisionVertex },
			{ "GetCollisionVertexStream", &URuntimeMeshBlueprintFunctions::execGetCollisionVertexStream },
			{ "GetColor", &URuntimeMeshBlueprintFunctions::execGetColor },
			{ "GetColorStream", &URuntimeMeshBlueprintFunctions::execGetColorStream },
			{ "GetNormal", &URuntimeMeshBlueprintFunctions::execGetNormal },
			{ "GetPosition", &URuntimeMeshBlueprintFunctions::execGetPosition },
			{ "GetPositionStream", &URuntimeMeshBlueprintFunctions::execGetPositionStream },
			{ "GetTangent", &URuntimeMeshBlueprintFunctions::execGetTangent },
			{ "GetTangents", &URuntimeMeshBlueprintFunctions::execGetTangents },
			{ "GetTangentStream", &URuntimeMeshBlueprintFunctions::execGetTangentStream },
			{ "GetTexCoord", &URuntimeMeshBlueprintFunctions::execGetTexCoord },
			{ "GetTexCoordStream", &URuntimeMeshBlueprintFunctions::execGetTexCoordStream },
			{ "GetTriangleStream", &URuntimeMeshBlueprintFunctions::execGetTriangleStream },
			{ "GetVertexIndex", &URuntimeMeshBlueprintFunctions::execGetVertexIndex },
			{ "NumCollisionMaterialIndices", &URuntimeMeshBlueprintFunctions::execNumCollisionMaterialIndices },
			{ "NumCollisionTexCoordChannels", &URuntimeMeshBlueprintFunctions::execNumCollisionTexCoordChannels },
			{ "NumCollisionTexCoords", &URuntimeMeshBlueprintFunctions::execNumCollisionTexCoords },
			{ "NumCollisionTriangles", &URuntimeMeshBlueprintFunctions::execNumCollisionTriangles },
			{ "NumCollisionVertices", &URuntimeMeshBlueprintFunctions::execNumCollisionVertices },
			{ "NumColors", &URuntimeMeshBlueprintFunctions::execNumColors },
			{ "NumIndices", &URuntimeMeshBlueprintFunctions::execNumIndices },
			{ "NumPositions", &URuntimeMeshBlueprintFunctions::execNumPositions },
			{ "NumTangents", &URuntimeMeshBlueprintFunctions::execNumTangents },
			{ "NumTexCoordChannels", &URuntimeMeshBlueprintFunctions::execNumTexCoordChannels },
			{ "NumTexCoords", &URuntimeMeshBlueprintFunctions::execNumTexCoords },
			{ "NumTriangles", &URuntimeMeshBlueprintFunctions::execNumTriangles },
			{ "SeCollisionMaterialIndex", &URuntimeMeshBlueprintFunctions::execSeCollisionMaterialIndex },
			{ "SetCollisionTexCoord", &URuntimeMeshBlueprintFunctions::execSetCollisionTexCoord },
			{ "SetCollisionVertex", &URuntimeMeshBlueprintFunctions::execSetCollisionVertex },
			{ "SetColor", &URuntimeMeshBlueprintFunctions::execSetColor },
			{ "SetNormal", &URuntimeMeshBlueprintFunctions::execSetNormal },
			{ "SetNumCollisionMaterialIndices", &URuntimeMeshBlueprintFunctions::execSetNumCollisionMaterialIndices },
			{ "SetNumCollisionTexCoords", &URuntimeMeshBlueprintFunctions::execSetNumCollisionTexCoords },
			{ "SetNumCollisionTriangles", &URuntimeMeshBlueprintFunctions::execSetNumCollisionTriangles },
			{ "SetNumCollisionVertices", &URuntimeMeshBlueprintFunctions::execSetNumCollisionVertices },
			{ "SetNumColors", &URuntimeMeshBlueprintFunctions::execSetNumColors },
			{ "SetNumPositions", &URuntimeMeshBlueprintFunctions::execSetNumPositions },
			{ "SetNumTangents", &URuntimeMeshBlueprintFunctions::execSetNumTangents },
			{ "SetNumTexCoords", &URuntimeMeshBlueprintFunctions::execSetNumTexCoords },
			{ "SetNumTriangles", &URuntimeMeshBlueprintFunctions::execSetNumTriangles },
			{ "SetPosition", &URuntimeMeshBlueprintFunctions::execSetPosition },
			{ "SetTangent", &URuntimeMeshBlueprintFunctions::execSetTangent },
			{ "SetTangents", &URuntimeMeshBlueprintFunctions::execSetTangents },
			{ "SetTexCoord", &URuntimeMeshBlueprintFunctions::execSetTexCoord },
			{ "SetVertexIndex", &URuntimeMeshBlueprintFunctions::execSetVertexIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionBox_Parms
		{
			FRuntimeMeshCollisionSettings Settings;
			FRuntimeMeshCollisionSettings OutSettings;
			FRuntimeMeshCollisionBox NewBox;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionBox_Parms, Settings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionBox_Parms, OutSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::NewProp_NewBox = { "NewBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionBox_Parms, NewBox), Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox, METADATA_PARAMS(nullptr, 0) }; // 1964654185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::NewProp_NewBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Simple" },
		{ "Comment", "// Collision Settings\n" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Collision Settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionBox_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionCapsule_Parms
		{
			FRuntimeMeshCollisionSettings Settings;
			FRuntimeMeshCollisionSettings OutSettings;
			FRuntimeMeshCollisionCapsule NewCapsule;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCapsule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionCapsule_Parms, Settings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionCapsule_Parms, OutSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::NewProp_NewCapsule = { "NewCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionCapsule_Parms, NewCapsule), Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule, METADATA_PARAMS(nullptr, 0) }; // 3810911320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::NewProp_NewCapsule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Simple" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionCapsule", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionCapsule_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionConvex_Parms
		{
			FRuntimeMeshCollisionSettings Settings;
			FRuntimeMeshCollisionSettings OutSettings;
			FRuntimeMeshCollisionConvexMesh NewConvex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewConvex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionConvex_Parms, Settings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionConvex_Parms, OutSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::NewProp_NewConvex = { "NewConvex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionConvex_Parms, NewConvex), Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh, METADATA_PARAMS(nullptr, 0) }; // 152493415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::NewProp_NewConvex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Simple" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionConvex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionConvex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionMaterialIndex_Parms
		{
			FRuntimeMeshCollisionMaterialIndexStream Stream;
			FRuntimeMeshCollisionMaterialIndexStream OutStream;
			int32 NewIndex;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionMaterialIndex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionMaterialIndex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionMaterialIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionMaterialIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_NewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|MaterialIndices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionMaterialIndex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionSphere_Parms
		{
			FRuntimeMeshCollisionSettings Settings;
			FRuntimeMeshCollisionSettings OutSettings;
			FRuntimeMeshCollisionSphere NewSphere;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSphere;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionSphere_Parms, Settings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionSphere_Parms, OutSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) }; // 3364003493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::NewProp_NewSphere = { "NewSphere", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionSphere_Parms, NewSphere), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere, METADATA_PARAMS(nullptr, 0) }; // 2290713253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::NewProp_NewSphere,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Simple" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionSphere_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionTexCoord_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			FVector2D InTexCoord;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTexCoord;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTexCoord_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTexCoord_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_InTexCoord = { "InTexCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTexCoord_Parms, InTexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTexCoord_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_InTexCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionTexCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionTexCoord_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms
		{
			FRuntimeMeshCollisionTriangleStream Stream;
			FRuntimeMeshCollisionTriangleStream OutStream;
			int32 NewIndexA;
			int32 NewIndexB;
			int32 NewIndexC;
			int32 OutTriangleIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndexA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndexB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndexC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutTriangleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_NewIndexA = { "NewIndexA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms, NewIndexA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_NewIndexB = { "NewIndexB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms, NewIndexB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_NewIndexC = { "NewIndexC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms, NewIndexC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_OutTriangleIndex = { "OutTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms, OutTriangleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_NewIndexA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_NewIndexB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_NewIndexC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::NewProp_OutTriangleIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionTriangle_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddCollisionVertex_Parms
		{
			FRuntimeMeshCollisionVertexStream Stream;
			FRuntimeMeshCollisionVertexStream OutStream;
			FVector InVertex;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVertex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionVertex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionVertex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_InVertex = { "InVertex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionVertex_Parms, InVertex), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddCollisionVertex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_InVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Vertices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddCollisionVertex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::RuntimeMeshBlueprintFunctions_eventAddCollisionVertex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddColor_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			FLinearColor InColor;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddColor_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddColor_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddColor_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_InColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::RuntimeMeshBlueprintFunctions_eventAddColor_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddIndex_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 NewIndex;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddIndex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddIndex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_NewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::RuntimeMeshBlueprintFunctions_eventAddIndex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			FVector InNormal;
			FVector InTangent;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_InNormal = { "InNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms, InNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_InTangent = { "InTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms, InTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_InNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_InTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddNormalAndTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::RuntimeMeshBlueprintFunctions_eventAddNormalAndTangent_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddPosition_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			FVector InPosition;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddPosition_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddPosition_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddPosition_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::RuntimeMeshBlueprintFunctions_eventAddPosition_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			FVector InTangentX;
			FVector InTangentY;
			FVector InTangentZ;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangentX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangentY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangentZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_InTangentX = { "InTangentX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTangents_Parms, InTangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_InTangentY = { "InTangentY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTangents_Parms, InTangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_InTangentZ = { "InTangentZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTangents_Parms, InTangentZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTangents_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_InTangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_InTangentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_InTangentZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::RuntimeMeshBlueprintFunctions_eventAddTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 OutIndex;
			FVector2D InTexCoord;
			int32 ChannelId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTexCoord;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_InTexCoord = { "InTexCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms, InTexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_InTexCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::NewProp_ChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "CPP_Default_ChannelId", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddTexCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::RuntimeMeshBlueprintFunctions_eventAddTexCoord_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 NewIndexA;
			int32 NewIndexB;
			int32 NewIndexC;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndexA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndexB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndexC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_NewIndexA = { "NewIndexA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms, NewIndexA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_NewIndexB = { "NewIndexB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms, NewIndexB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_NewIndexC = { "NewIndexC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms, NewIndexC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_NewIndexA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_NewIndexB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::NewProp_NewIndexC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AddTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::RuntimeMeshBlueprintFunctions_eventAddTriangle_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAppendColors_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			FRuntimeMeshVertexColorStream InOther;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendColors_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendColors_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendColors_Parms, InOther), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_InOther_MetaData)) }; // 4073359500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AppendColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::RuntimeMeshBlueprintFunctions_eventAppendColors_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAppendPositions_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			FRuntimeMeshVertexPositionStream InOther;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendPositions_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendPositions_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendPositions_Parms, InOther), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_InOther_MetaData)) }; // 1746571998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AppendPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::RuntimeMeshBlueprintFunctions_eventAppendPositions_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAppendTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			FRuntimeMeshVertexTangentStream InOther;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTangents_Parms, InOther), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_InOther_MetaData)) }; // 425122326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AppendTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::RuntimeMeshBlueprintFunctions_eventAppendTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAppendTexCoords_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			FRuntimeMeshVertexTexCoordStream InOther;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTexCoords_Parms, InOther), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_InOther_MetaData)) }; // 673251897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AppendTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventAppendTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventAppendTriangles_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			FRuntimeMeshTriangleStream InOther;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventAppendTriangles_Parms, InOther), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_InOther_MetaData)) }; // 3878568626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "AppendTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::RuntimeMeshBlueprintFunctions_eventAppendTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms
		{
			bool bWantsHighPrecisionTangents;
			bool bWantsHighPrecisionTexCoords;
			uint8 NumTexCoords;
			bool bWants32BitIndices;
			FRuntimeMeshRenderableMeshData ReturnValue;
		};
		static void NewProp_bWantsHighPrecisionTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsHighPrecisionTangents;
		static void NewProp_bWantsHighPrecisionTexCoords_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsHighPrecisionTexCoords;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumTexCoords;
		static void NewProp_bWants32BitIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWants32BitIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTangents_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms*)Obj)->bWantsHighPrecisionTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTangents = { "bWantsHighPrecisionTangents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTangents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTexCoords_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms*)Obj)->bWantsHighPrecisionTexCoords = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTexCoords = { "bWantsHighPrecisionTexCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTexCoords_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_NumTexCoords = { "NumTexCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms, NumTexCoords), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWants32BitIndices_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms*)Obj)->bWants32BitIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWants32BitIndices = { "bWants32BitIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWants32BitIndices_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWantsHighPrecisionTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_NumTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_bWants32BitIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "CPP_Default_bWants32BitIndices", "false" },
		{ "CPP_Default_bWantsHighPrecisionTangents", "false" },
		{ "CPP_Default_bWantsHighPrecisionTexCoords", "false" },
		{ "CPP_Default_NumTexCoords", "1" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "CreateRenderableMeshData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::RuntimeMeshBlueprintFunctions_eventCreateRenderableMeshData_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyCollisionMaterialIndices_Parms
		{
			FRuntimeMeshCollisionMaterialIndexStream Stream;
			FRuntimeMeshCollisionMaterialIndexStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionMaterialIndices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionMaterialIndices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionMaterialIndices_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|MaterialIndices" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyCollisionMaterialIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::RuntimeMeshBlueprintFunctions_eventEmptyCollisionMaterialIndices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyCollisionTexCoords_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionTexCoords_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyCollisionTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventEmptyCollisionTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyCollisionTriangles_Parms
		{
			FRuntimeMeshCollisionTriangleStream Stream;
			FRuntimeMeshCollisionTriangleStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionTriangles_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Triangles" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyCollisionTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::RuntimeMeshBlueprintFunctions_eventEmptyCollisionTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyCollisionVertices_Parms
		{
			FRuntimeMeshCollisionVertexStream Stream;
			FRuntimeMeshCollisionVertexStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionVertices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionVertices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyCollisionVertices_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Vertices" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyCollisionVertices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::RuntimeMeshBlueprintFunctions_eventEmptyCollisionVertices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyColors_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyColors_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyColors_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyColors_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::RuntimeMeshBlueprintFunctions_eventEmptyColors_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyPositions_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyPositions_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyPositions_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyPositions_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::RuntimeMeshBlueprintFunctions_eventEmptyPositions_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTangents_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::RuntimeMeshBlueprintFunctions_eventEmptyTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyTexCoords_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTexCoords_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventEmptyTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventEmptyTriangles_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 Slack;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventEmptyTriangles_Parms, Slack), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::NewProp_Slack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "CPP_Default_Slack", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "EmptyTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::RuntimeMeshBlueprintFunctions_eventEmptyTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetAdjacencyTriangleStream_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			FRuntimeMeshRenderableMeshData OutMeshData;
			FRuntimeMeshTriangleStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetAdjacencyTriangleStream_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetAdjacencyTriangleStream_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetAdjacencyTriangleStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetAdjacencyTriangleStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::RuntimeMeshBlueprintFunctions_eventGetAdjacencyTriangleStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetBounds_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			FBox OutBounds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetBounds_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetBounds_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::NewProp_OutBounds = { "OutBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetBounds_Parms, OutBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::NewProp_OutBounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::RuntimeMeshBlueprintFunctions_eventGetBounds_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndex_Parms
		{
			FRuntimeMeshCollisionMaterialIndexStream Stream;
			FRuntimeMeshCollisionMaterialIndexStream OutStream;
			int32 Index;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|MaterialIndices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndexStream_Parms
		{
			FRuntimeMeshCollisionData CollisionData;
			FRuntimeMeshCollisionData OutCollisionData;
			FRuntimeMeshCollisionMaterialIndexStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndexStream_Parms, CollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::NewProp_OutCollisionData = { "OutCollisionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndexStream_Parms, OutCollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndexStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::NewProp_OutCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionMaterialIndexStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionMaterialIndexStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 Index;
			FVector2D OutTexCoord;
			int32 ChannelId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTexCoord;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_OutTexCoord = { "OutTexCoord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms, OutTexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_OutTexCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::NewProp_ChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "CPP_Default_ChannelId", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionTexCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoord_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoordStream_Parms
		{
			FRuntimeMeshCollisionData CollisionData;
			FRuntimeMeshCollisionData OutCollisionData;
			FRuntimeMeshCollisionTexCoordStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoordStream_Parms, CollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::NewProp_OutCollisionData = { "OutCollisionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoordStream_Parms, OutCollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoordStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 2371067157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::NewProp_OutCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionTexCoordStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionTexCoordStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms
		{
			FRuntimeMeshCollisionTriangleStream Stream;
			FRuntimeMeshCollisionTriangleStream OutStream;
			int32 Index;
			int32 OutIndexA;
			int32 OutIndexB;
			int32 OutIndexC;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndexA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndexB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndexC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutIndexA = { "OutIndexA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms, OutIndexA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutIndexB = { "OutIndexB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms, OutIndexB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutIndexC = { "OutIndexC", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms, OutIndexC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutIndexA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutIndexB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::NewProp_OutIndexC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionTriangle_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionTriangleStream_Parms
		{
			FRuntimeMeshCollisionData CollisionData;
			FRuntimeMeshCollisionData OutCollisionData;
			FRuntimeMeshCollisionTriangleStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangleStream_Parms, CollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::NewProp_OutCollisionData = { "OutCollisionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangleStream_Parms, OutCollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionTriangleStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::NewProp_OutCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionTriangleStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionTriangleStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionVertex_Parms
		{
			FRuntimeMeshCollisionVertexStream Stream;
			FRuntimeMeshCollisionVertexStream OutStream;
			int32 Index;
			FVector OutVertex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_OutVertex = { "OutVertex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertex_Parms, OutVertex), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::NewProp_OutVertex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Vertices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionVertex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionVertex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetCollisionVertexStream_Parms
		{
			FRuntimeMeshCollisionData CollisionData;
			FRuntimeMeshCollisionData OutCollisionData;
			FRuntimeMeshCollisionVertexStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCollisionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertexStream_Parms, CollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::NewProp_OutCollisionData = { "OutCollisionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertexStream_Parms, OutCollisionData), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) }; // 538173297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetCollisionVertexStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::NewProp_CollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::NewProp_OutCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionData" },
		{ "Comment", "// CollisionData\n" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "CollisionData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetCollisionVertexStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::RuntimeMeshBlueprintFunctions_eventGetCollisionVertexStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetColor_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			int32 Index;
			FLinearColor OutColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColor_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColor_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColor_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColor_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::NewProp_OutColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::RuntimeMeshBlueprintFunctions_eventGetColor_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetColorStream_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			FRuntimeMeshRenderableMeshData OutMeshData;
			FRuntimeMeshVertexColorStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColorStream_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColorStream_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetColorStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetColorStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::RuntimeMeshBlueprintFunctions_eventGetColorStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetNormal_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Index;
			FVector OutNormal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetNormal_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetNormal_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetNormal_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_OutNormal = { "OutNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetNormal_Parms, OutNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::NewProp_OutNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::RuntimeMeshBlueprintFunctions_eventGetNormal_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetPosition_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			int32 Index;
			FVector OutPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPosition_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPosition_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPosition_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPosition_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::NewProp_OutPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::RuntimeMeshBlueprintFunctions_eventGetPosition_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetPositionStream_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			FRuntimeMeshRenderableMeshData OutMeshData;
			FRuntimeMeshVertexPositionStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPositionStream_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPositionStream_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetPositionStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "Comment", "// MeshData\n" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "MeshData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetPositionStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::RuntimeMeshBlueprintFunctions_eventGetPositionStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetTangent_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Index;
			FVector OutTangent;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangent_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangent_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangent_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_OutTangent = { "OutTangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangent_Parms, OutTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::NewProp_OutTangent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::RuntimeMeshBlueprintFunctions_eventGetTangent_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Index;
			FVector OutTangentX;
			FVector OutTangentY;
			FVector OutTangentZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangents_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutTangentX = { "OutTangentX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangents_Parms, OutTangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutTangentY = { "OutTangentY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangents_Parms, OutTangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutTangentZ = { "OutTangentZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangents_Parms, OutTangentZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutTangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutTangentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::NewProp_OutTangentZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::RuntimeMeshBlueprintFunctions_eventGetTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetTangentStream_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			FRuntimeMeshRenderableMeshData OutMeshData;
			FRuntimeMeshVertexTangentStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangentStream_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangentStream_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTangentStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetTangentStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::RuntimeMeshBlueprintFunctions_eventGetTangentStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 Index;
			int32 ChannelId;
			FVector2D OutTexCoord;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTexCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_OutTexCoord = { "OutTexCoord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms, OutTexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_ChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::NewProp_OutTexCoord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetTexCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::RuntimeMeshBlueprintFunctions_eventGetTexCoord_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetTexCoordStream_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			FRuntimeMeshRenderableMeshData OutMeshData;
			FRuntimeMeshVertexTexCoordStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoordStream_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoordStream_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTexCoordStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetTexCoordStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::RuntimeMeshBlueprintFunctions_eventGetTexCoordStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetTriangleStream_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			FRuntimeMeshRenderableMeshData OutMeshData;
			FRuntimeMeshTriangleStream ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTriangleStream_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::NewProp_OutMeshData = { "OutMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTriangleStream_Parms, OutMeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetTriangleStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::NewProp_MeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::NewProp_OutMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetTriangleStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::RuntimeMeshBlueprintFunctions_eventGetTriangleStream_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventGetVertexIndex_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 Index;
			int32 OutIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetVertexIndex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetVertexIndex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetVertexIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventGetVertexIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "GetVertexIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::RuntimeMeshBlueprintFunctions_eventGetVertexIndex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumCollisionMaterialIndices_Parms
		{
			FRuntimeMeshCollisionMaterialIndexStream Stream;
			FRuntimeMeshCollisionMaterialIndexStream OutStream;
			int32 OutNumIndices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionMaterialIndices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionMaterialIndices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::NewProp_OutNumIndices = { "OutNumIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionMaterialIndices_Parms, OutNumIndices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::NewProp_OutNumIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|MaterialIndices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumCollisionMaterialIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::RuntimeMeshBlueprintFunctions_eventNumCollisionMaterialIndices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoordChannels_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 OutNumTexCoordChannels;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTexCoordChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoordChannels_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoordChannels_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::NewProp_OutNumTexCoordChannels = { "OutNumTexCoordChannels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoordChannels_Parms, OutNumTexCoordChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::NewProp_OutNumTexCoordChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumCollisionTexCoordChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoordChannels_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoords_Parms
		{
			FRuntimeMeshCollisionTexCoordStream Stream;
			FRuntimeMeshCollisionTexCoordStream OutStream;
			int32 ChannelId;
			int32 OutNumTexCoords;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTexCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 2371067157
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 2371067157
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoords_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_OutNumTexCoords = { "OutNumTexCoords", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoords_Parms, OutNumTexCoords), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_ChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::NewProp_OutNumTexCoords,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumCollisionTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventNumCollisionTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumCollisionTriangles_Parms
		{
			FRuntimeMeshCollisionTriangleStream Stream;
			FRuntimeMeshCollisionTriangleStream OutStream;
			int32 OutNumTriangles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::NewProp_OutNumTriangles = { "OutNumTriangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionTriangles_Parms, OutNumTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::NewProp_OutNumTriangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumCollisionTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::RuntimeMeshBlueprintFunctions_eventNumCollisionTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumCollisionVertices_Parms
		{
			FRuntimeMeshCollisionVertexStream Stream;
			FRuntimeMeshCollisionVertexStream OutStream;
			int32 OutNumVertices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionVertices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionVertices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::NewProp_OutNumVertices = { "OutNumVertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumCollisionVertices_Parms, OutNumVertices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::NewProp_OutNumVertices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Vertices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumCollisionVertices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::RuntimeMeshBlueprintFunctions_eventNumCollisionVertices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumColors_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			int32 OutNumColors;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumColors_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumColors_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::NewProp_OutNumColors = { "OutNumColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumColors_Parms, OutNumColors), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::NewProp_OutNumColors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::RuntimeMeshBlueprintFunctions_eventNumColors_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumIndices_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 OutNumIndices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumIndices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumIndices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::NewProp_OutNumIndices = { "OutNumIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumIndices_Parms, OutNumIndices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::NewProp_OutNumIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::RuntimeMeshBlueprintFunctions_eventNumIndices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumPositions_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			int32 OutNumPositions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumPositions_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumPositions_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::NewProp_OutNumPositions = { "OutNumPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumPositions_Parms, OutNumPositions), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::NewProp_OutNumPositions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::RuntimeMeshBlueprintFunctions_eventNumPositions_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 OutNumTangents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::NewProp_OutNumTangents = { "OutNumTangents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTangents_Parms, OutNumTangents), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::NewProp_OutNumTangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::RuntimeMeshBlueprintFunctions_eventNumTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumTexCoordChannels_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 OutNumTexCoordChannels;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTexCoordChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTexCoordChannels_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTexCoordChannels_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::NewProp_OutNumTexCoordChannels = { "OutNumTexCoordChannels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTexCoordChannels_Parms, OutNumTexCoordChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::NewProp_OutNumTexCoordChannels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumTexCoordChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::RuntimeMeshBlueprintFunctions_eventNumTexCoordChannels_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumTexCoords_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 OutNumTexCoords;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTexCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::NewProp_OutNumTexCoords = { "OutNumTexCoords", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTexCoords_Parms, OutNumTexCoords), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::NewProp_OutNumTexCoords,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventNumTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventNumTriangles_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 OutNumTriangles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::NewProp_OutNumTriangles = { "OutNumTriangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventNumTriangles_Parms, OutNumTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::NewProp_OutNumTriangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "NumTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::RuntimeMeshBlueprintFunctions_eventNumTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSeCollisionMaterialIndex_Parms
		{
			FRuntimeMeshCollisionMaterialIndexStream Stream;
			FRuntimeMeshCollisionMaterialIndexStream OutStream;
			int32 Index;
			int32 NewIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSeCollisionMaterialIndex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSeCollisionMaterialIndex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSeCollisionMaterialIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSeCollisionMaterialIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|MaterialIndices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SeCollisionMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::RuntimeMeshBlueprintFunctions_eventSeCollisionMaterialIndex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 Index;
			FVector2D NewTexCoord;
			int32 ChannelId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTexCoord;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_NewTexCoord = { "NewTexCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms, NewTexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_NewTexCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::NewProp_ChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "CPP_Default_ChannelId", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetCollisionTexCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::RuntimeMeshBlueprintFunctions_eventSetCollisionTexCoord_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetCollisionVertex_Parms
		{
			FRuntimeMeshCollisionVertexStream Stream;
			FRuntimeMeshCollisionVertexStream OutStream;
			int32 Index;
			FVector NewVertex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVertex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionVertex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionVertex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionVertex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_NewVertex = { "NewVertex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetCollisionVertex_Parms, NewVertex), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::NewProp_NewVertex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Vertices" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetCollisionVertex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::RuntimeMeshBlueprintFunctions_eventSetCollisionVertex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetColor_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			int32 Index;
			FLinearColor NewColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetColor_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetColor_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetColor_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::RuntimeMeshBlueprintFunctions_eventSetColor_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNormal_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Index;
			FVector NewNormal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNormal_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNormal_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNormal_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_NewNormal = { "NewNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNormal_Parms, NewNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::NewProp_NewNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::RuntimeMeshBlueprintFunctions_eventSetNormal_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms
		{
			FRuntimeMeshCollisionMaterialIndexStream Stream;
			FRuntimeMeshCollisionMaterialIndexStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(nullptr, 0) }; // 3578018582
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Triangles" },
		{ "Comment", "// Material Indices\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Material Indices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumCollisionMaterialIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::RuntimeMeshBlueprintFunctions_eventSetNumCollisionMaterialIndices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms
		{
			FRuntimeMeshCollisionTexCoordStream Stream;
			FRuntimeMeshCollisionTexCoordStream OutStream;
			int32 NewNumChannels;
			int32 NewNumTexCoords;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNumChannels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNumTexCoords;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 2371067157
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 2371067157
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_NewNumChannels = { "NewNumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms, NewNumChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_NewNumTexCoords = { "NewNumTexCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms, NewNumTexCoords), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_NewNumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_NewNumTexCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|TextureCoordinates" },
		{ "Comment", "// Texture Coordinates\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Texture Coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumCollisionTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventSetNumCollisionTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms
		{
			FRuntimeMeshCollisionTriangleStream Stream;
			FRuntimeMeshCollisionTriangleStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 1219785124
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Triangles" },
		{ "Comment", "// Triangles\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Triangles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumCollisionTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::RuntimeMeshBlueprintFunctions_eventSetNumCollisionTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms
		{
			FRuntimeMeshCollisionVertexStream Stream;
			FRuntimeMeshCollisionVertexStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(nullptr, 0) }; // 3461203405
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Collision|Vertices" },
		{ "Comment", "// Vertices \n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Vertices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumCollisionVertices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::RuntimeMeshBlueprintFunctions_eventSetNumCollisionVertices_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms
		{
			FRuntimeMeshVertexColorStream Stream;
			FRuntimeMeshVertexColorStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(nullptr, 0) }; // 4073359500
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Colors" },
		{ "Comment", "// Colors\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Colors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::RuntimeMeshBlueprintFunctions_eventSetNumColors_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "Comment", "// Positions\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Positions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::RuntimeMeshBlueprintFunctions_eventSetNumPositions_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "Comment", "// Tangents\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Tangents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::RuntimeMeshBlueprintFunctions_eventSetNumTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "Comment", "// Texture Coordinates\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Texture Coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumTexCoords", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::RuntimeMeshBlueprintFunctions_eventSetNumTexCoords_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 NewNum;
			bool bAllowShrinking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
		static void NewProp_bAllowShrinking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowShrinking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms, NewNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_bAllowShrinking_SetBit(void* Obj)
	{
		((RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms*)Obj)->bAllowShrinking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_bAllowShrinking = { "bAllowShrinking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms), &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_bAllowShrinking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_NewNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::NewProp_bAllowShrinking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "Comment", "// Triangles\n" },
		{ "CPP_Default_bAllowShrinking", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
		{ "ToolTip", "Triangles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetNumTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::RuntimeMeshBlueprintFunctions_eventSetNumTriangles_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetPosition_Parms
		{
			FRuntimeMeshVertexPositionStream Stream;
			FRuntimeMeshVertexPositionStream OutStream;
			int32 Index;
			FVector NewPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetPosition_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetPosition_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(nullptr, 0) }; // 1746571998
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetPosition_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetPosition_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Positions" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::RuntimeMeshBlueprintFunctions_eventSetPosition_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetTangent_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Index;
			FVector NewTangent;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangent_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangent_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangent_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_NewTangent = { "NewTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangent_Parms, NewTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::NewProp_NewTangent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::RuntimeMeshBlueprintFunctions_eventSetTangent_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetTangents_Parms
		{
			FRuntimeMeshVertexTangentStream Stream;
			FRuntimeMeshVertexTangentStream OutStream;
			int32 Index;
			FVector InTangentX;
			FVector InTangentY;
			FVector InTangentZ;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangentX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangentY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangentZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangents_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangents_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(nullptr, 0) }; // 425122326
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangents_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_InTangentX = { "InTangentX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangents_Parms, InTangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_InTangentY = { "InTangentY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangents_Parms, InTangentY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_InTangentZ = { "InTangentZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTangents_Parms, InTangentZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_InTangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_InTangentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::NewProp_InTangentZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Tangents" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetTangents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::RuntimeMeshBlueprintFunctions_eventSetTangents_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms
		{
			FRuntimeMeshVertexTexCoordStream Stream;
			FRuntimeMeshVertexTexCoordStream OutStream;
			int32 Index;
			FVector2D NewTexCoord;
			int32 ChannelId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTexCoord;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(nullptr, 0) }; // 673251897
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_NewTexCoord = { "NewTexCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms, NewTexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms, ChannelId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_NewTexCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::NewProp_ChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|TextureCoordinates" },
		{ "CPP_Default_ChannelId", "0" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetTexCoord", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::RuntimeMeshBlueprintFunctions_eventSetTexCoord_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics
	{
		struct RuntimeMeshBlueprintFunctions_eventSetVertexIndex_Parms
		{
			FRuntimeMeshTriangleStream Stream;
			FRuntimeMeshTriangleStream OutStream;
			int32 Index;
			int32 NewIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetVertexIndex_Parms, Stream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_OutStream = { "OutStream", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetVertexIndex_Parms, OutStream), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(nullptr, 0) }; // 3878568626
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetVertexIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshBlueprintFunctions_eventSetVertexIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_OutStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Rendering|Triangles" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshBlueprintFunctions, nullptr, "SetVertexIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::RuntimeMeshBlueprintFunctions_eventSetVertexIndex_Parms), Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshBlueprintFunctions);
	UClass* Z_Construct_UClass_URuntimeMeshBlueprintFunctions_NoRegister()
	{
		return URuntimeMeshBlueprintFunctions::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionBox, "AddCollisionBox" }, // 3717920633
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionCapsule, "AddCollisionCapsule" }, // 2449606110
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionConvex, "AddCollisionConvex" }, // 2749836321
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionMaterialIndex, "AddCollisionMaterialIndex" }, // 3597246591
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionSphere, "AddCollisionSphere" }, // 1654533964
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTexCoord, "AddCollisionTexCoord" }, // 2271821621
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionTriangle, "AddCollisionTriangle" }, // 3252365333
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddCollisionVertex, "AddCollisionVertex" }, // 2929437972
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddColor, "AddColor" }, // 792128538
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddIndex, "AddIndex" }, // 3274114642
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddNormalAndTangent, "AddNormalAndTangent" }, // 1358025544
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddPosition, "AddPosition" }, // 2036260446
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTangents, "AddTangents" }, // 3961879217
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTexCoord, "AddTexCoord" }, // 2431653060
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AddTriangle, "AddTriangle" }, // 1171921552
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendColors, "AppendColors" }, // 4116369638
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendPositions, "AppendPositions" }, // 2023253484
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTangents, "AppendTangents" }, // 703193775
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTexCoords, "AppendTexCoords" }, // 1072320264
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_AppendTriangles, "AppendTriangles" }, // 871703340
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_CreateRenderableMeshData, "CreateRenderableMeshData" }, // 703862485
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionMaterialIndices, "EmptyCollisionMaterialIndices" }, // 3959551592
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTexCoords, "EmptyCollisionTexCoords" }, // 1446630081
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionTriangles, "EmptyCollisionTriangles" }, // 2262710398
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyCollisionVertices, "EmptyCollisionVertices" }, // 3480709260
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyColors, "EmptyColors" }, // 783790706
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyPositions, "EmptyPositions" }, // 2307027448
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTangents, "EmptyTangents" }, // 3087450365
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTexCoords, "EmptyTexCoords" }, // 2361278565
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_EmptyTriangles, "EmptyTriangles" }, // 3373237551
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetAdjacencyTriangleStream, "GetAdjacencyTriangleStream" }, // 332003974
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetBounds, "GetBounds" }, // 2276926210
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndex, "GetCollisionMaterialIndex" }, // 815957955
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionMaterialIndexStream, "GetCollisionMaterialIndexStream" }, // 2129901845
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoord, "GetCollisionTexCoord" }, // 4066200146
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTexCoordStream, "GetCollisionTexCoordStream" }, // 824827486
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangle, "GetCollisionTriangle" }, // 3498162556
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionTriangleStream, "GetCollisionTriangleStream" }, // 1019978211
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertex, "GetCollisionVertex" }, // 666731309
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetCollisionVertexStream, "GetCollisionVertexStream" }, // 2824384939
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColor, "GetColor" }, // 3431622816
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetColorStream, "GetColorStream" }, // 3333668519
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetNormal, "GetNormal" }, // 1905249619
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPosition, "GetPosition" }, // 185726308
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetPositionStream, "GetPositionStream" }, // 666174925
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangent, "GetTangent" }, // 1025266176
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangents, "GetTangents" }, // 4180168249
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTangentStream, "GetTangentStream" }, // 509978798
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoord, "GetTexCoord" }, // 2774856062
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTexCoordStream, "GetTexCoordStream" }, // 513425556
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetTriangleStream, "GetTriangleStream" }, // 1306137400
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_GetVertexIndex, "GetVertexIndex" }, // 1290038603
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionMaterialIndices, "NumCollisionMaterialIndices" }, // 548203952
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoordChannels, "NumCollisionTexCoordChannels" }, // 3553901161
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTexCoords, "NumCollisionTexCoords" }, // 2007743513
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionTriangles, "NumCollisionTriangles" }, // 1199877117
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumCollisionVertices, "NumCollisionVertices" }, // 2081340882
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumColors, "NumColors" }, // 1926575602
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumIndices, "NumIndices" }, // 2911771420
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumPositions, "NumPositions" }, // 984997568
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTangents, "NumTangents" }, // 2321909951
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoordChannels, "NumTexCoordChannels" }, // 1925037203
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTexCoords, "NumTexCoords" }, // 4263828492
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_NumTriangles, "NumTriangles" }, // 2770256971
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SeCollisionMaterialIndex, "SeCollisionMaterialIndex" }, // 1625014614
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionTexCoord, "SetCollisionTexCoord" }, // 1617168627
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetCollisionVertex, "SetCollisionVertex" }, // 125606654
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetColor, "SetColor" }, // 3647743419
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNormal, "SetNormal" }, // 1783439929
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionMaterialIndices, "SetNumCollisionMaterialIndices" }, // 4216378282
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTexCoords, "SetNumCollisionTexCoords" }, // 4183383505
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionTriangles, "SetNumCollisionTriangles" }, // 3778019229
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumCollisionVertices, "SetNumCollisionVertices" }, // 2280843691
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumColors, "SetNumColors" }, // 1927953656
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumPositions, "SetNumPositions" }, // 556510195
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTangents, "SetNumTangents" }, // 3775288554
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTexCoords, "SetNumTexCoords" }, // 2396863510
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetNumTriangles, "SetNumTriangles" }, // 205532810
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetPosition, "SetPosition" }, // 756627702
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangent, "SetTangent" }, // 2154277037
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTangents, "SetTangents" }, // 242790993
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetTexCoord, "SetTexCoord" }, // 1186448716
		{ &Z_Construct_UFunction_URuntimeMeshBlueprintFunctions_SetVertexIndex, "SetVertexIndex" }, // 2491134706
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RuntimeMeshBlueprintFunctions.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshBlueprintFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshBlueprintFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::ClassParams = {
		&URuntimeMeshBlueprintFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshBlueprintFunctions()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshBlueprintFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshBlueprintFunctions.OuterSingleton, Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshBlueprintFunctions.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshBlueprintFunctions>()
	{
		return URuntimeMeshBlueprintFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshBlueprintFunctions);
	URuntimeMeshBlueprintFunctions::~URuntimeMeshBlueprintFunctions() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshBlueprintFunctions, URuntimeMeshBlueprintFunctions::StaticClass, TEXT("URuntimeMeshBlueprintFunctions"), &Z_Registration_Info_UClass_URuntimeMeshBlueprintFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshBlueprintFunctions), 1524980367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_3801763467(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
