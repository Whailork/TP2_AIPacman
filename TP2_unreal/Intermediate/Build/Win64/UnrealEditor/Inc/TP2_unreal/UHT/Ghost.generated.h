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

#define FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOnScatterMode);


#define FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhost(); \
	friend struct Z_Construct_UClass_AGhost_Statics; \
public: \
	DECLARE_CLASS(AGhost, AEntityCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP2_unreal"), NO_API) \
	DECLARE_SERIALIZER(AGhost)


#define FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGhost(AGhost&&); \
	AGhost(const AGhost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhost) \
	NO_API virtual ~AGhost();


#define FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_10_PROLOG
#define FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_INCLASS_NO_PURE_DECLS \
	FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP2_UNREAL_API UClass* StaticClass<class AGhost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
