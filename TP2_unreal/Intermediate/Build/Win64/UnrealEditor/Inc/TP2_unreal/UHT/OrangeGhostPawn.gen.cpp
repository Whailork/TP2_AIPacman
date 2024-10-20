// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/OrangeGhostPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrangeGhostPawn() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
TP2_UNREAL_API UClass* Z_Construct_UClass_AOrangeGhostPawn();
TP2_UNREAL_API UClass* Z_Construct_UClass_AOrangeGhostPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AOrangeGhostPawn
void AOrangeGhostPawn::StaticRegisterNativesAOrangeGhostPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrangeGhostPawn);
UClass* Z_Construct_UClass_AOrangeGhostPawn_NoRegister()
{
	return AOrangeGhostPawn::StaticClass();
}
struct Z_Construct_UClass_AOrangeGhostPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/OrangeGhostPawn.h" },
		{ "ModuleRelativePath", "Public/Ghost/OrangeGhostPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrangeGhostPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOrangeGhostPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGhost,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrangeGhostPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrangeGhostPawn_Statics::ClassParams = {
	&AOrangeGhostPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrangeGhostPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrangeGhostPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOrangeGhostPawn()
{
	if (!Z_Registration_Info_UClass_AOrangeGhostPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrangeGhostPawn.OuterSingleton, Z_Construct_UClass_AOrangeGhostPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrangeGhostPawn.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AOrangeGhostPawn>()
{
	return AOrangeGhostPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOrangeGhostPawn);
AOrangeGhostPawn::~AOrangeGhostPawn() {}
// End Class AOrangeGhostPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_OrangeGhostPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrangeGhostPawn, AOrangeGhostPawn::StaticClass, TEXT("AOrangeGhostPawn"), &Z_Registration_Info_UClass_AOrangeGhostPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrangeGhostPawn), 1866292156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_OrangeGhostPawn_h_846082171(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_OrangeGhostPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_OrangeGhostPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
