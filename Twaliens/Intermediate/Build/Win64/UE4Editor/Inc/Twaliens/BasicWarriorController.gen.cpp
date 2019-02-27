// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/BasicWarriorController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicWarriorController() {}
// Cross Module References
	TWALIENS_API UClass* Z_Construct_UClass_ABasicWarriorController_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ABasicWarriorController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
// End Cross Module References
	void ABasicWarriorController::StaticRegisterNativesABasicWarriorController()
	{
	}
	UClass* Z_Construct_UClass_ABasicWarriorController_NoRegister()
	{
		return ABasicWarriorController::StaticClass();
	}
	struct Z_Construct_UClass_ABasicWarriorController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicWarriorController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicWarriorController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicWarriorController.h" },
		{ "ModuleRelativePath", "BasicWarriorController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicWarriorController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicWarriorController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicWarriorController_Statics::ClassParams = {
		&ABasicWarriorController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasicWarriorController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasicWarriorController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicWarriorController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicWarriorController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicWarriorController, 3238706565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicWarriorController(Z_Construct_UClass_ABasicWarriorController, &ABasicWarriorController::StaticClass, TEXT("/Script/Twaliens"), TEXT("ABasicWarriorController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicWarriorController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
