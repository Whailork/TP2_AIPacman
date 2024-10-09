// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/GhostCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostCharacter() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_AEntityCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhostCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhostCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AGhostCharacter
void AGhostCharacter::StaticRegisterNativesAGhostCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhostCharacter);
UClass* Z_Construct_UClass_AGhostCharacter_NoRegister()
{
	return AGhostCharacter::StaticClass();
}
struct Z_Construct_UClass_AGhostCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/GhostCharacter.h" },
		{ "ModuleRelativePath", "Public/Ghost/GhostCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGhostCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEntityCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhostCharacter_Statics::ClassParams = {
	&AGhostCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGhostCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGhostCharacter()
{
	if (!Z_Registration_Info_UClass_AGhostCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhostCharacter.OuterSingleton, Z_Construct_UClass_AGhostCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGhostCharacter.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AGhostCharacter>()
{
	return AGhostCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostCharacter);
AGhostCharacter::~AGhostCharacter() {}
// End Class AGhostCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGhostCharacter, AGhostCharacter::StaticClass, TEXT("AGhostCharacter"), &Z_Registration_Info_UClass_AGhostCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhostCharacter), 1586050907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_606664507(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
