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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_ACornerActor();
TP2_UNREAL_API UClass* Z_Construct_UClass_ACornerActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class ACornerActor Function OnOverlap
struct Z_Construct_UFunction_ACornerActor_OnOverlap_Statics
{
	struct CornerActor_eventOnOverlap_Parms
	{
		AActor* MyActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CornerActor_eventOnOverlap_Parms, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CornerActor_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::NewProp_MyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACornerActor, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::CornerActor_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::CornerActor_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACornerActor_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACornerActor_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACornerActor::execOnOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_MyActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_MyActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ACornerActor Function OnOverlap

// Begin Class ACornerActor
void ACornerActor::StaticRegisterNativesACornerActor()
{
	UClass* Class = ACornerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlap", &ACornerActor::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueOnContact_MetaData[] = {
		{ "Category", "CornerActor" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighborsArray_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightCorner_MetaData[] = {
		{ "Category", "Corner" },
		{ "ModuleRelativePath", "Public/Corner/CornerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionActuelle;
	static void NewProp_ContinueOnContact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ContinueOnContact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NeighborsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighborsArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCorner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACornerActor_OnOverlap, "OnOverlap" }, // 4032095985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACornerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_PositionActuelle = { "PositionActuelle", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, PositionActuelle), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionActuelle_MetaData), NewProp_PositionActuelle_MetaData) };
void Z_Construct_UClass_ACornerActor_Statics::NewProp_ContinueOnContact_SetBit(void* Obj)
{
	((ACornerActor*)Obj)->ContinueOnContact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_ContinueOnContact = { "ContinueOnContact", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACornerActor), &Z_Construct_UClass_ACornerActor_Statics::NewProp_ContinueOnContact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueOnContact_MetaData), NewProp_ContinueOnContact_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_NeighborsArray_Inner = { "NeighborsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_NeighborsArray = { "NeighborsArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, NeighborsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighborsArray_MetaData), NewProp_NeighborsArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_UpCorner = { "UpCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, UpCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpCorner_MetaData), NewProp_UpCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_DownCorner = { "DownCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, DownCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownCorner_MetaData), NewProp_DownCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_LeftCorner = { "LeftCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, LeftCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftCorner_MetaData), NewProp_LeftCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACornerActor_Statics::NewProp_RightCorner = { "RightCorner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACornerActor, RightCorner), Z_Construct_UClass_ACornerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightCorner_MetaData), NewProp_RightCorner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACornerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_PositionActuelle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_ContinueOnContact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_NeighborsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_NeighborsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_UpCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_DownCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_LeftCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACornerActor_Statics::NewProp_RightCorner,
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
	FuncInfo,
	Z_Construct_UClass_ACornerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACornerActor, ACornerActor::StaticClass, TEXT("ACornerActor"), &Z_Registration_Info_UClass_ACornerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACornerActor), 1508477923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_1496319877(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Corner_CornerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
