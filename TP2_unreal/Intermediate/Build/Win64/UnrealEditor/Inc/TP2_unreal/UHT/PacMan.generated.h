// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TP2_UNREAL_PacMan_generated_h
#error "PacMan.generated.h already included, missing '#pragma once' in PacMan.h"
#endif
#define TP2_UNREAL_PacMan_generated_h

#define FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCatchOverlapBegin); \
	DECLARE_FUNCTION(execstopInFleeMode); \
	DECLARE_FUNCTION(execgetScore); \
	DECLARE_FUNCTION(execgetVie); \
	DECLARE_FUNCTION(execGameSucces);


#define FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacMan(); \
	friend struct Z_Construct_UClass_APacMan_Statics; \
public: \
	DECLARE_CLASS(APacMan, AEntityCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP2_unreal"), NO_API) \
	DECLARE_SERIALIZER(APacMan)


#define FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APacMan(APacMan&&); \
	APacMan(const APacMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacMan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacMan) \
	NO_API virtual ~APacMan();


#define FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_13_PROLOG
#define FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_INCLASS_NO_PURE_DECLS \
	FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP2_UNREAL_API UClass* StaticClass<class APacMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TP2_unreal_Source_TP2_unreal_Public_PacMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
