// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/PinkGhostPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePinkGhostPawn() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
TP2_UNREAL_API UClass* Z_Construct_UClass_APinkGhostPawn();
TP2_UNREAL_API UClass* Z_Construct_UClass_APinkGhostPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class APinkGhostPawn Function InFleeMode
struct Z_Construct_UFunction_APinkGhostPawn_InFleeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/PinkGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APinkGhostPawn_InFleeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APinkGhostPawn, nullptr, "InFleeMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APinkGhostPawn_InFleeMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APinkGhostPawn_InFleeMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APinkGhostPawn_InFleeMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APinkGhostPawn_InFleeMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APinkGhostPawn::execInFleeMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InFleeMode();
	P_NATIVE_END;
}
// End Class APinkGhostPawn Function InFleeMode

// Begin Class APinkGhostPawn Function OnChaseMode
struct Z_Construct_UFunction_APinkGhostPawn_OnChaseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/PinkGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APinkGhostPawn_OnChaseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APinkGhostPawn, nullptr, "OnChaseMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APinkGhostPawn_OnChaseMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APinkGhostPawn_OnChaseMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APinkGhostPawn_OnChaseMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APinkGhostPawn_OnChaseMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APinkGhostPawn::execOnChaseMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChaseMode();
	P_NATIVE_END;
}
// End Class APinkGhostPawn Function OnChaseMode

// Begin Class APinkGhostPawn Function OnScatterMode
struct Z_Construct_UFunction_APinkGhostPawn_OnScatterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/PinkGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APinkGhostPawn_OnScatterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APinkGhostPawn, nullptr, "OnScatterMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APinkGhostPawn_OnScatterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APinkGhostPawn_OnScatterMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APinkGhostPawn_OnScatterMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APinkGhostPawn_OnScatterMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APinkGhostPawn::execOnScatterMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScatterMode();
	P_NATIVE_END;
}
// End Class APinkGhostPawn Function OnScatterMode

// Begin Class APinkGhostPawn
void APinkGhostPawn::StaticRegisterNativesAPinkGhostPawn()
{
	UClass* Class = APinkGhostPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InFleeMode", &APinkGhostPawn::execInFleeMode },
		{ "OnChaseMode", &APinkGhostPawn::execOnChaseMode },
		{ "OnScatterMode", &APinkGhostPawn::execOnScatterMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APinkGhostPawn);
UClass* Z_Construct_UClass_APinkGhostPawn_NoRegister()
{
	return APinkGhostPawn::StaticClass();
}
struct Z_Construct_UClass_APinkGhostPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/PinkGhostPawn.h" },
		{ "ModuleRelativePath", "Public/Ghost/PinkGhostPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APinkGhostPawn_InFleeMode, "InFleeMode" }, // 3317969437
		{ &Z_Construct_UFunction_APinkGhostPawn_OnChaseMode, "OnChaseMode" }, // 125140692
		{ &Z_Construct_UFunction_APinkGhostPawn_OnScatterMode, "OnScatterMode" }, // 386152597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APinkGhostPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APinkGhostPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGhost,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APinkGhostPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APinkGhostPawn_Statics::ClassParams = {
	&APinkGhostPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APinkGhostPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APinkGhostPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APinkGhostPawn()
{
	if (!Z_Registration_Info_UClass_APinkGhostPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APinkGhostPawn.OuterSingleton, Z_Construct_UClass_APinkGhostPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APinkGhostPawn.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<APinkGhostPawn>()
{
	return APinkGhostPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APinkGhostPawn);
APinkGhostPawn::~APinkGhostPawn() {}
// End Class APinkGhostPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_PinkGhostPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APinkGhostPawn, APinkGhostPawn::StaticClass, TEXT("APinkGhostPawn"), &Z_Registration_Info_UClass_APinkGhostPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APinkGhostPawn), 471224091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_PinkGhostPawn_h_2466898093(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_PinkGhostPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_PinkGhostPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
