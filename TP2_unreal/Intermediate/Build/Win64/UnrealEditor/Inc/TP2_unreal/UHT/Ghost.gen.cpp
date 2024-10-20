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
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_ABaseAIController_NoRegister();
TP2_UNREAL_API UClass* Z_Construct_UClass_AEntityCharacter();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost();
TP2_UNREAL_API UClass* Z_Construct_UClass_AGhost_NoRegister();
UPackage* Z_Construct_UPackage__Script_TP2_unreal();
// End Cross Module References

// Begin Class AGhost Function getChaseMode
struct Z_Construct_UFunction_AGhost_getChaseMode_Statics
{
	struct Ghost_eventgetChaseMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_getChaseMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ghost_eventgetChaseMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_getChaseMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventgetChaseMode_Parms), &Z_Construct_UFunction_AGhost_getChaseMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_getChaseMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_getChaseMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getChaseMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_getChaseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "getChaseMode", nullptr, nullptr, Z_Construct_UFunction_AGhost_getChaseMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getChaseMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_getChaseMode_Statics::Ghost_eventgetChaseMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getChaseMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_getChaseMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_getChaseMode_Statics::Ghost_eventgetChaseMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_getChaseMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_getChaseMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execgetChaseMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->getChaseMode();
	P_NATIVE_END;
}
// End Class AGhost Function getChaseMode

// Begin Class AGhost Function getFleeMode
struct Z_Construct_UFunction_AGhost_getFleeMode_Statics
{
	struct Ghost_eventgetFleeMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_getFleeMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ghost_eventgetFleeMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_getFleeMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventgetFleeMode_Parms), &Z_Construct_UFunction_AGhost_getFleeMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_getFleeMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_getFleeMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getFleeMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_getFleeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "getFleeMode", nullptr, nullptr, Z_Construct_UFunction_AGhost_getFleeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getFleeMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_getFleeMode_Statics::Ghost_eventgetFleeMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getFleeMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_getFleeMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_getFleeMode_Statics::Ghost_eventgetFleeMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_getFleeMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_getFleeMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execgetFleeMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->getFleeMode();
	P_NATIVE_END;
}
// End Class AGhost Function getFleeMode

// Begin Class AGhost Function getIsDead
struct Z_Construct_UFunction_AGhost_getIsDead_Statics
{
	struct Ghost_eventgetIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_getIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ghost_eventgetIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_getIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventgetIsDead_Parms), &Z_Construct_UFunction_AGhost_getIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_getIsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_getIsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getIsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_getIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "getIsDead", nullptr, nullptr, Z_Construct_UFunction_AGhost_getIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getIsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_getIsDead_Statics::Ghost_eventgetIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_getIsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_getIsDead_Statics::Ghost_eventgetIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_getIsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_getIsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execgetIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->getIsDead();
	P_NATIVE_END;
}
// End Class AGhost Function getIsDead

// Begin Class AGhost Function getScatterMode
struct Z_Construct_UFunction_AGhost_getScatterMode_Statics
{
	struct Ghost_eventgetScatterMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_getScatterMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ghost_eventgetScatterMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_getScatterMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventgetScatterMode_Parms), &Z_Construct_UFunction_AGhost_getScatterMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_getScatterMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_getScatterMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getScatterMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_getScatterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "getScatterMode", nullptr, nullptr, Z_Construct_UFunction_AGhost_getScatterMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getScatterMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_getScatterMode_Statics::Ghost_eventgetScatterMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_getScatterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_getScatterMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_getScatterMode_Statics::Ghost_eventgetScatterMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_getScatterMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_getScatterMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execgetScatterMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->getScatterMode();
	P_NATIVE_END;
}
// End Class AGhost Function getScatterMode

// Begin Class AGhost Function OnChaseMode
struct Z_Construct_UFunction_AGhost_OnChaseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_OnChaseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "OnChaseMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_OnChaseMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_OnChaseMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGhost_OnChaseMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_OnChaseMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execOnChaseMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChaseMode();
	P_NATIVE_END;
}
// End Class AGhost Function OnChaseMode

// Begin Class AGhost Function OnFleeMode
struct Z_Construct_UFunction_AGhost_OnFleeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_OnFleeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "OnFleeMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_OnFleeMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_OnFleeMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGhost_OnFleeMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_OnFleeMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execOnFleeMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFleeMode();
	P_NATIVE_END;
}
// End Class AGhost Function OnFleeMode

// Begin Class AGhost Function OnScatterMode
struct Z_Construct_UFunction_AGhost_OnScatterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_OnScatterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "OnScatterMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_OnScatterMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_OnScatterMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGhost_OnScatterMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_OnScatterMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execOnScatterMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScatterMode();
	P_NATIVE_END;
}
// End Class AGhost Function OnScatterMode

// Begin Class AGhost Function setDeath
struct Z_Construct_UFunction_AGhost_setDeath_Statics
{
	struct Ghost_eventsetDeath_Parms
	{
		bool value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_setDeath_Statics::NewProp_value_SetBit(void* Obj)
{
	((Ghost_eventsetDeath_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_setDeath_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventsetDeath_Parms), &Z_Construct_UFunction_AGhost_setDeath_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_setDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_setDeath_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_setDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_setDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "setDeath", nullptr, nullptr, Z_Construct_UFunction_AGhost_setDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_setDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_setDeath_Statics::Ghost_eventsetDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_setDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_setDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_setDeath_Statics::Ghost_eventsetDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_setDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_setDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execsetDeath)
{
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setDeath(Z_Param_value);
	P_NATIVE_END;
}
// End Class AGhost Function setDeath

// Begin Class AGhost Function setFleeMode
struct Z_Construct_UFunction_AGhost_setFleeMode_Statics
{
	struct Ghost_eventsetFleeMode_Parms
	{
		bool value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_setFleeMode_Statics::NewProp_value_SetBit(void* Obj)
{
	((Ghost_eventsetFleeMode_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_setFleeMode_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventsetFleeMode_Parms), &Z_Construct_UFunction_AGhost_setFleeMode_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_setFleeMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_setFleeMode_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_setFleeMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_setFleeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "setFleeMode", nullptr, nullptr, Z_Construct_UFunction_AGhost_setFleeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_setFleeMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_setFleeMode_Statics::Ghost_eventsetFleeMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_setFleeMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_setFleeMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_setFleeMode_Statics::Ghost_eventsetFleeMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_setFleeMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_setFleeMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execsetFleeMode)
{
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setFleeMode(Z_Param_value);
	P_NATIVE_END;
}
// End Class AGhost Function setFleeMode

// Begin Class AGhost Function SetOnChaseMode
struct Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics
{
	struct Ghost_eventSetOnChaseMode_Parms
	{
		bool isInChaseMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isInChaseMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isInChaseMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::NewProp_isInChaseMode_SetBit(void* Obj)
{
	((Ghost_eventSetOnChaseMode_Parms*)Obj)->isInChaseMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::NewProp_isInChaseMode = { "isInChaseMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ghost_eventSetOnChaseMode_Parms), &Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::NewProp_isInChaseMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::NewProp_isInChaseMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhost, nullptr, "SetOnChaseMode", nullptr, nullptr, Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::Ghost_eventSetOnChaseMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::Ghost_eventSetOnChaseMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGhost_SetOnChaseMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhost_SetOnChaseMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGhost::execSetOnChaseMode)
{
	P_GET_UBOOL(Z_Param_isInChaseMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnChaseMode(Z_Param_isInChaseMode);
	P_NATIVE_END;
}
// End Class AGhost Function SetOnChaseMode

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
		{ "getChaseMode", &AGhost::execgetChaseMode },
		{ "getFleeMode", &AGhost::execgetFleeMode },
		{ "getIsDead", &AGhost::execgetIsDead },
		{ "getScatterMode", &AGhost::execgetScatterMode },
		{ "OnChaseMode", &AGhost::execOnChaseMode },
		{ "OnFleeMode", &AGhost::execOnFleeMode },
		{ "OnScatterMode", &AGhost::execOnScatterMode },
		{ "setDeath", &AGhost::execsetDeath },
		{ "setFleeMode", &AGhost::execsetFleeMode },
		{ "SetOnChaseMode", &AGhost::execSetOnChaseMode },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[] = {
		{ "Category", "Particles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostAI_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ghost/Ghost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostAI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhost_getChaseMode, "getChaseMode" }, // 2305236904
		{ &Z_Construct_UFunction_AGhost_getFleeMode, "getFleeMode" }, // 2949245025
		{ &Z_Construct_UFunction_AGhost_getIsDead, "getIsDead" }, // 2548617395
		{ &Z_Construct_UFunction_AGhost_getScatterMode, "getScatterMode" }, // 2042139955
		{ &Z_Construct_UFunction_AGhost_OnChaseMode, "OnChaseMode" }, // 2836028375
		{ &Z_Construct_UFunction_AGhost_OnFleeMode, "OnFleeMode" }, // 1568879758
		{ &Z_Construct_UFunction_AGhost_OnScatterMode, "OnScatterMode" }, // 2744307532
		{ &Z_Construct_UFunction_AGhost_setDeath, "setDeath" }, // 3172359530
		{ &Z_Construct_UFunction_AGhost_setFleeMode, "setFleeMode" }, // 1610445487
		{ &Z_Construct_UFunction_AGhost_SetOnChaseMode, "SetOnChaseMode" }, // 858916497
		{ &Z_Construct_UFunction_AGhost_SetOnScatterMode, "SetOnScatterMode" }, // 4237152404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhost_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhost, Particles), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particles_MetaData), NewProp_Particles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhost_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhost, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeAsset_MetaData), NewProp_TreeAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhost_Statics::NewProp_GhostAI = { "GhostAI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhost, GhostAI), Z_Construct_UClass_ABaseAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostAI_MetaData), NewProp_GhostAI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhost_Statics::NewProp_Particles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhost_Statics::NewProp_TreeAsset,
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
struct Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGhost, AGhost::StaticClass, TEXT("AGhost"), &Z_Registration_Info_UClass_AGhost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhost), 2084564016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_3122761097(TEXT("/Script/TP2_unreal"),
	Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TP2_unreal_Source_TP2_unreal_Public_Ghost_Ghost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
