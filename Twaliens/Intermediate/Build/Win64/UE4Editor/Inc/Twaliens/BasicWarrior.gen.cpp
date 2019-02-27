// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/BasicWarrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicWarrior() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_ABasicWarrior_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ABasicWarrior();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UFunction* Z_Construct_UFunction_ABasicWarrior_SpawnCoins();
	TWALIENS_API UClass* Z_Construct_UClass_ULifeComponent_NoRegister();
// End Cross Module References
	void ABasicWarrior::StaticRegisterNativesABasicWarrior()
	{
		UClass* Class = ABasicWarrior::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnCoins", &ABasicWarrior::execSpawnCoins },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicWarrior, "SpawnCoins", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicWarrior_SpawnCoins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicWarrior_SpawnCoins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicWarrior_NoRegister()
	{
		return ABasicWarrior::StaticClass();
	}
	struct Z_Construct_UClass_ABasicWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicWarrior_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicWarrior_SpawnCoins, "SpawnCoins" }, // 3575486289
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarrior_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicWarrior.h" },
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HPComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABasicWarrior, HPComponent), Z_Construct_UClass_ULifeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicWarrior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicWarrior_Statics::NewProp_HPComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicWarrior_Statics::ClassParams = {
		&ABasicWarrior::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABasicWarrior_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasicWarrior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasicWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicWarrior, 2213498670);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicWarrior(Z_Construct_UClass_ABasicWarrior, &ABasicWarrior::StaticClass, TEXT("/Script/Twaliens"), TEXT("ABasicWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
