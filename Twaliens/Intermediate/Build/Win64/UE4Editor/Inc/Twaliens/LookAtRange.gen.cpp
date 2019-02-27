// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/LookAtRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtRange() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_ULookAtRange_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ULookAtRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void ULookAtRange::StaticRegisterNativesULookAtRange()
	{
	}
	UClass* Z_Construct_UClass_ULookAtRange_NoRegister()
	{
		return ULookAtRange::StaticClass();
	}
	struct Z_Construct_UClass_ULookAtRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwaitingKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AwaitingKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULookAtRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LookAtRange.h" },
		{ "ModuleRelativePath", "LookAtRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtRange_Statics::NewProp_SightDistance_MetaData[] = {
		{ "Category", "Service Property" },
		{ "ModuleRelativePath", "LookAtRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtRange_Statics::NewProp_SightDistance = { UE4CodeGen_Private::EPropertyClass::Float, "SightDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ULookAtRange, SightDistance), METADATA_PARAMS(Z_Construct_UClass_ULookAtRange_Statics::NewProp_SightDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULookAtRange_Statics::NewProp_SightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtRange_Statics::NewProp_AwaitingKey_MetaData[] = {
		{ "Category", "Blackboard key" },
		{ "ModuleRelativePath", "LookAtRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULookAtRange_Statics::NewProp_AwaitingKey = { UE4CodeGen_Private::EPropertyClass::Struct, "AwaitingKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ULookAtRange, AwaitingKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_ULookAtRange_Statics::NewProp_AwaitingKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULookAtRange_Statics::NewProp_AwaitingKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Blackboard key" },
		{ "ModuleRelativePath", "LookAtRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetLocationKey = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocationKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ULookAtRange, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetLocationKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetLocationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "Blackboard key" },
		{ "ModuleRelativePath", "LookAtRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetKey = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ULookAtRange, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAtRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtRange_Statics::NewProp_SightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtRange_Statics::NewProp_AwaitingKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetLocationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtRange_Statics::NewProp_TargetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULookAtRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULookAtRange_Statics::ClassParams = {
		&ULookAtRange::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_ULookAtRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULookAtRange_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULookAtRange_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULookAtRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULookAtRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULookAtRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULookAtRange, 3936986303);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULookAtRange(Z_Construct_UClass_ULookAtRange, &ULookAtRange::StaticClass, TEXT("/Script/Twaliens"), TEXT("ULookAtRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
