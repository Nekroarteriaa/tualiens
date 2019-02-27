// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_LifeComponent_generated_h
#error "LifeComponent.generated.h already included, missing '#pragma once' in LifeComponent.h"
#endif
#define TWALIENS_LifeComponent_generated_h

#define Twaliens_Source_Twaliens_LifeComponent_h_10_DELEGATE \
static inline void FActorHasDied_DelegateWrapper(const FMulticastScriptDelegate& ActorHasDied) \
{ \
	ActorHasDied.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Twaliens_Source_Twaliens_LifeComponent_h_9_DELEGATE \
static inline void FActorLifeHasBeenUpdated_DelegateWrapper(const FMulticastScriptDelegate& ActorLifeHasBeenUpdated) \
{ \
	ActorLifeHasBeenUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Twaliens_Source_Twaliens_LifeComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHitPoints) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHitPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHitPoints(Z_Param_DeltaHitPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHitPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHitPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHitPoints(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_LifeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHitPoints) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHitPoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHitPoints(Z_Param_DeltaHitPoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHitPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHitPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHitPoints(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_LifeComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeComponent(); \
	friend struct Z_Construct_UClass_ULifeComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ULifeComponent)


#define Twaliens_Source_Twaliens_LifeComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULifeComponent(); \
	friend struct Z_Construct_UClass_ULifeComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ULifeComponent)


#define Twaliens_Source_Twaliens_LifeComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeComponent(ULifeComponent&&); \
	NO_API ULifeComponent(const ULifeComponent&); \
public:


#define Twaliens_Source_Twaliens_LifeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeComponent(ULifeComponent&&); \
	NO_API ULifeComponent(const ULifeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeComponent)


#define Twaliens_Source_Twaliens_LifeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxAmountHitPoints() { return STRUCT_OFFSET(ULifeComponent, MaxAmountHitPoints); } \
	FORCEINLINE static uint32 __PPO__OnLifeChanged() { return STRUCT_OFFSET(ULifeComponent, OnLifeChanged); } \
	FORCEINLINE static uint32 __PPO__OnActorDeath() { return STRUCT_OFFSET(ULifeComponent, OnActorDeath); }


#define Twaliens_Source_Twaliens_LifeComponent_h_12_PROLOG
#define Twaliens_Source_Twaliens_LifeComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_LifeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_LifeComponent_h_15_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_LifeComponent_h_15_INCLASS \
	Twaliens_Source_Twaliens_LifeComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_LifeComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_LifeComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_LifeComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_LifeComponent_h_15_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_LifeComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_LifeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
