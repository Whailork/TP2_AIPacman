// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/AEatable/SuperPacGomme.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperPacGomme() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_AAEatables();
TP2_UNREAL_API UClass* Z_Construct_UClass_ASuperPacGomme();
TP2_UNREAL_API UClass* Z_Construct_UClass_ASuperPacGomme_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ASuperPacGomme
void ASuperPacGomme::StaticRegisterNativesASuperPacGomme()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperPacGomme);
UClass* Z_Construct_UClass_ASuperPacGomme_NoRegister()
{
	return ASuperPacGomme::StaticClass();
}
struct Z_Construct_UClass_ASuperPacGomme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AEatable/SuperPacGomme.h" },
		{ "ModuleRelativePath", "Public/AEatable/SuperPacGomme.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperPacGomme>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASuperPacGomme_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAEatables,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperPacGomme_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperPacGomme_Statics::ClassParams = {
	&ASuperPacGomme::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASuperPacGomme_Statics::Class_MetaDataParams), Z_Construct_UClass_ASuperPacGomme_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASuperPacGomme()
{
	if (!Z_Registration_Info_UClass_ASuperPacGomme.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperPacGomme.OuterSingleton, Z_Construct_UClass_ASuperPacGomme_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASuperPacGomme.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ASuperPacGomme>()
{
	return ASuperPacGomme::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperPacGomme);
ASuperPacGomme::~ASuperPacGomme() {}
// End Class ASuperPacGomme

// Begin Registration
struct Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_AEatable_SuperPacGomme_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASuperPacGomme, ASuperPacGomme::StaticClass, TEXT("ASuperPacGomme"), &Z_Registration_Info_UClass_ASuperPacGomme, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperPacGomme), 615579386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_AEatable_SuperPacGomme_h_464802804(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_AEatable_SuperPacGomme_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_AEatable_SuperPacGomme_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
