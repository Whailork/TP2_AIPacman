// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/PacMan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacMan() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_ACornerActor_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AEntityCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacMan();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacMan_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class APacMan
void APacMan::StaticRegisterNativesAPacMan()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacMan);
UClass* Z_Construct_UClass_APacMan_NoRegister()
{
	return APacMan::StaticClass();
}
struct Z_Construct_UClass_APacMan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacMan.h" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FVector Seek(FVector Target);\n" },
#endif
		{ "ModuleRelativePath", "Public/PacMan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FVector Seek(FVector Target);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_UpCorner = { "UpCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, UpCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpCorner_MetaData), NewProp_UpCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_DownCorner = { "DownCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, DownCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownCorner_MetaData), NewProp_DownCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_LeftCorner = { "LeftCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, LeftCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftCorner_MetaData), NewProp_LeftCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_RightCorner = { "RightCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, RightCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightCorner_MetaData), NewProp_RightCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, CurrentTarget), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_UpAction = { "UpAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, UpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAction_MetaData), NewProp_UpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_DownAction = { "DownAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, DownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownAction_MetaData), NewProp_DownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_LeftAction = { "LeftAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, LeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAction_MetaData), NewProp_LeftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_RightAction = { "RightAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, RightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAction_MetaData), NewProp_RightAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacMan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_UpCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_DownCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_LeftCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_RightCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_UpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_DownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_LeftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_RightAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APacMan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEntityCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APacMan_Statics::ClassParams = {
	&APacMan::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APacMan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APacMan_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan_Statics::Class_MetaDataParams), Z_Construct_UClass_APacMan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APacMan()
{
	if (!Z_Registration_Info_UClass_APacMan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacMan.OuterSingleton, Z_Construct_UClass_APacMan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APacMan.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<APacMan>()
{
	return APacMan::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APacMan);
APacMan::~APacMan() {}
// End Class APacMan

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APacMan, APacMan::StaticClass, TEXT("APacMan"), &Z_Registration_Info_UClass_APacMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacMan), 2540997503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_356308100(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
