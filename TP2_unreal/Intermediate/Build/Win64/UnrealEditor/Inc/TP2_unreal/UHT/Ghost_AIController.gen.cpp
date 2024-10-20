// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/AiController/Ghost_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhost_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost_AIController();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost_AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AGhost_AIController
void AGhost_AIController::StaticRegisterNativesAGhost_AIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhost_AIController);
UClass* Z_Construct_UClass_AGhost_AIController_NoRegister()
{
	return AGhost_AIController::StaticClass();
}
struct Z_Construct_UClass_AGhost_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AiController/Ghost_AIController.h" },
		{ "ModuleRelativePath", "Public/AiController/Ghost_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AiController/Ghost_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhost_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhost_AIController_Statics::NewProp_BehaviorTreeComponent = { "BehaviorTreeComponent", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhost_AIController, BehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeComponent_MetaData), NewProp_BehaviorTreeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhost_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhost_AIController_Statics::NewProp_BehaviorTreeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGhost_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhost_AIController_Statics::ClassParams = {
	&AGhost_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGhost_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGhost_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGhost_AIController()
{
	if (!Z_Registration_Info_UClass_AGhost_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhost_AIController.OuterSingleton, Z_Construct_UClass_AGhost_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGhost_AIController.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AGhost_AIController>()
{
	return AGhost_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGhost_AIController);
AGhost_AIController::~AGhost_AIController() {}
// End Class AGhost_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_Ghost_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGhost_AIController, AGhost_AIController::StaticClass, TEXT("AGhost_AIController"), &Z_Registration_Info_UClass_AGhost_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhost_AIController), 3339747450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_Ghost_AIController_h_2573452950(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_Ghost_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AiController_Ghost_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
