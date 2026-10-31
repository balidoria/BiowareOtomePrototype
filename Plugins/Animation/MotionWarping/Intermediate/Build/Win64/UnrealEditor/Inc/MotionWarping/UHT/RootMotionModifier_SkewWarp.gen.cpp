// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier_SkewWarp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_SkewWarp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URootMotionModifier_SkewWarp Function AddRootMotionModifierSkewWarp ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics
struct UHT_STATICS
{
	struct RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms
	{
		UMotionWarpingComponent* InMotionWarpingComp;
		const UAnimSequenceBase* InAnimation;
		float InStartTime;
		float InEndTime;
		FName InWarpTargetName;
		EWarpPointAnimProvider InWarpPointAnimProvider;
		FTransform InWarpPointAnimTransform;
		FName InWarpPointAnimBoneName;
		bool bInWarpTranslation;
		bool bInIgnoreZAxis;
		bool bInWarpRotation;
		EMotionWarpRotationType InRotationType;
		EMotionWarpRotationMethod InRotationMethod;
		float InWarpRotationTimeMultiplier;
		float InWarpMaxRotationRate;
		URootMotionModifier_SkewWarp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "CPP_Default_bInIgnoreZAxis", "true" },
		{ "CPP_Default_bInWarpRotation", "true" },
		{ "CPP_Default_bInWarpTranslation", "true" },
		{ "CPP_Default_InRotationMethod", "Slerp" },
		{ "CPP_Default_InRotationType", "Default" },
		{ "CPP_Default_InWarpMaxRotationRate", "0.000000" },
		{ "CPP_Default_InWarpRotationTimeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMotionWarpingComp_MetaData[] = {
		{ "DisplayName", "Motion Warping Comp" },
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[] = {
		{ "DisplayName", "Animation" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStartTime_MetaData[] = {
		{ "DisplayName", "Start Time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEndTime_MetaData[] = {
		{ "DisplayName", "End Time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWarpTargetName_MetaData[] = {
		{ "DisplayName", "Warp Target Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimProvider_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Provider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimTransform_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimBoneName_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Bone Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInWarpTranslation_MetaData[] = {
		{ "DisplayName", "Warp Translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInIgnoreZAxis_MetaData[] = {
		{ "DisplayName", "Ignore Z Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInWarpRotation_MetaData[] = {
		{ "DisplayName", "Warp Rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotationType_MetaData[] = {
		{ "DisplayName", "Rotation Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRotationMethod_MetaData[] = {
		{ "DisplayName", "Rotation Method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWarpRotationTimeMultiplier_MetaData[] = {
		{ "DisplayName", "Warp Rotation Time Multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWarpMaxRotationRate_MetaData[] = {
		{ "DisplayName", "Warp Max Rotation Rate" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRootMotionModifierSkewWarp constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InWarpTargetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InWarpPointAnimProvider_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InWarpPointAnimProvider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWarpPointAnimTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InWarpPointAnimBoneName;
	static void NewProp_bInWarpTranslation_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInWarpTranslation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWarpTranslation;
	static void NewProp_bInIgnoreZAxis_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInIgnoreZAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreZAxis;
	static void NewProp_bInWarpRotation_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInWarpRotation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWarpRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InRotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InRotationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InRotationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InRotationMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWarpRotationTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWarpMaxRotationRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRootMotionModifierSkewWarp constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRootMotionModifierSkewWarp Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMotionWarpingComp = { "InMotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InMotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMotionWarpingComp_MetaData), NewProp_InMotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InAnimation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAnimation_MetaData), NewProp_InAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartTime_MetaData), NewProp_InStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InEndTime = { "InEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndTime_MetaData), NewProp_InEndTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_InWarpTargetName = { "InWarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWarpTargetName_MetaData), NewProp_InWarpTargetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InWarpPointAnimProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InWarpPointAnimProvider = { "InWarpPointAnimProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimProvider), Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWarpPointAnimProvider_MetaData), NewProp_InWarpPointAnimProvider_MetaData) }; // bb16ffae1a80c45160d4284f5b1f453bf07d7df0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InWarpPointAnimTransform = { "InWarpPointAnimTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWarpPointAnimTransform_MetaData), NewProp_InWarpPointAnimTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_InWarpPointAnimBoneName = { "InWarpPointAnimBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWarpPointAnimBoneName_MetaData), NewProp_InWarpPointAnimBoneName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInWarpTranslation = { "bInWarpTranslation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &UHT_STATICS::NewProp_bInWarpTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInWarpTranslation_MetaData), NewProp_bInWarpTranslation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInIgnoreZAxis = { "bInIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &UHT_STATICS::NewProp_bInIgnoreZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInIgnoreZAxis_MetaData), NewProp_bInIgnoreZAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInWarpRotation = { "bInWarpRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &UHT_STATICS::NewProp_bInWarpRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInWarpRotation_MetaData), NewProp_bInWarpRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InRotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InRotationType = { "InRotationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InRotationType), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotationType_MetaData), NewProp_InRotationType_MetaData) }; // 11baa9d5a4f5d269e97e826545470f125eec3a15
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InRotationMethod = { "InRotationMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InRotationMethod), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRotationMethod_MetaData), NewProp_InRotationMethod_MetaData) }; // 27043b6208392b807629a02c7a81d8adcc1b999e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InWarpRotationTimeMultiplier = { "InWarpRotationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpRotationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWarpRotationTimeMultiplier_MetaData), NewProp_InWarpRotationTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InWarpMaxRotationRate = { "InWarpMaxRotationRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpMaxRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWarpMaxRotationRate_MetaData), NewProp_InWarpMaxRotationRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_SkewWarp, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpPointAnimProvider_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpPointAnimProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpPointAnimTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpPointAnimBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInWarpTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInIgnoreZAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInWarpRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRotationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRotationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpRotationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InWarpMaxRotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddRootMotionModifierSkewWarp Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_SkewWarp, nullptr, "AddRootMotionModifierSkewWarp", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp)
{
	P_GET_OBJECT(UMotionWarpingComponent,Z_Param_InMotionWarpingComp);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InEndTime);
	P_GET_PROPERTY(FNameProperty,Z_Param_InWarpTargetName);
	P_GET_ENUM(EWarpPointAnimProvider,Z_Param_InWarpPointAnimProvider);
	P_GET_STRUCT(FTransform,Z_Param_InWarpPointAnimTransform);
	P_GET_PROPERTY(FNameProperty,Z_Param_InWarpPointAnimBoneName);
	P_GET_UBOOL(Z_Param_bInWarpTranslation);
	P_GET_UBOOL(Z_Param_bInIgnoreZAxis);
	P_GET_UBOOL(Z_Param_bInWarpRotation);
	P_GET_ENUM(EMotionWarpRotationType,Z_Param_InRotationType);
	P_GET_ENUM(EMotionWarpRotationMethod,Z_Param_InRotationMethod);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWarpRotationTimeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWarpMaxRotationRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URootMotionModifier_SkewWarp**)Z_Param__Result=URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(Z_Param_InMotionWarpingComp,Z_Param_InAnimation,Z_Param_InStartTime,Z_Param_InEndTime,Z_Param_InWarpTargetName,EWarpPointAnimProvider(Z_Param_InWarpPointAnimProvider),Z_Param_InWarpPointAnimTransform,Z_Param_InWarpPointAnimBoneName,Z_Param_bInWarpTranslation,Z_Param_bInIgnoreZAxis,Z_Param_bInWarpRotation,EMotionWarpRotationType(Z_Param_InRotationType),EMotionWarpRotationMethod(Z_Param_InRotationMethod),Z_Param_InWarpRotationTimeMultiplier,Z_Param_InWarpMaxRotationRate);
	P_NATIVE_END;
}
// ********** End Class URootMotionModifier_SkewWarp Function AddRootMotionModifierSkewWarp ********

// ********** Begin Class URootMotionModifier_SkewWarp *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplayName", "Skew Warp" },
		{ "IncludePath", "RootMotionModifier_SkewWarp.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedClampRatio_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows to set maximum warp translation speed clamp ratio.\n\x09* Ratio is relative to the original animation translation speed. E.g. if the MaxSpeedClampRatio == 2.0f actor well be moving with maximum 2x speed of the animation.\n\x09* Applied only in cases when animation has root motion translation.\n\x09* Zero treated as no clamping.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows to set maximum warp translation speed clamp ratio.\nRatio is relative to the original animation translation speed. E.g. if the MaxSpeedClampRatio == 2.0f actor well be moving with maximum 2x speed of the animation.\nApplied only in cases when animation has root motion translation.\nZero treated as no clamping." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier_SkewWarp constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedClampRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URootMotionModifier_SkewWarp constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddRootMotionModifierSkewWarp"), .Pointer = &URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, "AddRootMotionModifierSkewWarp" }, // fb2abe233c7723658b988d1da02979c3aebb56d3
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_SkewWarp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URootMotionModifier_SkewWarp Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxSpeedClampRatio = { "MaxSpeedClampRatio", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_SkewWarp, MaxSpeedClampRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedClampRatio_MetaData), NewProp_MaxSpeedClampRatio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSpeedClampRatio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URootMotionModifier_SkewWarp Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_Warp,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier_SkewWarp,
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
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URootMotionModifier_SkewWarp_StaticRegisterNativesURootMotionModifier_SkewWarp()
{
	UClass* Class = URootMotionModifier_SkewWarp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier_SkewWarp;
UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier_SkewWarp;
		if (!Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_SkewWarp"),
				Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton,
				URootMotionModifier_SkewWarp_StaticRegisterNativesURootMotionModifier_SkewWarp,
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
		return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier_SkewWarp);
URootMotionModifier_SkewWarp::~URootMotionModifier_SkewWarp() {}
// ********** End Class URootMotionModifier_SkewWarp ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier_SkewWarp, TEXT("URootMotionModifier_SkewWarp"), &Z_Registration_Info_UClass_URootMotionModifier_SkewWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_SkewWarp), 1513371100U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h__Script_MotionWarping_92a16820c6352cb484f13feee0618bf87021225f{
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
