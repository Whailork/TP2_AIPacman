// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Map/Wall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TP2_UNREAL_API UClass* Z_Construct_UClass_AWall();
TP2_UNREAL_API UClass* Z_Construct_UClass_AWall_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AWall
void AWall::StaticRegisterNativesAWall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWall);
UClass* Z_Construct_UClass_AWall_NoRegister()
{
	return AWall::StaticClass();
}
struct Z_Construct_UClass_AWall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/Wall.h" },
		{ "ModuleRelativePath", "Public/Map/Wall.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWall_Statics::ClassParams = {
	&AWall::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams), Z_Construct_UClass_AWall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWall()
{
	if (!Z_Registration_Info_UClass_AWall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWall.OuterSingleton, Z_Construct_UClass_AWall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWall.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AWall>()
{
	return AWall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWall);
AWall::~AWall() {}
// End Class AWall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Map_Wall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWall, AWall::StaticClass, TEXT("AWall"), &Z_Registration_Info_UClass_AWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWall), 1932277093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Map_Wall_h_1808795867(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Map_Wall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Olorae_TP2_IA_jeu_video_TP2_unreal_Source_TP2_unreal_Public_Map_Wall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
