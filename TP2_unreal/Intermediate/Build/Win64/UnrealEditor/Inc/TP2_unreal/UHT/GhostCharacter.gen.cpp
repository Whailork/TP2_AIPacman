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
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AEntityCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhostCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhostCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AGhostCharacter Function OnCatchOverlapBegin
struct Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics
{
	struct GhostCharacter_eventOnCatchOverlapBegin_Parms
	{
		AActor* MyActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/GhostCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostCharacter_eventOnCatchOverlapBegin_Parms, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostCharacter_eventOnCatchOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::NewProp_MyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostCharacter, nullptr, "OnCatchOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::GhostCharacter_eventOnCatchOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::GhostCharacter_eventOnCatchOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhostCharacter::execOnCatchOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_MyActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCatchOverlapBegin(Z_Param_MyActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AGhostCharacter Function OnCatchOverlapBegin

// Begin Class AGhostCharacter
void AGhostCharacter::StaticRegisterNativesAGhostCharacter()
{
	UClass* Class = AGhostCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCatchOverlapBegin", &AGhostCharacter::execOnCatchOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostAI_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ghost/GhostCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostAI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhostCharacter_OnCatchOverlapBegin, "OnCatchOverlapBegin" }, // 1975609719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostCharacter_Statics::NewProp_GhostAI = { "GhostAI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostCharacter, GhostAI), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostAI_MetaData), NewProp_GhostAI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhostCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostCharacter_Statics::NewProp_GhostAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostCharacter_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AGhostCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGhostCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_AGhostCharacter, AGhostCharacter::StaticClass, TEXT("AGhostCharacter"), &Z_Registration_Info_UClass_AGhostCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhostCharacter), 4066216432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_22068027(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_GhostCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
