// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/AiController/BaseAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_ABaseAIController();
TP2_UNREAL_API UClass* Z_Construct_UClass_ABaseAIController_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacMan_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ABaseAIController
void ABaseAIController::StaticRegisterNativesABaseAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseAIController);
UClass* Z_Construct_UClass_ABaseAIController_NoRegister()
{
	return ABaseAIController::StaticClass();
}
struct Z_Construct_UClass_ABaseAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AiController/BaseAIController.h" },
		{ "ModuleRelativePath", "Public/AiController/BaseAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacManReferenceAI_MetaData[] = {
		{ "Category", "PacManReferenceInAI" },
		{ "ModuleRelativePath", "Public/AiController/BaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AiController/BaseAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PacManReferenceAI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_PacManReferenceAI = { "PacManReferenceAI", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIController, PacManReferenceAI), Z_Construct_UClass_APacMan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacManReferenceAI_MetaData), NewProp_PacManReferenceAI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComponent_MetaData), NewProp_BehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_PacManReferenceAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_BehaviorTreeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseAIController_Statics::ClassParams = {
	&ABaseAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseAIController()
{
	if (!Z_Registration_Info_UClass_ABaseAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseAIController.OuterSingleton, Z_Construct_UClass_ABaseAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseAIController.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ABaseAIController>()
{
	return ABaseAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAIController);
ABaseAIController::~ABaseAIController() {}
// End Class ABaseAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_BaseAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseAIController, ABaseAIController::StaticClass, TEXT("ABaseAIController"), &Z_Registration_Info_UClass_ABaseAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseAIController), 531201289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_BaseAIController_h_3041791052(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_BaseAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_BaseAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
