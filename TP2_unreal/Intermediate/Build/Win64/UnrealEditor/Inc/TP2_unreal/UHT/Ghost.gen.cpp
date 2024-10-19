// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/Ghost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhost() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AEntityCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AGhost Function SetOnScatterMode
struct Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics
{
	struct Ghost_eventSetOnScatterMode_Parms
	{
		bool isOnScatterMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isOnScatterMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnScatterMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::NewProp_isOnScatterMode_SetBit(void* Obj)
{
	((Ghost_eventSetOnScatterMode_Parms*)Obj)->isOnScatterMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::NewProp_isOnScatterMode = { "isOnScatterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventSetOnScatterMode_Parms), &Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::NewProp_isOnScatterMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::NewProp_isOnScatterMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "SetOnScatterMode", nullptr, nullptr, Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::Ghost_eventSetOnScatterMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::Ghost_eventSetOnScatterMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_SetOnScatterMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_SetOnScatterMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execSetOnScatterMode)
{
	P_GET_UBOOL(Z_Param_isOnScatterMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnScatterMode(Z_Param_isOnScatterMode);
	P_NATIVE_END;
}
// End Class AGhost Function SetOnScatterMode

// Begin Class AGhost
void AGhost::StaticRegisterNativesAGhost()
{
	UClass* Class = AGhost::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetOnScatterMode", &AGhost::execSetOnScatterMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhost);
UClass* Z_Construct_UClass_AGhost_NoRegister()
{
	return AGhost::StaticClass();
}
struct Z_Construct_UClass_AGhost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/Ghost.h" },
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostAI_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostAI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhost_SetOnScatterMode, "SetOnScatterMode" }, // 4237152404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhost_Statics::NewProp_GhostAI = { "GhostAI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhost, GhostAI), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostAI_MetaData), NewProp_GhostAI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhost_Statics::NewProp_GhostAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGhost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEntityCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhost_Statics::ClassParams = {
	&AGhost::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGhost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhost_Statics::Class_MetaDataParams), Z_Construct_UClass_AGhost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGhost()
{
	if (!Z_Registration_Info_UClass_AGhost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhost.OuterSingleton, Z_Construct_UClass_AGhost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGhost.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<AGhost>()
{
	return AGhost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGhost);
AGhost::~AGhost() {}
// End Class AGhost

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGhost, AGhost::StaticClass, TEXT("AGhost"), &Z_Registration_Info_UClass_AGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhost), 3278543937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_3063612250(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
