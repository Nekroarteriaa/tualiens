// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Twaliens/Dustpan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDustpan() {}
// Cross Module References
	TWALIENS_API UFunction* Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Twaliens();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UDustpan_NoRegister();
	TWALIENS_API UClass* Z_Construct_UClass_UDustpan();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	TWALIENS_API UFunction* Z_Construct_UFunction_UDustpan_OnObjectEnterToArea();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TWALIENS_API UFunction* Z_Construct_UFunction_UDustpan_OnObjectExitToArea();
	TWALIENS_API UFunction* Z_Construct_UFunction_UDustpan_Suck();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics
	{
		struct _Script_Twaliens_eventActorHasBeenSucked_Parms
		{
			AActor* SuckedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuckedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::NewProp_SuckedActor = { UE4CodeGen_Private::EPropertyClass::Object, "SuckedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Twaliens_eventActorHasBeenSucked_Parms, SuckedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::NewProp_SuckedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Twaliens, "ActorHasBeenSucked__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Twaliens_eventActorHasBeenSucked_Parms), Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Twaliens_ActorHasBeenSucked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDustpan::StaticRegisterNativesUDustpan()
	{
		UClass* Class = UDustpan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnObjectEnterToArea", &UDustpan::execOnObjectEnterToArea },
			{ "OnObjectExitToArea", &UDustpan::execOnObjectExitToArea },
			{ "Suck", &UDustpan::execSuck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics
	{
		struct Dustpan_eventOnObjectEnterToArea_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectEnterToArea_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Dustpan_eventOnObjectEnterToArea_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Dustpan_eventOnObjectEnterToArea_Parms), &Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectEnterToArea_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectEnterToArea_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectEnterToArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectEnterToArea_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDustpan, "OnObjectEnterToArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(Dustpan_eventOnObjectEnterToArea_Parms), Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDustpan_OnObjectEnterToArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDustpan_OnObjectEnterToArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics
	{
		struct Dustpan_eventOnObjectExitToArea_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectExitToArea_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectExitToArea_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectExitToArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Dustpan_eventOnObjectExitToArea_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDustpan, "OnObjectExitToArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(Dustpan_eventOnObjectExitToArea_Parms), Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDustpan_OnObjectExitToArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDustpan_OnObjectExitToArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDustpan_Suck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDustpan_Suck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDustpan_Suck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDustpan, "Suck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDustpan_Suck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDustpan_Suck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDustpan_Suck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDustpan_Suck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDustpan_NoRegister()
	{
		return UDustpan::StaticClass();
	}
	struct Z_Construct_UClass_UDustpan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuckRadio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuckRadio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuckedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuckedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuckVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuckVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuckArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuckArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDustpan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Twaliens,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDustpan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDustpan_OnObjectEnterToArea, "OnObjectEnterToArea" }, // 4206917405
		{ &Z_Construct_UFunction_UDustpan_OnObjectExitToArea, "OnObjectExitToArea" }, // 839878225
		{ &Z_Construct_UFunction_UDustpan_Suck, "Suck" }, // 1947315741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDustpan_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Dustpan.h" },
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDustpan_Statics::NewProp_SuckRadio_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDustpan_Statics::NewProp_SuckRadio = { UE4CodeGen_Private::EPropertyClass::Float, "SuckRadio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UDustpan, SuckRadio), METADATA_PARAMS(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckRadio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckRadio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDustpan_Statics::NewProp_SuckedDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDustpan_Statics::NewProp_SuckedDistance = { UE4CodeGen_Private::EPropertyClass::Float, "SuckedDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UDustpan, SuckedDistance), METADATA_PARAMS(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckedDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDustpan_Statics::NewProp_SuckVelocity_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDustpan_Statics::NewProp_SuckVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "SuckVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UDustpan, SuckVelocity), METADATA_PARAMS(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDustpan_Statics::NewProp_SuckArea_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dustpan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDustpan_Statics::NewProp_SuckArea = { UE4CodeGen_Private::EPropertyClass::Object, "SuckArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(UDustpan, SuckArea), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDustpan_Statics::NewProp_SuckArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDustpan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDustpan_Statics::NewProp_SuckRadio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDustpan_Statics::NewProp_SuckedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDustpan_Statics::NewProp_SuckVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDustpan_Statics::NewProp_SuckArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDustpan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDustpan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDustpan_Statics::ClassParams = {
		&UDustpan::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UDustpan_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDustpan_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDustpan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDustpan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDustpan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDustpan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDustpan, 947943176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDustpan(Z_Construct_UClass_UDustpan, &UDustpan::StaticClass, TEXT("/Script/Twaliens"), TEXT("UDustpan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDustpan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
