// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWALIENS_Camera_generated_h
#error "Camera.generated.h already included, missing '#pragma once' in Camera.h"
#endif
#define TWALIENS_Camera_generated_h

#define Twaliens_Source_Twaliens_Camera_h_18_RPC_WRAPPERS
#define Twaliens_Source_Twaliens_Camera_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Twaliens_Source_Twaliens_Camera_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ACamera)


#define Twaliens_Source_Twaliens_Camera_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Twaliens"), NO_API) \
	DECLARE_SERIALIZER(ACamera)


#define Twaliens_Source_Twaliens_Camera_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera(ACamera&&); \
	NO_API ACamera(const ACamera&); \
public:


#define Twaliens_Source_Twaliens_Camera_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera(ACamera&&); \
	NO_API ACamera(const ACamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera)


#define Twaliens_Source_Twaliens_Camera_h_18_PRIVATE_PROPERTY_OFFSET
#define Twaliens_Source_Twaliens_Camera_h_15_PROLOG
#define Twaliens_Source_Twaliens_Camera_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Camera_h_18_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Camera_h_18_RPC_WRAPPERS \
	Twaliens_Source_Twaliens_Camera_h_18_INCLASS \
	Twaliens_Source_Twaliens_Camera_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Twaliens_Source_Twaliens_Camera_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Twaliens_Source_Twaliens_Camera_h_18_PRIVATE_PROPERTY_OFFSET \
	Twaliens_Source_Twaliens_Camera_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Camera_h_18_INCLASS_NO_PURE_DECLS \
	Twaliens_Source_Twaliens_Camera_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Twaliens_Source_Twaliens_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
