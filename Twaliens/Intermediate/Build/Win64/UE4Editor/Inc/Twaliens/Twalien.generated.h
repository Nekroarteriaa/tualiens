// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_Twalien_generated_h
#error "Twalien.generated.h already included, missing '#pragma once' in Twalien.h"
#endif
#define TWALIENS_Twalien_generated_h

#define Twaliens_Source_Twaliens_Twalien_h_10_DELEGATE \
static inline void FTwalienFireAction_DelegateWrapper(const FScriptDelegate& TwalienFireAction) \
{ \
	TwalienFireAction.ProcessDelegate<UObject>(NULL); \
}


#define Twaliens_Source_Twaliens_Twalien_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Rotate(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_Twalien_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Rotate(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_Twalien_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwalien(); \
	friend struct Z_Construct_UClass_ATwalien_Statics; \
public: \
	DECLARE_CLASS(ATwalien, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ATwalien)


#define Twaliens_Source_Twaliens_Twalien_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATwalien(); \
	friend struct Z_Construct_UClass_ATwalien_Statics; \
public: \
	DECLARE_CLASS(ATwalien, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ATwalien)


#define Twaliens_Source_Twaliens_Twalien_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATwalien(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATwalien) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwalien); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwalien); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwalien(ATwalien&&); \
	NO_API ATwalien(const ATwalien&); \
public:


#define Twaliens_Source_Twaliens_Twalien_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATwalien(ATwalien&&); \
	NO_API ATwalien(const ATwalien&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwalien); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwalien); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATwalien)


#define Twaliens_Source_Twaliens_Twalien_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DeltaYawRotation() { return STRUCT_OFFSET(ATwalien, DeltaYawRotation); } \
	FORCEINLINE static uint32 __PPO__Score() { return STRUCT_OFFSET(ATwalien, Score); } \
	FORCEINLINE static uint32 __PPO__HPComponent() { return STRUCT_OFFSET(ATwalien, HPComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponSkeletor() { return STRUCT_OFFSET(ATwalien, WeaponSkeletor); }


#define Twaliens_Source_Twaliens_Twalien_h_12_PROLOG
#define Twaliens_Source_Twaliens_Twalien_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Twalien_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Twalien_h_15_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_Twalien_h_15_INCLASS \
	Twaliens_Source_Twaliens_Twalien_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_Twalien_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Twalien_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Twalien_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Twalien_h_15_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Twalien_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_Twalien_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
