// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/LifeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeComponent() {}
// Cross Module References
	TWALIENS_API UFunction* Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	TWALIENS_API UFunction* Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature();
	TWALIENS_API UClass* Z_Construct_UClass_ULifeComponent_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_ULifeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TWALIENS_API UFunction* Z_Construct_UFunction_ULifeComponent_GetHitPoints();
	TWALIENS_API UFunction* Z_Construct_UFunction_ULifeComponent_ResetHitPoints();
	TWALIENS_API UFunction* Z_Construct_UFunction_ULifeComponent_SetHitPoints();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LifeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Twaliens, "ActorHasDied__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LifeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Twaliens, "ActorLifeHasBeenUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ULifeComponent::StaticRegisterNativesULifeComponent()
	{
		UClass* Class = ULifeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHitPoints", &ULifeComponent::execGetHitPoints },
			{ "ResetHitPoints", &ULifeComponent::execResetHitPoints },
			{ "SetHitPoints", &ULifeComponent::execSetHitPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics
	{
		struct LifeComponent_eventGetHitPoints_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LifeComponent_eventGetHitPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component Functions" },
		{ "ModuleRelativePath", "LifeComponent.h" },
		{ "ToolTip", "*********************************************************//Return Actor Hit Points." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeComponent, "GetHitPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LifeComponent_eventGetHitPoints_Parms), Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeComponent_GetHitPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULifeComponent_GetHitPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeComponent_ResetHitPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeComponent_ResetHitPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component Functions" },
		{ "ModuleRelativePath", "LifeComponent.h" },
		{ "ToolTip", "Reset Actor Hit Points." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeComponent_ResetHitPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeComponent, "ResetHitPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeComponent_ResetHitPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULifeComponent_ResetHitPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeComponent_ResetHitPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULifeComponent_ResetHitPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics
	{
		struct LifeComponent_eventSetHitPoints_Parms
		{
			float DeltaHitPoints;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaHitPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::NewProp_DeltaHitPoints = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaHitPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LifeComponent_eventSetHitPoints_Parms, DeltaHitPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::NewProp_DeltaHitPoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component Functions" },
		{ "ModuleRelativePath", "LifeComponent.h" },
		{ "ToolTip", "Modify Actor Hit Points.\nDeltaHitPoints -> Hit Points added to Actor Hit Points." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeComponent, "SetHitPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LifeComponent_eventSetHitPoints_Parms), Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeComponent_SetHitPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULifeComponent_SetHitPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULifeComponent_NoRegister()
	{
		return ULifeComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLifeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLifeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmountHitPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAmountHitPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeComponent_GetHitPoints, "GetHitPoints" }, // 3589019678
		{ &Z_Construct_UFunction_ULifeComponent_ResetHitPoints, "ResetHitPoints" }, // 3374039030
		{ &Z_Construct_UFunction_ULifeComponent_SetHitPoints, "SetHitPoints" }, // 1223990779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LifeComponent.h" },
		{ "ModuleRelativePath", "LifeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnActorDeath_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "LifeComponent.h" },
		{ "ToolTip", "Delegate that broadcast whenever actor dies." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnActorDeath = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActorDeath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(ULifeComponent, OnActorDeath), Z_Construct_UDelegateFunction_Twaliens_ActorHasDied__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnActorDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnActorDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnLifeChanged_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "LifeComponent.h" },
		{ "ToolTip", "Delegate that broadcast whenever hit points changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnLifeChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLifeChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(ULifeComponent, OnLifeChanged), Z_Construct_UDelegateFunction_Twaliens_ActorLifeHasBeenUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnLifeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnLifeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeComponent_Statics::NewProp_MaxAmountHitPoints_MetaData[] = {
		{ "Category", "Component settings" },
		{ "ModuleRelativePath", "LifeComponent.h" },
		{ "ToolTip", "Max hit points amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeComponent_Statics::NewProp_MaxAmountHitPoints = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAmountHitPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ULifeComponent, MaxAmountHitPoints), METADATA_PARAMS(Z_Construct_UClass_ULifeComponent_Statics::NewProp_MaxAmountHitPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULifeComponent_Statics::NewProp_MaxAmountHitPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnActorDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeComponent_Statics::NewProp_OnLifeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeComponent_Statics::NewProp_MaxAmountHitPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULifeComponent_Statics::ClassParams = {
		&ULifeComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULifeComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULifeComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULifeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULifeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULifeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULifeComponent, 4165169337);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULifeComponent(Z_Construct_UClass_ULifeComponent, &ULifeComponent::StaticClass, TEXT("/Script/Twaliens"), TEXT("ULifeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
