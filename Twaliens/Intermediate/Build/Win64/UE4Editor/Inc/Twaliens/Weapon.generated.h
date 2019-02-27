// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define TWALIENS_Weapon_generated_h

#define Twaliens_Source_Twaliens_Weapon_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_Weapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define Twaliens_Source_Twaliens_Weapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWeapon(); \
	friend struct Z_Construct_UClass_UWeapon_Statics; \
public: \
	DECLARE_CLASS(UWeapon, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(UWeapon)


#define Twaliens_Source_Twaliens_Weapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public:


#define Twaliens_Source_Twaliens_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeapon(UWeapon&&); \
	NO_API UWeapon(const UWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeapon)


#define Twaliens_Source_Twaliens_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(UWeapon, ProjectileClass); }


#define Twaliens_Source_Twaliens_Weapon_h_12_PROLOG
#define Twaliens_Source_Twaliens_Weapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Weapon_h_15_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_Weapon_h_15_INCLASS \
	Twaliens_Source_Twaliens_Weapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_Weapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Weapon_h_15_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
