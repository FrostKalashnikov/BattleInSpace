// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshSlicer.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshSlicer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshSlicer();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption;
	static UEnum* ERuntimeMeshSliceCapOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshSliceCapOption"));
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshSliceCapOption>()
	{
		return ERuntimeMeshSliceCapOption_StaticEnum();
	}
	struct Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::Enumerators[] = {
		{ "ERuntimeMeshSliceCapOption::NoCap", (int64)ERuntimeMeshSliceCapOption::NoCap },
		{ "ERuntimeMeshSliceCapOption::CreateNewSectionForCap", (int64)ERuntimeMeshSliceCapOption::CreateNewSectionForCap },
		{ "ERuntimeMeshSliceCapOption::UseLastSectionForCap", (int64)ERuntimeMeshSliceCapOption::UseLastSectionForCap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Options for creating cap geometry when slicing */" },
		{ "CreateNewSectionForCap.Comment", "/** Add a new section to RuntimeMesh for cap */" },
		{ "CreateNewSectionForCap.Name", "ERuntimeMeshSliceCapOption::CreateNewSectionForCap" },
		{ "CreateNewSectionForCap.ToolTip", "Add a new section to RuntimeMesh for cap" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
		{ "NoCap.Comment", "/** Do not create cap geometry */" },
		{ "NoCap.Name", "ERuntimeMeshSliceCapOption::NoCap" },
		{ "NoCap.ToolTip", "Do not create cap geometry" },
		{ "ToolTip", "Options for creating cap geometry when slicing" },
		{ "UseLastSectionForCap.Comment", "/** Add cap geometry to existing last section */" },
		{ "UseLastSectionForCap.Name", "ERuntimeMeshSliceCapOption::UseLastSectionForCap" },
		{ "UseLastSectionForCap.ToolTip", "Add cap geometry to existing last section" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		"ERuntimeMeshSliceCapOption",
		"ERuntimeMeshSliceCapOption",
		Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption.InnerSingleton, Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption.InnerSingleton;
	}
	DEFINE_FUNCTION(URuntimeMeshSlicer::execSliceRuntimeMeshData)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_SourceSection);
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_SlicePlane);
		P_GET_ENUM(ERuntimeMeshSliceCapOption,Z_Param_CapOption);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_NewSourceSection);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_NewSourceSectionCap);
		P_GET_UBOOL(Z_Param_bCreateDestination);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_DestinationSection);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_NewDestinationSectionCap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshSlicer::SliceRuntimeMeshData(Z_Param_Out_SourceSection,Z_Param_Out_SlicePlane,ERuntimeMeshSliceCapOption(Z_Param_CapOption),Z_Param_Out_NewSourceSection,Z_Param_Out_NewSourceSectionCap,Z_Param_bCreateDestination,Z_Param_Out_DestinationSection,Z_Param_Out_NewDestinationSectionCap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshSlicer::execSliceRuntimeMesh)
	{
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_InRuntimeMesh);
		P_GET_STRUCT(FVector,Z_Param_PlanePosition);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_UBOOL(Z_Param_bCreateOtherHalf);
		P_GET_OBJECT_REF(URuntimeMeshComponent,Z_Param_Out_OutOtherHalfRuntimeMesh);
		P_GET_ENUM(ERuntimeMeshSliceCapOption,Z_Param_CapOption);
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshSlicer::SliceRuntimeMesh(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfRuntimeMesh,ERuntimeMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial);
		P_NATIVE_END;
	}
	void URuntimeMeshSlicer::StaticRegisterNativesURuntimeMeshSlicer()
	{
		UClass* Class = URuntimeMeshSlicer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SliceRuntimeMesh", &URuntimeMeshSlicer::execSliceRuntimeMesh },
			{ "SliceRuntimeMeshData", &URuntimeMeshSlicer::execSliceRuntimeMeshData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms
		{
			URuntimeMeshComponent* InRuntimeMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			bool bCreateOtherHalf;
			URuntimeMeshComponent* OutOtherHalfRuntimeMesh;
			ERuntimeMeshSliceCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRuntimeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRuntimeMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static void NewProp_bCreateOtherHalf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateOtherHalf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutOtherHalfRuntimeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutOtherHalfRuntimeMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh = { "InRuntimeMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, InRuntimeMesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf_SetBit(void* Obj)
	{
		((RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms*)Obj)->bCreateOtherHalf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf = { "bCreateOtherHalf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh = { "OutOtherHalfRuntimeMesh", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, OutOtherHalfRuntimeMesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption = { "CapOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, CapOption), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption, METADATA_PARAMS(nullptr, 0) }; // 544240029
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapMaterial = { "CapMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, CapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlanePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "Comment", "/**\n\x09*\x09Slice the RuntimeMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n\x09*\x09@param\x09InRuntimeMesh\x09\x09\x09RuntimeMeshComponent to slice\n\x09*\x09@param\x09PlanePosition\x09\x09\x09Point on the plane to use for slicing, in world space\n\x09*\x09@param\x09PlaneNormal\x09\x09\x09\x09Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n\x09*\x09@param\x09""bCreateOtherHalf\x09\x09If true, an additional RuntimeMeshComponent (OutOtherHalfRuntimeMesh) will be created using the other half of the sliced geometry\n\x09*\x09@param\x09OutOtherHalfRuntimeMesh\x09If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InRuntimeMesh.\n\x09*\x09@param\x09""CapOption\x09\x09\x09\x09If and how to create 'cap' geometry on the slicing plane\n\x09*\x09@param\x09""CapMaterial\x09\x09\x09\x09If creating a new section for the cap, assign this material to that section\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
		{ "ToolTip", "Slice the RuntimeMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n@param  InRuntimeMesh                   RuntimeMeshComponent to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  bCreateOtherHalf                If true, an additional RuntimeMeshComponent (OutOtherHalfRuntimeMesh) will be created using the other half of the sliced geometry\n@param  OutOtherHalfRuntimeMesh If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InRuntimeMesh.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  CapMaterial                             If creating a new section for the cap, assign this material to that section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshSlicer, nullptr, "SliceRuntimeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms
		{
			FRuntimeMeshRenderableMeshData SourceSection;
			FPlane SlicePlane;
			ERuntimeMeshSliceCapOption CapOption;
			FRuntimeMeshRenderableMeshData NewSourceSection;
			FRuntimeMeshRenderableMeshData NewSourceSectionCap;
			bool bCreateDestination;
			FRuntimeMeshRenderableMeshData DestinationSection;
			FRuntimeMeshRenderableMeshData NewDestinationSectionCap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlicePlane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlicePlane;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapOption;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSourceSection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSourceSectionCap;
		static void NewProp_bCreateDestination_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDestination;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationSection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDestinationSectionCap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SourceSection = { "SourceSection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, SourceSection), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane = { "SlicePlane", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, SlicePlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption = { "CapOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, CapOption), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption, METADATA_PARAMS(nullptr, 0) }; // 544240029
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSection = { "NewSourceSection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, NewSourceSection), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSectionCap = { "NewSourceSectionCap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, NewSourceSectionCap), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	void Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination_SetBit(void* Obj)
	{
		((RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms*)Obj)->bCreateDestination = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination = { "bCreateDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_DestinationSection = { "DestinationSection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, DestinationSection), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewDestinationSectionCap = { "NewDestinationSectionCap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, NewDestinationSectionCap), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) }; // 3590968504
	void Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SourceSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSectionCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_DestinationSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewDestinationSectionCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "Comment", "/**\n\x09*\x09Slice the RuntimeMeshData using a plane. Optionally create 'cap' geometry.\n\x09*\x09@param\x09SourceSection\x09\x09\x09RuntimeMeshData to slice\n\x09*\x09@param\x09PlanePosition\x09\x09\x09Point on the plane to use for slicing, in world space\n\x09*\x09@param\x09PlaneNormal\x09\x09\x09\x09Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n\x09*\x09@param\x09""CapOption\x09\x09\x09\x09If and how to create 'cap' geometry on the slicing plane\n\x09*\x09@param\x09NewSourceSection\x09\x09Resulting mesh data for origin section\n\x09*\x09@param\x09""DestinationSection\x09\x09Mesh data sliced from source\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
		{ "ToolTip", "Slice the RuntimeMeshData using a plane. Optionally create 'cap' geometry.\n@param  SourceSection                   RuntimeMeshData to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  NewSourceSection                Resulting mesh data for origin section\n@param  DestinationSection              Mesh data sliced from source" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshSlicer, nullptr, "SliceRuntimeMeshData", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms), Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMeshSlicer);
	UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister()
	{
		return URuntimeMeshSlicer::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshSlicer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshSlicer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshSlicer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh, "SliceRuntimeMesh" }, // 2840469414
		{ &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData, "SliceRuntimeMeshData" }, // 396323226
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshSlicer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeMeshSlicer.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshSlicer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshSlicer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshSlicer_Statics::ClassParams = {
		&URuntimeMeshSlicer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshSlicer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshSlicer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshSlicer()
	{
		if (!Z_Registration_Info_UClass_URuntimeMeshSlicer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMeshSlicer.OuterSingleton, Z_Construct_UClass_URuntimeMeshSlicer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMeshSlicer.OuterSingleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshSlicer>()
	{
		return URuntimeMeshSlicer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshSlicer);
	URuntimeMeshSlicer::~URuntimeMeshSlicer() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics::EnumInfo[] = {
		{ ERuntimeMeshSliceCapOption_StaticEnum, TEXT("ERuntimeMeshSliceCapOption"), &Z_Registration_Info_UEnum_ERuntimeMeshSliceCapOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 544240029U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMeshSlicer, URuntimeMeshSlicer::StaticClass, TEXT("URuntimeMeshSlicer"), &Z_Registration_Info_UClass_URuntimeMeshSlicer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMeshSlicer), 1785933925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_1307556485(TEXT("/Script/RuntimeMeshComponent"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ProceduralTerrainGenerator_Source_ThirdParty_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
