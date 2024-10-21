// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacmanAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TP2_UNREAL_PacmanAIController_generated_h
#error "PacmanAIController.generated.h already included, missing '#pragma once' in PacmanAIController.h"
#endif
#define TP2_UNREAL_PacmanAIController_generated_h

#define FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanAIController(); \
	friend struct Z_Construct_UClass_APacmanAIController_Statics; \
public: \
	DECLARE_CLASS(APacmanAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP2_unreal"), NO_API) \
	DECLARE_SERIALIZER(APacmanAIController)


#define FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APacmanAIController(APacmanAIController&&); \
	APacmanAIController(const APacmanAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanAIController) \
	NO_API virtual ~APacmanAIController();


#define FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_12_PROLOG
#define FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP2_UNREAL_API UClass* StaticClass<class APacmanAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
