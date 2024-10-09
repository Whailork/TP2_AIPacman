// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/TP2_unrealGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP2_unrealGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TP2_UNREAL_API UClass* Z_Construct_UClass_ATP2_unrealGameMode();
TP2_UNREAL_API UClass* Z_Construct_UClass_ATP2_unrealGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ATP2_unrealGameMode
void ATP2_unrealGameMode::StaticRegisterNativesATP2_unrealGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP2_unrealGameMode);
UClass* Z_Construct_UClass_ATP2_unrealGameMode_NoRegister()
{
	return ATP2_unrealGameMode::StaticClass();
}
struct Z_Construct_UClass_ATP2_unrealGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TP2_unrealGameMode.h" },
		{ "ModuleRelativePath", "TP2_unrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP2_unrealGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP2_unrealGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_unrealGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP2_unrealGameMode_Statics::ClassParams = {
	&ATP2_unrealGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_unrealGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP2_unrealGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP2_unrealGameMode()
{
	if (!Z_Registration_Info_UClass_ATP2_unrealGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP2_unrealGameMode.OuterSingleton, Z_Construct_UClass_ATP2_unrealGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP2_unrealGameMode.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ATP2_unrealGameMode>()
{
	return ATP2_unrealGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP2_unrealGameMode);
ATP2_unrealGameMode::~ATP2_unrealGameMode() {}
// End Class ATP2_unrealGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_TP2_unrealGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP2_unrealGameMode, ATP2_unrealGameMode::StaticClass, TEXT("ATP2_unrealGameMode"), &Z_Registration_Info_UClass_ATP2_unrealGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP2_unrealGameMode), 256498516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_TP2_unrealGameMode_h_233962761(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_TP2_unrealGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_TP2_unrealGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
