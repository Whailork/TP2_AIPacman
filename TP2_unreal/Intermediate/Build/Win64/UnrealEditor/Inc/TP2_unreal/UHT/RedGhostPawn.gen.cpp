// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/RedGhostPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedGhostPawn() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
TP2_UNREAL_API UClass* Z_Construct_UClass_ARedGhostPawn();
TP2_UNREAL_API UClass* Z_Construct_UClass_ARedGhostPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ARedGhostPawn
void ARedGhostPawn::StaticRegisterNativesARedGhostPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARedGhostPawn);
UClass* Z_Construct_UClass_ARedGhostPawn_NoRegister()
{
	return ARedGhostPawn::StaticClass();
}
struct Z_Construct_UClass_ARedGhostPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/RedGhostPawn.h" },
		{ "ModuleRelativePath", "Public/Ghost/RedGhostPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Ghost/RedGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedGhostPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARedGhostPawn_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARedGhostPawn, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeAsset_MetaData), NewProp_TreeAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARedGhostPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARedGhostPawn_Statics::NewProp_TreeAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARedGhostPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARedGhostPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGhost,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARedGhostPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARedGhostPawn_Statics::ClassParams = {
	&ARedGhostPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARedGhostPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARedGhostPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARedGhostPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ARedGhostPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARedGhostPawn()
{
	if (!Z_Registration_Info_UClass_ARedGhostPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARedGhostPawn.OuterSingleton, Z_Construct_UClass_ARedGhostPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARedGhostPawn.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ARedGhostPawn>()
{
	return ARedGhostPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARedGhostPawn);
ARedGhostPawn::~ARedGhostPawn() {}
// End Class ARedGhostPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARedGhostPawn, ARedGhostPawn::StaticClass, TEXT("ARedGhostPawn"), &Z_Registration_Info_UClass_ARedGhostPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARedGhostPawn), 1802315546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_1437992811(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
