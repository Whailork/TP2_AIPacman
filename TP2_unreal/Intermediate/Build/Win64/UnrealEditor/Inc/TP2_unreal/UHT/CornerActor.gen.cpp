// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Corner/CornerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCornerActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
TP2_UNREAL_API UClass* Z_Construct_UClass_ACornerActor();
TP2_UNREAL_API UClass* Z_Construct_UClass_ACornerActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ACornerActor
void ACornerActor::StaticRegisterNativesACornerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACornerActor);
UClass* Z_Construct_UClass_ACornerActor_NoRegister()
{
	return ACornerActor::StaticClass();
}
struct Z_Construct_UClass_ACornerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Corner/CornerActor.h" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionActuelle_MetaData[] = {
		{ "Category", "CornerActor" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionActuelle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACornerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_PositionActuelle = { "PositionActuelle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, PositionActuelle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionActuelle_MetaData), NewProp_PositionActuelle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACornerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_PositionActuelle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACornerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACornerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACornerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACornerActor_Statics::ClassParams = {
	&ACornerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACornerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACornerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACornerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACornerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACornerActor()
{
	if (!Z_Registration_Info_UClass_ACornerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACornerActor.OuterSingleton, Z_Construct_UClass_ACornerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACornerActor.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ACornerActor>()
{
	return ACornerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACornerActor);
ACornerActor::~ACornerActor() {}
// End Class ACornerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACornerActor, ACornerActor::StaticClass, TEXT("ACornerActor"), &Z_Registration_Info_UClass_ACornerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACornerActor), 2059893510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_3882487019(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
