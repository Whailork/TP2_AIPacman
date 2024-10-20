// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ghost/Ghost.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TP2_UNREAL_Ghost_generated_h
#error "Ghost.generated.h already included, missing '#pragma once' in Ghost.h"
#endif
#define TP2_UNREAL_Ghost_generated_h

#define FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execgetChaseMode); \
	DECLARE_FUNCTION(execgetScatterMode); \
	DECLARE_FUNCTION(execgetIsDead); \
	DECLARE_FUNCTION(execgetFleeMode); \
	DECLARE_FUNCTION(execsetDeath); \
	DECLARE_FUNCTION(execsetFleeMode); \
	DECLARE_FUNCTION(execSetOnChaseMode); \
	DECLARE_FUNCTION(execSetOnScatterMode); \
	DECLARE_FUNCTION(execOnChaseMode); \
	DECLARE_FUNCTION(execOnFleeMode); \
	DECLARE_FUNCTION(execOnScatterMode);


#define FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhost(); \
	friend struct Z_Construct_UClass_AGhost_Statics; \
public: \
	DECLARE_CLASS(AGhost, AEntityCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP2_unreal"), NO_API) \
	DECLARE_SERIALIZER(AGhost)


#define FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGhost(AGhost&&); \
	AGhost(const AGhost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhost) \
	NO_API virtual ~AGhost();


#define FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_12_PROLOG
#define FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_INCLASS_NO_PURE_DECLS \
	FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP2_UNREAL_API UClass* StaticClass<class AGhost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
