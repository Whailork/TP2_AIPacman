// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/BlueGhostPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueGhostPawn() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_ABlueGhostPawn();
TP2_UNREAL_API UClass* Z_Construct_UClass_ABlueGhostPawn_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ABlueGhostPawn
void ABlueGhostPawn::StaticRegisterNativesABlueGhostPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlueGhostPawn);
UClass* Z_Construct_UClass_ABlueGhostPawn_NoRegister()
{
	return ABlueGhostPawn::StaticClass();
}
struct Z_Construct_UClass_ABlueGhostPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/BlueGhostPawn.h" },
		{ "ModuleRelativePath", "Public/Ghost/BlueGhostPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlueGhostPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlueGhostPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGhost,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlueGhostPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlueGhostPawn_Statics::ClassParams = {
	&ABlueGhostPawn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlueGhostPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlueGhostPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlueGhostPawn()
{
	if (!Z_Registration_Info_UClass_ABlueGhostPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlueGhostPawn.OuterSingleton, Z_Construct_UClass_ABlueGhostPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlueGhostPawn.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ABlueGhostPawn>()
{
	return ABlueGhostPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlueGhostPawn);
ABlueGhostPawn::~ABlueGhostPawn() {}
// End Class ABlueGhostPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_BlueGhostPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlueGhostPawn, ABlueGhostPawn::StaticClass, TEXT("ABlueGhostPawn"), &Z_Registration_Info_UClass_ABlueGhostPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlueGhostPawn), 1322249460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_BlueGhostPawn_h_2424894364(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_BlueGhostPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_BlueGhostPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
