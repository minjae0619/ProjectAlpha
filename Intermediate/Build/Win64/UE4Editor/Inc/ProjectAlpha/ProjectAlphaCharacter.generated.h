// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTALPHA_ProjectAlphaCharacter_generated_h
#error "ProjectAlphaCharacter.generated.h already included, missing '#pragma once' in ProjectAlphaCharacter.h"
#endif
#define PROJECTALPHA_ProjectAlphaCharacter_generated_h

#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_SPARSE_DATA
#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_RPC_WRAPPERS
#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectAlphaCharacter(); \
	friend struct Z_Construct_UClass_AProjectAlphaCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectAlphaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectAlpha"), NO_API) \
	DECLARE_SERIALIZER(AProjectAlphaCharacter)


#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectAlphaCharacter(); \
	friend struct Z_Construct_UClass_AProjectAlphaCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectAlphaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectAlpha"), NO_API) \
	DECLARE_SERIALIZER(AProjectAlphaCharacter)


#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectAlphaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectAlphaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectAlphaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectAlphaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectAlphaCharacter(AProjectAlphaCharacter&&); \
	NO_API AProjectAlphaCharacter(const AProjectAlphaCharacter&); \
public:


#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectAlphaCharacter(AProjectAlphaCharacter&&); \
	NO_API AProjectAlphaCharacter(const AProjectAlphaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectAlphaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectAlphaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectAlphaCharacter)


#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectAlphaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AProjectAlphaCharacter, FollowCamera); }


#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_9_PROLOG
#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_SPARSE_DATA \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_RPC_WRAPPERS \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_INCLASS \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_SPARSE_DATA \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTALPHA_API UClass* StaticClass<class AProjectAlphaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAlpha_Source_ProjectAlpha_ProjectAlphaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
