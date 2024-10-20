// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/AEatable/APacGomme.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPacGomme() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_AAEatables();
TP2_UNREAL_API UClass* Z_Construct_UClass_AAPacGomme();
TP2_UNREAL_API UClass* Z_Construct_UClass_AAPacGomme_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AAPacGomme
void AAPacGomme::StaticRegisterNativesAAPacGomme()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPacGomme);
UClass* Z_Construct_UClass_AAPacGomme_NoRegister()
{
	return AAPacGomme::StaticClass();
}
struct Z_Construct_UClass_AAPacGomme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AEatable/APacGomme.h" },
		{ "ModuleRelativePath", "Public/AEatable/APacGomme.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPacGomme>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAPacGomme_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAEatables,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPacGomme_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPacGomme_Statics::ClassParams = {
	&AAPacGomme::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPacGomme_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPacGomme_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAPacGomme()
{
	if (!Z_Registration_Info_UClass_AAPacGomme.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPacGomme.OuterSingleton, Z_Construct_UClass_AAPacGomme_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAPacGomme.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AAPacGomme>()
{
	return AAPacGomme::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAPacGomme);
AAPacGomme::~AAPacGomme() {}
// End Class AAPacGomme

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AEatable_APacGomme_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAPacGomme, AAPacGomme::StaticClass, TEXT("AAPacGomme"), &Z_Registration_Info_UClass_AAPacGomme, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPacGomme), 3683676651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AEatable_APacGomme_h_3439693743(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AEatable_APacGomme_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_AEatable_APacGomme_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
