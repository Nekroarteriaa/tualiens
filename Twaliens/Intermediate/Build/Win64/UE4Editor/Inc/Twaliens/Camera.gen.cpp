// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamera() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_ACamera_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ACamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ACamera::StaticRegisterNativesACamera()
	{
	}
	UClass* Z_Construct_UClass_ACamera_NoRegister()
	{
		return ACamera::StaticClass();
	}
	struct Z_Construct_UClass_ACamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFollowAverage_MetaData[];
#endif
		static void NewProp_ActivateFollowAverage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateFollowAverage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceTrgtArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceTrgtArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceTrgtArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceTrgtArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAngles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponnt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrgtArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrgtArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponnt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponnt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera.h" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	void Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage_SetBit(void* Obj)
	{
		((ACamera*)Obj)->ActivateFollowAverage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage = { UE4CodeGen_Private::EPropertyClass::Bool, "ActivateFollowAverage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ACamera), &Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_MaxDistanceTrgtArmLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_MaxDistanceTrgtArmLength = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistanceTrgtArmLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACamera, MaxDistanceTrgtArmLength), METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_MaxDistanceTrgtArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_MaxDistanceTrgtArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_MinDistanceTrgtArmLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, category = \"Settings\")\n               float MinDistanceBetweenPlayers = 100.f;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_MinDistanceTrgtArmLength = { UE4CodeGen_Private::EPropertyClass::Float, "MinDistanceTrgtArmLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACamera, MinDistanceTrgtArmLength), METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_MinDistanceTrgtArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_MinDistanceTrgtArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_RotationAngles_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_RotationAngles = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationAngles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACamera, RotationAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_RotationAngles_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_RotationAngles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_StaticMeshComponnt_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_StaticMeshComponnt = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponnt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ACamera, StaticMeshComponnt), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_StaticMeshComponnt_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_StaticMeshComponnt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_TrgtArmLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_TrgtArmLength = { UE4CodeGen_Private::EPropertyClass::Float, "TrgtArmLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACamera, TrgtArmLength), METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_TrgtArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_TrgtArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_SpringArmComponnt_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_SpringArmComponnt = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComponnt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ACamera, SpringArmComponnt), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_SpringArmComponnt_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_SpringArmComponnt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_CameraComponnt_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_CameraComponnt = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponnt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ACamera, CameraComponnt), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_CameraComponnt_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_CameraComponnt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_Players = { UE4CodeGen_Private::EPropertyClass::Array, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ACamera, Players), METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::NewProp_Players_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera_Statics::NewProp_Players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Players", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_ActivateFollowAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_MaxDistanceTrgtArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_MinDistanceTrgtArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_RotationAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_StaticMeshComponnt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_TrgtArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_SpringArmComponnt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_CameraComponnt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera_Statics::NewProp_Players_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamera_Statics::ClassParams = {
		&ACamera::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamera, 2715657174);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamera(Z_Construct_UClass_ACamera, &ACamera::StaticClass, TEXT("/Script/Twaliens"), TEXT("ACamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
