// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_unreal/Public/Ghost/RedGhostPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedGhostPawn() {}

// Begin Cross Module References
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
TP2_UNREAL_API UClass* Z_Construct_UClass_ARedGhostPawn();
TP2_UNREAL_API UClass* Z_Construct_UClass_ARedGhostPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ARedGhostPawn Function OnChaseMode
struct Z_Construct_UFunction_ARedGhostPawn_OnChaseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/RedGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARedGhostPawn_OnChaseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARedGhostPawn, nullptr, "OnChaseMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARedGhostPawn_OnChaseMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARedGhostPawn_OnChaseMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARedGhostPawn_OnChaseMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARedGhostPawn_OnChaseMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARedGhostPawn::execOnChaseMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChaseMode();
	P_NATIVE_END;
}
// End Class ARedGhostPawn Function OnChaseMode

// Begin Class ARedGhostPawn Function OnFrightenedMode
struct Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/RedGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARedGhostPawn, nullptr, "OnFrightenedMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARedGhostPawn::execOnFrightenedMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFrightenedMode();
	P_NATIVE_END;
}
// End Class ARedGhostPawn Function OnFrightenedMode

// Begin Class ARedGhostPawn Function OnScatterMode
struct Z_Construct_UFunction_ARedGhostPawn_OnScatterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/RedGhostPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARedGhostPawn_OnScatterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARedGhostPawn, nullptr, "OnScatterMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARedGhostPawn_OnScatterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARedGhostPawn_OnScatterMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARedGhostPawn_OnScatterMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARedGhostPawn_OnScatterMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARedGhostPawn::execOnScatterMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScatterMode();
	P_NATIVE_END;
}
// End Class ARedGhostPawn Function OnScatterMode

// Begin Class ARedGhostPawn
void ARedGhostPawn::StaticRegisterNativesARedGhostPawn()
{
	UClass* Class = ARedGhostPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChaseMode", &ARedGhostPawn::execOnChaseMode },
		{ "OnFrightenedMode", &ARedGhostPawn::execOnFrightenedMode },
		{ "OnScatterMode", &ARedGhostPawn::execOnScatterMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARedGhostPawn);
UClass* Z_Construct_UClass_ARedGhostPawn_NoRegister()
{
	return ARedGhostPawn::StaticClass();
}
struct Z_Construct_UClass_ARedGhostPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ghost/RedGhostPawn.h" },
		{ "ModuleRelativePath", "Public/Ghost/RedGhostPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARedGhostPawn_OnChaseMode, "OnChaseMode" }, // 3007482793
		{ &Z_Construct_UFunction_ARedGhostPawn_OnFrightenedMode, "OnFrightenedMode" }, // 2345967271
		{ &Z_Construct_UFunction_ARedGhostPawn_OnScatterMode, "OnScatterMode" }, // 3345816101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedGhostPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARedGhostPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGhost,
	(UObject* (*)())Z_Construct_UPackage__Script_TP2_unreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARedGhostPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARedGhostPawn_Statics::ClassParams = {
	&ARedGhostPawn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARedGhostPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ARedGhostPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARedGhostPawn()
{
	if (!Z_Registration_Info_UClass_ARedGhostPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARedGhostPawn.OuterSingleton, Z_Construct_UClass_ARedGhostPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARedGhostPawn.OuterSingleton;
}
template<> TP2_UNREAL_API UClass* StaticClass<ARedGhostPawn>()
{
	return ARedGhostPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARedGhostPawn);
ARedGhostPawn::~ARedGhostPawn() {}
// End Class ARedGhostPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARedGhostPawn, ARedGhostPawn::StaticClass, TEXT("ARedGhostPawn"), &Z_Registration_Info_UClass_ARedGhostPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARedGhostPawn), 1369642159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_826268929(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Coralie_Desktop_Intelligence_artificielle_pour_le_jeu_video_TP2_Whailork_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_Ghost_RedGhostPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
