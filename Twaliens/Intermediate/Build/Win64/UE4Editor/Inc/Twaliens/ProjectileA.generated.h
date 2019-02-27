// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_ProjectileA_generated_h
#error "ProjectileA.generated.h already included, missing '#pragma once' in ProjectileA.h"
#endif
#define TWALIENS_ProjectileA_generated_h

#define Twaliens_Source_Twaliens_ProjectileA_h_16_RPC_WRAPPERS
#define Twaliens_Source_Twaliens_ProjectileA_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Twaliens_Source_Twaliens_ProjectileA_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileA(); \
	friend struct Z_Construct_UClass_AProjectileA_Statics; \
public: \
	DECLARE_CLASS(AProjectileA, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(AProjectileA)


#define Twaliens_Source_Twaliens_ProjectileA_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileA(); \
	friend struct Z_Construct_UClass_AProjectileA_Statics; \
public: \
	DECLARE_CLASS(AProjectileA, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(AProjectileA)


#define Twaliens_Source_Twaliens_ProjectileA_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileA(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileA) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileA); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileA); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileA(AProjectileA&&); \
	NO_API AProjectileA(const AProjectileA&); \
public:


#define Twaliens_Source_Twaliens_ProjectileA_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileA(AProjectileA&&); \
	NO_API AProjectileA(const AProjectileA&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileA); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileA); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileA)


#define Twaliens_Source_Twaliens_ProjectileA_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AProjectileA, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AProjectileA, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AProjectileA, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AProjectileA, damage); } \
	FORCEINLINE static uint32 __PPO__AllowedTagsToDamage() { return STRUCT_OFFSET(AProjectileA, AllowedTagsToDamage); }


#define Twaliens_Source_Twaliens_ProjectileA_h_13_PROLOG
#define Twaliens_Source_Twaliens_ProjectileA_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_ProjectileA_h_16_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_ProjectileA_h_16_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_ProjectileA_h_16_INCLASS \
	Twaliens_Source_Twaliens_ProjectileA_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_ProjectileA_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_ProjectileA_h_16_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_ProjectileA_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_ProjectileA_h_16_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_ProjectileA_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_ProjectileA_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
