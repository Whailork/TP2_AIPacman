// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/PacmanAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacmanAIController();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacmanAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class APacmanAIController
void APacmanAIController::StaticRegisterNativesAPacmanAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanAIController);
UClass* Z_Construct_UClass_APacmanAIController_NoRegister()
{
	return APacmanAIController::StaticClass();
}
struct Z_Construct_UClass_APacmanAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PacmanAIController.h" },
		{ "ModuleRelativePath", "Public/PacmanAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APacmanAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacmanAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanAIController_Statics::ClassParams = {
	&APacmanAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacmanAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APacmanAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APacmanAIController()
{
	if (!Z_Registration_Info_UClass_APacmanAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanAIController.OuterSingleton, Z_Construct_UClass_APacmanAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APacmanAIController.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<APacmanAIController>()
{
	return APacmanAIController::StaticClass();
}
APacmanAIController::APacmanAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanAIController);
APacmanAIController::~APacmanAIController() {}
// End Class APacmanAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APacmanAIController, APacmanAIController::StaticClass, TEXT("APacmanAIController"), &Z_Registration_Info_UClass_APacmanAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanAIController), 1563980971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_526067172(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_PacmanAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
