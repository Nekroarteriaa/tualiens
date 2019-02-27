// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/MoveToActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveToActor() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_UMoveToActor_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UMoveToActor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UMoveToActor::StaticRegisterNativesUMoveToActor()
	{
	}
	UClass* Z_Construct_UClass_UMoveToActor_NoRegister()
	{
		return UMoveToActor::StaticClass();
	}
	struct Z_Construct_UClass_UMoveToActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanStrafe_MetaData[];
#endif
		static void NewProp_CanStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanStrafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopOnOverlap_MetaData[];
#endif
		static void NewProp_StopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopOnOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToFollow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetToFollow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveToActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveToActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveToActor.h" },
		{ "ModuleRelativePath", "MoveToActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe_MetaData[] = {
		{ "Category", "Task Property" },
		{ "ModuleRelativePath", "MoveToActor.h" },
	};
#endif
	void Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe_SetBit(void* Obj)
	{
		((UMoveToActor*)Obj)->CanStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "CanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMoveToActor), &Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap_MetaData[] = {
		{ "Category", "Task Property" },
		{ "ModuleRelativePath", "MoveToActor.h" },
	};
#endif
	void Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap_SetBit(void* Obj)
	{
		((UMoveToActor*)Obj)->StopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "StopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMoveToActor), &Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveToActor_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Task Property" },
		{ "ModuleRelativePath", "MoveToActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveToActor_Statics::NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UMoveToActor, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UMoveToActor_Statics::NewProp_AcceptanceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoveToActor_Statics::NewProp_AcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveToActor_Statics::NewProp_TargetToFollow_MetaData[] = {
		{ "Category", "Blackboard key" },
		{ "ModuleRelativePath", "MoveToActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveToActor_Statics::NewProp_TargetToFollow = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetToFollow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UMoveToActor, TargetToFollow), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UMoveToActor_Statics::NewProp_TargetToFollow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoveToActor_Statics::NewProp_TargetToFollow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveToActor_Statics::NewProp_CanStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveToActor_Statics::NewProp_StopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveToActor_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveToActor_Statics::NewProp_TargetToFollow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveToActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveToActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveToActor_Statics::ClassParams = {
		&UMoveToActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMoveToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMoveToActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMoveToActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMoveToActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveToActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveToActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveToActor, 3697336222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveToActor(Z_Construct_UClass_UMoveToActor, &UMoveToActor::StaticClass, TEXT("/Script/Twaliens"), TEXT("UMoveToActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveToActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
