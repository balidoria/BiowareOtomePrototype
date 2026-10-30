// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotifyState_MotionWarping.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MotionWarping() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAnimNotifyState_MotionWarping Function AddRootMotionModifier ************
struct AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms
{
	UMotionWarpingComponent* MotionWarpingComp;
	const UAnimSequenceBase* Animation;
	float StartTime;
	float EndTime;
	URootMotionModifier* ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier = FName(TEXT("AddRootMotionModifier"));
URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Animation=Animation;
		Parms.StartTime=StartTime;
		Parms.EndTime=EndTime;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAnimNotifyState_MotionWarping*>(this)->AddRootMotionModifier_Implementation(MotionWarpingComp, Animation, StartTime, EndTime);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a root motion modifier from the config class defined in the notify */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a root motion modifier from the config class defined in the notify" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRootMotionModifier constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRootMotionModifier constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRootMotionModifier Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddRootMotionModifier Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "AddRootMotionModifier", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execAddRootMotionModifier)
{
	P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URootMotionModifier**)Z_Param__Result=P_THIS->AddRootMotionModifier_Implementation(Z_Param_MotionWarpingComp,Z_Param_Animation,Z_Param_StartTime,Z_Param_EndTime);
	P_NATIVE_END;
}
// ********** End Class UAnimNotifyState_MotionWarping Function AddRootMotionModifier **************

// ********** Begin Class UAnimNotifyState_MotionWarping Function OnRootMotionModifierActivate *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics
struct UHT_STATICS
{
	struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRootMotionModifierActivate constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRootMotionModifierActivate constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRootMotionModifierActivate Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRootMotionModifierActivate Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierActivate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate)
{
	P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
	P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRootMotionModifierActivate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
	P_NATIVE_END;
}
// ********** End Class UAnimNotifyState_MotionWarping Function OnRootMotionModifierActivate *******

// ********** Begin Class UAnimNotifyState_MotionWarping Function OnRootMotionModifierDeactivate ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics
struct UHT_STATICS
{
	struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRootMotionModifierDeactivate constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRootMotionModifierDeactivate constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRootMotionModifierDeactivate Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRootMotionModifierDeactivate Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierDeactivate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate)
{
	P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
	P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRootMotionModifierDeactivate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
	P_NATIVE_END;
}
// ********** End Class UAnimNotifyState_MotionWarping Function OnRootMotionModifierDeactivate *****

// ********** Begin Class UAnimNotifyState_MotionWarping Function OnRootMotionModifierUpdate *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics
struct UHT_STATICS
{
	struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRootMotionModifierUpdate constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRootMotionModifierUpdate constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRootMotionModifierUpdate Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRootMotionModifierUpdate Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierUpdate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate)
{
	P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
	P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRootMotionModifierUpdate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
	P_NATIVE_END;
}
// ********** End Class UAnimNotifyState_MotionWarping Function OnRootMotionModifierUpdate *********

// ********** Begin Class UAnimNotifyState_MotionWarping Function OnWarpBegin **********************
struct AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms
{
	UMotionWarpingComponent* MotionWarpingComp;
	URootMotionModifier* Modifier;
};
static FName NAME_UAnimNotifyState_MotionWarping_OnWarpBegin = FName(TEXT("OnWarpBegin"));
void UAnimNotifyState_MotionWarping::OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
{
	AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms Parms;
	Parms.MotionWarpingComp=MotionWarpingComp;
	Parms.Modifier=Modifier;
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpBegin);
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnWarpBegin constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnWarpBegin constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnWarpBegin Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms, Modifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnWarpBegin Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpBegin", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UAnimNotifyState_MotionWarping Function OnWarpBegin ************************

// ********** Begin Class UAnimNotifyState_MotionWarping Function OnWarpEnd ************************
struct AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms
{
	UMotionWarpingComponent* MotionWarpingComp;
	URootMotionModifier* Modifier;
};
static FName NAME_UAnimNotifyState_MotionWarping_OnWarpEnd = FName(TEXT("OnWarpEnd"));
void UAnimNotifyState_MotionWarping::OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
{
	AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms Parms;
	Parms.MotionWarpingComp=MotionWarpingComp;
	Parms.Modifier=Modifier;
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpEnd);
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnWarpEnd constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnWarpEnd constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnWarpEnd Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms, Modifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnWarpEnd Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpEnd", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UAnimNotifyState_MotionWarping Function OnWarpEnd **************************

// ********** Begin Class UAnimNotifyState_MotionWarping Function OnWarpUpdate *********************
struct AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms
{
	UMotionWarpingComponent* MotionWarpingComp;
	URootMotionModifier* Modifier;
};
static FName NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate = FName(TEXT("OnWarpUpdate"));
void UAnimNotifyState_MotionWarping::OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
{
	AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms Parms;
	Parms.MotionWarpingComp=MotionWarpingComp;
	Parms.Modifier=Modifier;
	UFunction* Func = FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate);
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnWarpUpdate constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnWarpUpdate constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnWarpUpdate Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnWarpUpdate Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpUpdate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UAnimNotifyState_MotionWarping Function OnWarpUpdate ***********************

// ********** Begin Class UAnimNotifyState_MotionWarping *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AnimNotifyState used to define a motion warping window in the animation */" },
#endif
		{ "DisplayName", "Motion Warping" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_MotionWarping.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimNotifyState used to define a motion warping window in the animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionModifier_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Prevent notify callbacks and add comments explaining why we don't use those here.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Prevent notify callbacks and add comments explaining why we don't use those here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAnimNotifyState_MotionWarping constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAnimNotifyState_MotionWarping constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddRootMotionModifier"), .Pointer = &UAnimNotifyState_MotionWarping::execAddRootMotionModifier },
		{ .NameUTF8 = UTF8TEXT("OnRootMotionModifierActivate"), .Pointer = &UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate },
		{ .NameUTF8 = UTF8TEXT("OnRootMotionModifierDeactivate"), .Pointer = &UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate },
		{ .NameUTF8 = UTF8TEXT("OnRootMotionModifierUpdate"), .Pointer = &UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier, "AddRootMotionModifier" }, // 4bfae6d9340f01ed13a0b4849b99fdbdf7ac33fc
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate, "OnRootMotionModifierActivate" }, // b26edcf4db5e77d220caaf0f494ff23706710c1e
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate, "OnRootMotionModifierDeactivate" }, // f91437c1c4a2e4091dfe1bcb45ad376192e4cea8
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate, "OnRootMotionModifierUpdate" }, // 1baba45f91bf429944d515a21acc3621d7b6644e
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin, "OnWarpBegin" }, // ae591b26d70fe3b21c96abf5f751184b05ed89d8
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd, "OnWarpEnd" }, // d4bf4b2acc2d360c8eaacae76054ab0ddcf893f5
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate, "OnWarpUpdate" }, // 5d5ab4a5a81d16e9941d8bcffd26c9ec97e0421f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MotionWarping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAnimNotifyState_MotionWarping Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RootMotionModifier = { "RootMotionModifier", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MotionWarping, RootMotionModifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionModifier_MetaData), NewProp_RootMotionModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootMotionModifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAnimNotifyState_MotionWarping Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAnimNotifyState,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAnimNotifyState_MotionWarping,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008930A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAnimNotifyState_MotionWarping_StaticRegisterNativesUAnimNotifyState_MotionWarping()
{
	UClass* Class = UAnimNotifyState_MotionWarping::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping;
UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAnimNotifyState_MotionWarping;
		if (!Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AnimNotifyState_MotionWarping"),
				Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton,
				UAnimNotifyState_MotionWarping_StaticRegisterNativesUAnimNotifyState_MotionWarping,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAnimNotifyState_MotionWarping);
UAnimNotifyState_MotionWarping::~UAnimNotifyState_MotionWarping() {}
// ********** End Class UAnimNotifyState_MotionWarping *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_MotionWarping, TEXT("UAnimNotifyState_MotionWarping"), &Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_MotionWarping), 3657872421U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h__Script_MotionWarping_e6e3f6716ca130ab5add1451c6b62a541c9882da{
	TEXT("/Script/MotionWarping"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
