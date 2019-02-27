// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_BasicWarrior_generated_h
#error "BasicWarrior.generated.h already included, missing '#pragma once' in BasicWarrior.h"
#endif
#define TWALIENS_BasicWarrior_generated_h

#define Twaliens_Source_Twaliens_BasicWarrior_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnCoins) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCoins(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnCoins) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnCoins(); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicWarrior(); \
	friend struct Z_Construct_UClass_ABasicWarrior_Statics; \
public: \
	DECLARE_CLASS(ABasicWarrior, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ABasicWarrior)


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABasicWarrior(); \
	friend struct Z_Construct_UClass_ABasicWarrior_Statics; \
public: \
	DECLARE_CLASS(ABasicWarrior, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ABasicWarrior)


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicWarrior(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicWarrior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicWarrior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicWarrior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicWarrior(ABasicWarrior&&); \
	NO_API ABasicWarrior(const ABasicWarrior&); \
public:


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicWarrior(ABasicWarrior&&); \
	NO_API ABasicWarrior(const ABasicWarrior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicWarrior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicWarrior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicWarrior)


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HPComponent() { return STRUCT_OFFSET(ABasicWarrior, HPComponent); }


#define Twaliens_Source_Twaliens_BasicWarrior_h_10_PROLOG
#define Twaliens_Source_Twaliens_BasicWarrior_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_INCLASS \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_BasicWarrior_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_BasicWarrior_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_BasicWarrior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
