// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TWALIENS_Dustpan_generated_h
#error "Dustpan.generated.h already included, missing '#pragma once' in Dustpan.h"
#endif
#define TWALIENS_Dustpan_generated_h

#define Twaliens_Source_Twaliens_Dustpan_h_9_DELEGATE \
struct _Script_Twaliens_eventActorHasBeenSucked_Parms \
{ \
	AActor* SuckedActor; \
}; \
static inline void FActorHasBeenSucked_DelegateWrapper(const FMulticastScriptDelegate& ActorHasBeenSucked, AActor* SuckedActor) \
{ \
	_Script_Twaliens_eventActorHasBeenSucked_Parms Parms; \
	Parms.SuckedActor=SuckedActor; \
	ActorHasBeenSucked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Twaliens_Source_Twaliens_Dustpan_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Suck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnObjectExitToArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnObjectExitToArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnObjectEnterToArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnObjectEnterToArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_Dustpan_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSuck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Suck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnObjectExitToArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnObjectExitToArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnObjectEnterToArea) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnObjectEnterToArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Twaliens_Source_Twaliens_Dustpan_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDustpan(); \
	friend struct Z_Construct_UClass_UDustpan_Statics; \
public: \
	DECLARE_CLASS(UDustpan, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(UDustpan)


#define Twaliens_Source_Twaliens_Dustpan_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDustpan(); \
	friend struct Z_Construct_UClass_UDustpan_Statics; \
public: \
	DECLARE_CLASS(UDustpan, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(UDustpan)


#define Twaliens_Source_Twaliens_Dustpan_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDustpan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDustpan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDustpan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDustpan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDustpan(UDustpan&&); \
	NO_API UDustpan(const UDustpan&); \
public:


#define Twaliens_Source_Twaliens_Dustpan_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDustpan(UDustpan&&); \
	NO_API UDustpan(const UDustpan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDustpan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDustpan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDustpan)


#define Twaliens_Source_Twaliens_Dustpan_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuckArea() { return STRUCT_OFFSET(UDustpan, SuckArea); } \
	FORCEINLINE static uint32 __PPO__SuckVelocity() { return STRUCT_OFFSET(UDustpan, SuckVelocity); } \
	FORCEINLINE static uint32 __PPO__SuckedDistance() { return STRUCT_OFFSET(UDustpan, SuckedDistance); } \
	FORCEINLINE static uint32 __PPO__SuckRadio() { return STRUCT_OFFSET(UDustpan, SuckRadio); }


#define Twaliens_Source_Twaliens_Dustpan_h_11_PROLOG
#define Twaliens_Source_Twaliens_Dustpan_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Dustpan_h_14_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Dustpan_h_14_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_Dustpan_h_14_INCLASS \
	Twaliens_Source_Twaliens_Dustpan_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_Dustpan_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Dustpan_h_14_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Dustpan_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Dustpan_h_14_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Dustpan_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_Dustpan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
