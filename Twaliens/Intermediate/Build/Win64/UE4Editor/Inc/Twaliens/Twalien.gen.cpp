// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/Twalien.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwalien() {}
// Cross Module References
	TWALIENS_API UFunction* Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UClass* Z_Construct_UClass_ATwalien_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ATwalien();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TWALIENS_API UFunction* Z_Construct_UFunction_ATwalien_Fire();
	TWALIENS_API UFunction* Z_Construct_UFunction_ATwalien_MoveForward();
	TWALIENS_API UFunction* Z_Construct_UFunction_ATwalien_Rotate();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ULifeComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Twalien.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Twaliens, "TwalienFireAction__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Twaliens_TwalienFireAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ATwalien::StaticRegisterNativesATwalien()
	{
		UClass* Class = ATwalien::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ATwalien::execFire },
			{ "MoveForward", &ATwalien::execMoveForward },
			{ "Rotate", &ATwalien::execRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATwalien_Fire_Statics
	{
		struct Twalien_eventFire_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwalien_Fire_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Twalien_eventFire_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATwalien_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwalien_Fire_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATwalien_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Twalien.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwalien_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATwalien, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(Twalien_eventFire_Parms), Z_Construct_UFunction_ATwalien_Fire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATwalien_Fire_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATwalien_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATwalien_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATwalien_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATwalien_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATwalien_MoveForward_Statics
	{
		struct Twalien_eventMoveForward_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwalien_MoveForward_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Twalien_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATwalien_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwalien_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATwalien_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Twalien.h" },
		{ "ToolTip", "Called every frame for forward movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwalien_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATwalien, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(Twalien_eventMoveForward_Parms), Z_Construct_UFunction_ATwalien_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATwalien_MoveForward_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATwalien_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATwalien_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATwalien_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATwalien_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATwalien_Rotate_Statics
	{
		struct Twalien_eventRotate_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATwalien_Rotate_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Twalien_eventRotate_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATwalien_Rotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATwalien_Rotate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATwalien_Rotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Twalien.h" },
		{ "ToolTip", "Called every frame for rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATwalien_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATwalien, "Rotate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(Twalien_eventRotate_Parms), Z_Construct_UFunction_ATwalien_Rotate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATwalien_Rotate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATwalien_Rotate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATwalien_Rotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATwalien_Rotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATwalien_Rotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATwalien_NoRegister()
	{
		return ATwalien::StaticClass();
	}
	struct Z_Construct_UClass_ATwalien_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSkeletor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSkeletor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaYawRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaYawRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATwalien_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATwalien_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATwalien_Fire, "Fire" }, // 526920707
		{ &Z_Construct_UFunction_ATwalien_MoveForward, "MoveForward" }, // 4204494045
		{ &Z_Construct_UFunction_ATwalien_Rotate, "Rotate" }, // 618819673
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwalien_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Twalien.h" },
		{ "ModuleRelativePath", "Twalien.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwalien_Statics::NewProp_WeaponSkeletor_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Twalien.h" },
		{ "ToolTip", "Player's weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwalien_Statics::NewProp_WeaponSkeletor = { UE4CodeGen_Private::EPropertyClass::Object, "WeaponSkeletor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ATwalien, WeaponSkeletor), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATwalien_Statics::NewProp_WeaponSkeletor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATwalien_Statics::NewProp_WeaponSkeletor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwalien_Statics::NewProp_HPComponent_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Twalien.h" },
		{ "ToolTip", "Player Weapon Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATwalien_Statics::NewProp_HPComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HPComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ATwalien, HPComponent), Z_Construct_UClass_ULifeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATwalien_Statics::NewProp_HPComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATwalien_Statics::NewProp_HPComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwalien_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "ModuleRelativePath", "Twalien.h" },
		{ "ToolTip", "Player's Score" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwalien_Statics::NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Float, "Score", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ATwalien, Score), METADATA_PARAMS(Z_Construct_UClass_ATwalien_Statics::NewProp_Score_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATwalien_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATwalien_Statics::NewProp_DeltaYawRotation_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "ModuleRelativePath", "Twalien.h" },
		{ "ToolTip", "Rotation Delta" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATwalien_Statics::NewProp_DeltaYawRotation = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaYawRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ATwalien, DeltaYawRotation), METADATA_PARAMS(Z_Construct_UClass_ATwalien_Statics::NewProp_DeltaYawRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATwalien_Statics::NewProp_DeltaYawRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATwalien_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwalien_Statics::NewProp_WeaponSkeletor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwalien_Statics::NewProp_HPComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwalien_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATwalien_Statics::NewProp_DeltaYawRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATwalien_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwalien>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATwalien_Statics::ClassParams = {
		&ATwalien::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATwalien_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATwalien_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATwalien_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATwalien_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATwalien()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATwalien_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATwalien, 3629541938);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATwalien(Z_Construct_UClass_ATwalien, &ATwalien::StaticClass, TEXT("/Script/Twaliens"), TEXT("ATwalien"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATwalien);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
