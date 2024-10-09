// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/APlayerInputManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPlayerInputManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AAPlayerInputManager();
TP2_UNREAL_API UClass* Z_Construct_UClass_AAPlayerInputManager_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacMan_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AAPlayerInputManager
void AAPlayerInputManager::StaticRegisterNativesAAPlayerInputManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPlayerInputManager);
UClass* Z_Construct_UClass_AAPlayerInputManager_NoRegister()
{
	return AAPlayerInputManager::StaticClass();
}
struct Z_Construct_UClass_AAPlayerInputManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "APlayerInputManager.h" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pacman_MetaData[] = {
		{ "Category", "APlayerInputManager" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/APlayerInputManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pacman;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPlayerInputManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_pacman = { "pacman", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerInputManager, pacman), Z_Construct_UClass_APacMan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pacman_MetaData), NewProp_pacman_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerInputManager, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_UpAction = { "UpAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerInputManager, UpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAction_MetaData), NewProp_UpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_DownAction = { "DownAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerInputManager, DownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownAction_MetaData), NewProp_DownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_LeftAction = { "LeftAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerInputManager, LeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAction_MetaData), NewProp_LeftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_RightAction = { "RightAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerInputManager, RightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAction_MetaData), NewProp_RightAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAPlayerInputManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_pacman,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_UpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_DownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_LeftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerInputManager_Statics::NewProp_RightAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerInputManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAPlayerInputManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerInputManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPlayerInputManager_Statics::ClassParams = {
	&AAPlayerInputManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAPlayerInputManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerInputManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerInputManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPlayerInputManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAPlayerInputManager()
{
	if (!Z_Registration_Info_UClass_AAPlayerInputManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPlayerInputManager.OuterSingleton, Z_Construct_UClass_AAPlayerInputManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAPlayerInputManager.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AAPlayerInputManager>()
{
	return AAPlayerInputManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAPlayerInputManager);
AAPlayerInputManager::~AAPlayerInputManager() {}
// End Class AAPlayerInputManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_APlayerInputManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAPlayerInputManager, AAPlayerInputManager::StaticClass, TEXT("AAPlayerInputManager"), &Z_Registration_Info_UClass_AAPlayerInputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPlayerInputManager), 331079933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_APlayerInputManager_h_1702698466(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_APlayerInputManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_APlayerInputManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
