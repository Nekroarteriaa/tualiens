// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/CheckEnemyAtMeleeRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckEnemyAtMeleeRange() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_UCheckEnemyAtMeleeRange_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UCheckEnemyAtMeleeRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UCheckEnemyAtMeleeRange::StaticRegisterNativesUCheckEnemyAtMeleeRange()
	{
	}
	UClass* Z_Construct_UClass_UCheckEnemyAtMeleeRange_NoRegister()
	{
		return UCheckEnemyAtMeleeRange::StaticClass();
	}
	struct Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheckEnemyAtMeleeRange.h" },
		{ "ModuleRelativePath", "CheckEnemyAtMeleeRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_MeleeRange_MetaData[] = {
		{ "Category", "Decorator Property" },
		{ "ModuleRelativePath", "CheckEnemyAtMeleeRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_MeleeRange = { UE4CodeGen_Private::EPropertyClass::Float, "MeleeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCheckEnemyAtMeleeRange, MeleeRange), METADATA_PARAMS(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_MeleeRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_MeleeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "BlackBoard key" },
		{ "ModuleRelativePath", "CheckEnemyAtMeleeRange.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_TargetKey = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCheckEnemyAtMeleeRange, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_TargetKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_TargetKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_MeleeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::NewProp_TargetKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckEnemyAtMeleeRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::ClassParams = {
		&UCheckEnemyAtMeleeRange::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckEnemyAtMeleeRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckEnemyAtMeleeRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckEnemyAtMeleeRange, 1368749940);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckEnemyAtMeleeRange(Z_Construct_UClass_UCheckEnemyAtMeleeRange, &UCheckEnemyAtMeleeRange::StaticClass, TEXT("/Script/Twaliens"), TEXT("UCheckEnemyAtMeleeRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckEnemyAtMeleeRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
