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
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_ACornerActor_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AEntityCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacMan();
TP2_UNREAL_API UClass* Z_Construct_UClass_APacMan_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class APacMan Function OnCatchOverlapBegin
struct Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics
{
	struct PacMan_eventOnCatchOverlapBegin_Parms
	{
		AActor* MyActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PacMan_eventOnCatchOverlapBegin_Parms, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PacMan_eventOnCatchOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::NewProp_MyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacMan, nullptr, "OnCatchOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::PacMan_eventOnCatchOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::PacMan_eventOnCatchOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APacMan_OnCatchOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacMan_OnCatchOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APacMan::execOnCatchOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_MyActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCatchOverlapBegin(Z_Param_MyActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class APacMan Function OnCatchOverlapBegin

// Begin Class APacMan
void APacMan::StaticRegisterNativesAPacMan()
{
	UClass* Class = APacMan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCatchOverlapBegin", &APacMan::execOnCatchOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere)\n\x09""class UBoxComponent* BoxCollision;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""class UStaticMeshComponent* StaticMesh;\n\n\x09\n\x09UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = \"true\"))\n\x09UPawnMovementComponent* MovementComponent;*/" },
#endif
		{ "ModuleRelativePath", "Public/PacMan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\n       class UBoxComponent* BoxCollision;\n\n       UPROPERTY(EditAnywhere)\n       class UStaticMeshComponent* StaticMesh;\n\n\n       UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = \"true\"))\n       UPawnMovementComponent* MovementComponent;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nbEaten_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/PacMan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PacMan.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAI;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nbEaten;
	static const UECodeGen_Private::FIntPropertyParams NewProp_score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APacMan_OnCatchOverlapBegin, "OnCatchOverlapBegin" }, // 2515277029
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_PlayerAI = { "PlayerAI", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, PlayerAI), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAI_MetaData), NewProp_PlayerAI_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_nbEaten = { "nbEaten", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, nbEaten), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nbEaten_MetaData), NewProp_nbEaten_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_score_MetaData), NewProp_score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_UpCorner = { "UpCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, UpCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpCorner_MetaData), NewProp_UpCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_DownCorner = { "DownCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, DownCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownCorner_MetaData), NewProp_DownCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_LeftCorner = { "LeftCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, LeftCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftCorner_MetaData), NewProp_LeftCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_RightCorner = { "RightCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, RightCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightCorner_MetaData), NewProp_RightCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, CurrentTarget), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, PreviousTarget), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTarget_MetaData), NewProp_PreviousTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_UpAction = { "UpAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, UpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAction_MetaData), NewProp_UpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_DownAction = { "DownAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, DownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownAction_MetaData), NewProp_DownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_LeftAction = { "LeftAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, LeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAction_MetaData), NewProp_LeftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan_Statics::NewProp_RightAction = { "RightAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan, RightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAction_MetaData), NewProp_RightAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacMan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_PlayerAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_nbEaten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_UpCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_DownCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_LeftCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_RightCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan_Statics::NewProp_PreviousTarget,
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
	FuncInfo,
	Z_Construct_UClass_APacMan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APacMan, APacMan::StaticClass, TEXT("APacMan"), &Z_Registration_Info_UClass_APacMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacMan), 202410600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_1239081928(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_gitKrakenRepos_TP2_AIPacman_TP2_unreal_Source_TP2_unreal_Public_PacMan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
