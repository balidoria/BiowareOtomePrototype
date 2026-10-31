// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingComponent.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "RootMotionModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMotionWarpingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase);
MOTIONWARPING_API UFunction* Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingUtilities(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingWindowData(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchOffConditionData(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingBaseAdapter(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingUtilities(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMotionWarpingWindowData ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMotionWarpingWindowData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMotionWarpingWindowData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotify_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMotionWarpingWindowData constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimNotify;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMotionWarpingWindowData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingWindowData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMotionWarpingWindowData Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnimNotify = { "AnimNotify", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingWindowData, AnimNotify), Z_Construct_UClass_UAnimNotifyState_MotionWarping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotify_MetaData), NewProp_AnimNotify_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingWindowData, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingWindowData, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndTime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMotionWarpingWindowData Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"MotionWarpingWindowData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMotionWarpingWindowData>(),
	alignof(FMotionWarpingWindowData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData;
UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingWindowData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingWindowData, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("MotionWarpingWindowData"));
		}
		return Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMotionWarpingWindowData ********************************************

// ********** Begin Class UMotionWarpingUtilities Function ExtractBoneTransformFromAnimationAtTime *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime_Statics
struct UHT_STATICS
{
	struct MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms
	{
		const UAnimInstance* AnimInstance;
		const UAnimSequenceBase* Animation;
		float Time;
		bool bExtractRootMotion;
		FName BoneName;
		bool bLocalSpace;
		FTransform OutTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extract bone transform from animation at a given time */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extract bone transform from animation at a given time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExtractBoneTransformFromAnimationAtTime constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bExtractRootMotion_SetBit(void* Obj)
	{
		((MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms*)Obj)->bExtractRootMotion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bLocalSpace_SetBit(void* Obj)
	{
		((MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms*)Obj)->bLocalSpace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExtractBoneTransformFromAnimationAtTime constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExtractBoneTransformFromAnimationAtTime Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms), &UHT_STATICS::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLocalSpace = { "bLocalSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms), &UHT_STATICS::NewProp_bLocalSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bExtractRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExtractBoneTransformFromAnimationAtTime Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "ExtractBoneTransformFromAnimationAtTime", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingUtilities_eventExtractBoneTransformFromAnimationAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingUtilities::execExtractBoneTransformFromAnimationAtTime)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_UBOOL(Z_Param_bExtractRootMotion);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bLocalSpace);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMotionWarpingUtilities::ExtractBoneTransformFromAnimationAtTime(Z_Param_AnimInstance,Z_Param_Animation,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_BoneName,Z_Param_bLocalSpace,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingUtilities Function ExtractBoneTransformFromAnimationAtTime ***

// ********** Begin Class UMotionWarpingUtilities Function ExtractRootMotionFromAnimation **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics
struct UHT_STATICS
{
	struct MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms
	{
		const UAnimSequenceBase* Animation;
		float StartTime;
		float EndTime;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extract Root Motion transform from a contiguous position range */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extract Root Motion transform from a contiguous position range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExtractRootMotionFromAnimation constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExtractRootMotionFromAnimation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExtractRootMotionFromAnimation Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExtractRootMotionFromAnimation Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "ExtractRootMotionFromAnimation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingUtilities::execExtractRootMotionFromAnimation)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UMotionWarpingUtilities::ExtractRootMotionFromAnimation(Z_Param_Animation,Z_Param_StartTime,Z_Param_EndTime);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingUtilities Function ExtractRootMotionFromAnimation ************

// ********** Begin Class UMotionWarpingUtilities Function GetMotionWarpingWindowsForWarpTargetFromAnimation 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics
struct UHT_STATICS
{
	struct MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms
	{
		const UAnimSequenceBase* Animation;
		FName WarpTargetName;
		TArray<FMotionWarpingWindowData> OutWindows;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @return All the MotionWarping windows within the supplied animation for a given Warp Target */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return All the MotionWarping windows within the supplied animation for a given Warp Target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMotionWarpingWindowsForWarpTargetFromAnimation constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWindows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWindows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMotionWarpingWindowsForWarpTargetFromAnimation constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMotionWarpingWindowsForWarpTargetFromAnimation Property Definitions 
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutWindows_Inner = { "OutWindows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMotionWarpingWindowData, METADATA_PARAMS(0, nullptr) }; // 90b72e4f398c54433b1e6e919b9837457a640fcd
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutWindows = { "OutWindows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms, OutWindows), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 90b72e4f398c54433b1e6e919b9837457a640fcd
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWindows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWindows,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMotionWarpingWindowsForWarpTargetFromAnimation Property Definitions **
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "GetMotionWarpingWindowsForWarpTargetFromAnimation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingUtilities::execGetMotionWarpingWindowsForWarpTargetFromAnimation)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_TARRAY_REF(FMotionWarpingWindowData,Z_Param_Out_OutWindows);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(Z_Param_Animation,Z_Param_WarpTargetName,Z_Param_Out_OutWindows);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingUtilities Function GetMotionWarpingWindowsForWarpTargetFromAnimation 

// ********** Begin Class UMotionWarpingUtilities Function GetMotionWarpingWindowsFromAnimation ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics
struct UHT_STATICS
{
	struct MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms
	{
		const UAnimSequenceBase* Animation;
		TArray<FMotionWarpingWindowData> OutWindows;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** @return All the MotionWarping windows within the supplied animation */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return All the MotionWarping windows within the supplied animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMotionWarpingWindowsFromAnimation constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWindows_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWindows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMotionWarpingWindowsFromAnimation constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMotionWarpingWindowsFromAnimation Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutWindows_Inner = { "OutWindows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMotionWarpingWindowData, METADATA_PARAMS(0, nullptr) }; // 90b72e4f398c54433b1e6e919b9837457a640fcd
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutWindows = { "OutWindows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms, OutWindows), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 90b72e4f398c54433b1e6e919b9837457a640fcd
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWindows_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutWindows,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMotionWarpingWindowsFromAnimation Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "GetMotionWarpingWindowsFromAnimation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingUtilities::execGetMotionWarpingWindowsFromAnimation)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
	P_GET_TARRAY_REF(FMotionWarpingWindowData,Z_Param_Out_OutWindows);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(Z_Param_Animation,Z_Param_Out_OutWindows);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingUtilities Function GetMotionWarpingWindowsFromAnimation ******

// ********** Begin Class UMotionWarpingUtilities **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingUtilities_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "MotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingUtilities constinit property declarations ******************
// ********** End Class UMotionWarpingUtilities constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExtractBoneTransformFromAnimationAtTime"), .Pointer = &UMotionWarpingUtilities::execExtractBoneTransformFromAnimationAtTime },
		{ .NameUTF8 = UTF8TEXT("ExtractRootMotionFromAnimation"), .Pointer = &UMotionWarpingUtilities::execExtractRootMotionFromAnimation },
		{ .NameUTF8 = UTF8TEXT("GetMotionWarpingWindowsForWarpTargetFromAnimation"), .Pointer = &UMotionWarpingUtilities::execGetMotionWarpingWindowsForWarpTargetFromAnimation },
		{ .NameUTF8 = UTF8TEXT("GetMotionWarpingWindowsFromAnimation"), .Pointer = &UMotionWarpingUtilities::execGetMotionWarpingWindowsFromAnimation },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_ExtractBoneTransformFromAnimationAtTime, "ExtractBoneTransformFromAnimationAtTime" }, // e07280324d89cbc13368511c4305ed418f326442
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation, "ExtractRootMotionFromAnimation" }, // 0b21ebba00f71ac5a37ec0e0f0f927182cc411a7
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation, "GetMotionWarpingWindowsForWarpTargetFromAnimation" }, // 0a9c0cef2d387b7e6b3b1a634c271128090eaacf
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation, "GetMotionWarpingWindowsFromAnimation" }, // b5a9633b31daa60710cc40a28ade2376f60dd686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingUtilities,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingUtilities_StaticRegisterNativesUMotionWarpingUtilities()
{
	UClass* Class = UMotionWarpingUtilities::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingUtilities;
UClass* Z_Construct_UClass_UMotionWarpingUtilities(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingUtilities;
		if (!Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingUtilities"),
				Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton,
				UMotionWarpingUtilities_StaticRegisterNativesUMotionWarpingUtilities,
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
		return Z_Registration_Info_UClass_UMotionWarpingUtilities.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingUtilities::UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingUtilities);
UMotionWarpingUtilities::~UMotionWarpingUtilities() {}
// ********** End Class UMotionWarpingUtilities ****************************************************

// ********** Begin Delegate FMotionWarpingPreUpdate ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_MotionWarping_eventMotionWarpingPreUpdate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FMotionWarpingPreUpdate constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FMotionWarpingPreUpdate constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FMotionWarpingPreUpdate Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FMotionWarpingPreUpdate Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping, nullptr, "MotionWarpingPreUpdate__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FMotionWarpingPreUpdate *************************************************

// ********** Begin Class UMotionWarpingComponent Function AddOrUpdateWarpTarget *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms
	{
		FMotionWarpingTarget WarpTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds or update a warp target */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or update a warp target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddOrUpdateWarpTarget constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOrUpdateWarpTarget constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOrUpdateWarpTarget Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WarpTarget = { "WarpTarget", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms, WarpTarget), Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTarget_MetaData), NewProp_WarpTarget_MetaData) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTarget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOrUpdateWarpTarget Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTarget)
{
	P_GET_STRUCT_REF(FMotionWarpingTarget,Z_Param_Out_WarpTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateWarpTarget(Z_Param_Out_WarpTarget);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function AddOrUpdateWarpTarget *********************

// ********** Begin Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromComponent ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms
	{
		FName WarpTargetName;
		const USceneComponent* Component;
		FName BoneName;
		bool bFollowComponent;
		EWarpTargetLocationOffsetDirection LocationOffsetDirection;
		FVector LocationOffset;
		FRotator RotationOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name\n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param Component Scene Component used to get the target transform\n\x09 * @param BoneName Optional bone or socket in the component used to get the target transform. \n\x09 * @param bFollowComponent Whether the target transform should update while the warping is active. Useful for tracking moving targets.\n\x09 *\x09\x09  Note that this will be one frame off if our owner ticks before the target actor. Add tick pre-requisites to avoid this.\n\x09 * @param LocationOffsetDirection Direction of LocationOffset\n\x09 * @param LocationOffset Optional translation offset to apply to the transform we get from the component\n\x09 * @param RotationOffset Optional rotation offset to apply to the transform we get from the component\n\x09 */" },
#endif
		{ "CPP_Default_LocationOffset", "" },
		{ "CPP_Default_LocationOffsetDirection", "TargetsForwardVector" },
		{ "CPP_Default_RotationOffset", "" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param Component Scene Component used to get the target transform\n@param BoneName Optional bone or socket in the component used to get the target transform.\n@param bFollowComponent Whether the target transform should update while the warping is active. Useful for tracking moving targets.\n               Note that this will be one frame off if our owner ticks before the target actor. Add tick pre-requisites to avoid this.\n@param LocationOffsetDirection Direction of LocationOffset\n@param LocationOffset Optional translation offset to apply to the transform we get from the component\n@param RotationOffset Optional rotation offset to apply to the transform we get from the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddOrUpdateWarpTargetFromComponent constinit property declarations ****
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bFollowComponent_SetBit(void* Obj)
	{
		((MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms*)Obj)->bFollowComponent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationOffsetDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationOffsetDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOrUpdateWarpTargetFromComponent constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOrUpdateWarpTargetFromComponent Property Definitions ***************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, Component), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFollowComponent = { "bFollowComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms), &UHT_STATICS::NewProp_bFollowComponent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LocationOffsetDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LocationOffsetDirection = { "LocationOffsetDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, LocationOffsetDirection), Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection, METADATA_PARAMS(0, nullptr) }; // 261a57dd4fe3ef95924911b480eca7641bc9ba01
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFollowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffsetDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffsetDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOrUpdateWarpTargetFromComponent Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromComponent)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bFollowComponent);
	P_GET_ENUM(EWarpTargetLocationOffsetDirection,Z_Param_LocationOffsetDirection);
	P_GET_STRUCT(FVector,Z_Param_LocationOffset);
	P_GET_STRUCT(FRotator,Z_Param_RotationOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateWarpTargetFromComponent(Z_Param_WarpTargetName,Z_Param_Component,Z_Param_BoneName,Z_Param_bFollowComponent,EWarpTargetLocationOffsetDirection(Z_Param_LocationOffsetDirection),Z_Param_LocationOffset,Z_Param_RotationOffset);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromComponent ********

// ********** Begin Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromLocation *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms
	{
		FName WarpTargetName;
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name\n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param TargetLocation Location for the warp target\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param TargetLocation Location for the warp target" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddOrUpdateWarpTargetFromLocation constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOrUpdateWarpTargetFromLocation constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOrUpdateWarpTargetFromLocation Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOrUpdateWarpTargetFromLocation Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateWarpTargetFromLocation(Z_Param_WarpTargetName,Z_Param_TargetLocation);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromLocation *********

// ********** Begin Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromLocationAndRotation 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms
	{
		FName WarpTargetName;
		FVector TargetLocation;
		FRotator TargetRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name\n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param TargetLocation Location for the warp target\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param TargetLocation Location for the warp target" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddOrUpdateWarpTargetFromLocationAndRotation constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOrUpdateWarpTargetFromLocationAndRotation constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOrUpdateWarpTargetFromLocationAndRotation Property Definitions *****
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRotation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOrUpdateWarpTargetFromLocationAndRotation Property Definitions *******
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromLocationAndRotation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateWarpTargetFromLocationAndRotation(Z_Param_WarpTargetName,Z_Param_TargetLocation,Z_Param_TargetRotation);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromLocationAndRotation 

// ********** Begin Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromTransform ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms
	{
		FName WarpTargetName;
		FTransform TargetTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Create and adds or update a target associated with a specified name \n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param TargetTransform Transform used to set the location and rotation for the warp target\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param TargetTransform Transform used to set the location and rotation for the warp target" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddOrUpdateWarpTargetFromTransform constinit property declarations ****
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddOrUpdateWarpTargetFromTransform constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddOrUpdateWarpTargetFromTransform Property Definitions ***************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddOrUpdateWarpTargetFromTransform Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateWarpTargetFromTransform(Z_Param_WarpTargetName,Z_Param_TargetTransform);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function AddOrUpdateWarpTargetFromTransform ********

// ********** Begin Class UMotionWarpingComponent Function AddSwitchOffCondition *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_AddSwitchOffCondition_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventAddSwitchOffCondition_Parms
	{
		FName WarpTargetName;
		UMotionWarpingSwitchOffCondition* Condition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping|Experimental" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddSwitchOffCondition constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddSwitchOffCondition constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddSwitchOffCondition Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddSwitchOffCondition_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventAddSwitchOffCondition_Parms, Condition), Z_Construct_UClass_UMotionWarpingSwitchOffCondition, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Condition,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddSwitchOffCondition Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddSwitchOffCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventAddSwitchOffCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventAddSwitchOffCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddSwitchOffCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execAddSwitchOffCondition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_OBJECT(UMotionWarpingSwitchOffCondition,Z_Param_Condition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSwitchOffCondition(Z_Param_WarpTargetName,Z_Param_Condition);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function AddSwitchOffCondition *********************

// ********** Begin Class UMotionWarpingComponent Function DisableAllRootMotionModifiers ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mark all the modifiers as Disable */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mark all the modifiers as Disable" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DisableAllRootMotionModifiers constinit property declarations *********
// ********** End Function DisableAllRootMotionModifiers constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "DisableAllRootMotionModifiers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execDisableAllRootMotionModifiers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableAllRootMotionModifiers();
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function DisableAllRootMotionModifiers *************

// ********** Begin Class UMotionWarpingComponent Function FindWarpTarget **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_FindWarpTarget_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventFindWarpTarget_Parms
	{
		FName WarpTargetName;
		FMotionWarpingTarget MotionWarpingTarget;
		bool bFound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindWarpTarget constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MotionWarpingTarget;
	static void NewProp_bFound_SetBit(void* Obj)
	{
		((MotionWarpingComponent_eventFindWarpTarget_Parms*)Obj)->bFound = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindWarpTarget constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindWarpTarget Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventFindWarpTarget_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MotionWarpingTarget = { "MotionWarpingTarget", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventFindWarpTarget_Parms, MotionWarpingTarget), Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(0, nullptr) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingComponent_eventFindWarpTarget_Parms), &UHT_STATICS::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFound,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindWarpTarget Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "FindWarpTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventFindWarpTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventFindWarpTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_FindWarpTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execFindWarpTarget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_GET_STRUCT_REF(FMotionWarpingTarget,Z_Param_Out_MotionWarpingTarget);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindWarpTarget(Z_Param_WarpTargetName,Z_Param_Out_MotionWarpingTarget,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function FindWarpTarget ****************************

// ********** Begin Class UMotionWarpingComponent Function RemoveAllWarpTargets ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_RemoveAllWarpTargets_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventRemoveAllWarpTargets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes all warp targets */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all warp targets" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAllWarpTargets constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAllWarpTargets constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAllWarpTargets Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveAllWarpTargets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveAllWarpTargets Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "RemoveAllWarpTargets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventRemoveAllWarpTargets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventRemoveAllWarpTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_RemoveAllWarpTargets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execRemoveAllWarpTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveAllWarpTargets();
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function RemoveAllWarpTargets **********************

// ********** Begin Class UMotionWarpingComponent Function RemoveWarpTarget ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventRemoveWarpTarget_Parms
	{
		FName WarpTargetName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes the warp target associated with the specified key  */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the warp target associated with the specified key" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveWarpTarget constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveWarpTarget constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveWarpTarget Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveWarpTarget_Parms, WarpTargetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveWarpTarget_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveWarpTarget Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "RemoveWarpTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventRemoveWarpTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventRemoveWarpTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execRemoveWarpTarget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveWarpTarget(Z_Param_WarpTargetName);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function RemoveWarpTarget **************************

// ********** Begin Class UMotionWarpingComponent Function RemoveWarpTargets ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTargets_Statics
struct UHT_STATICS
{
	struct MotionWarpingComponent_eventRemoveWarpTargets_Parms
	{
		TArray<FName> WarpTargetNames;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes multiple warp targets */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes multiple warp targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveWarpTargets constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpTargetNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveWarpTargets constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveWarpTargets Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetNames_Inner = { "WarpTargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WarpTargetNames = { "WarpTargetNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveWarpTargets_Parms, WarpTargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargetNames_MetaData), NewProp_WarpTargetNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveWarpTargets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveWarpTargets Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingComponent, nullptr, "RemoveWarpTargets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingComponent_eventRemoveWarpTargets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingComponent_eventRemoveWarpTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTargets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingComponent::execRemoveWarpTargets)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_WarpTargetNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveWarpTargets(Z_Param_Out_WarpTargetNames);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingComponent Function RemoveWarpTargets *************************

// ********** Begin Class UMotionWarpingComponent **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "MotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to look inside animations within montage when looking for warping windows */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to look inside animations within montage when looking for warping windows" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreUpdate_MetaData[] = {
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called before Root Motion Modifiers are updated */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called before Root Motion Modifiers are updated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAdapter_MetaData[] = {
		{ "Category", "Warp State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adapter that connects motion warping to an owner */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adapter that connects motion warping to an owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionAdapter_MetaData[] = {
		{ "Category", "Warp State" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwnerAdapter_MetaData[] = {
		{ "Category", "Warp State" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "Warp State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of root motion modifiers */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of root motion modifiers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargets_MetaData[] = {
		{ "Category", "Warp State" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffConditions_MetaData[] = {
		{ "Category", "Warp State" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPredictingTrajectory_MetaData[] = {
		{ "Category", "Warp State" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingComponent constinit property declarations ******************
	static void NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit(void* Obj)
	{
		((UMotionWarpingComponent*)Obj)->bSearchForWindowsInAnimsWithinMontages = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchForWindowsInAnimsWithinMontages;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAdapter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PredictionAdapter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedOwnerAdapter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchOffConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwitchOffConditions;
	static void NewProp_bPredictingTrajectory_SetBit(void* Obj)
	{
		((UMotionWarpingComponent*)Obj)->bPredictingTrajectory = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictingTrajectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMotionWarpingComponent constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddOrUpdateWarpTarget"), .Pointer = &UMotionWarpingComponent::execAddOrUpdateWarpTarget },
		{ .NameUTF8 = UTF8TEXT("AddOrUpdateWarpTargetFromComponent"), .Pointer = &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromComponent },
		{ .NameUTF8 = UTF8TEXT("AddOrUpdateWarpTargetFromLocation"), .Pointer = &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocation },
		{ .NameUTF8 = UTF8TEXT("AddOrUpdateWarpTargetFromLocationAndRotation"), .Pointer = &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotation },
		{ .NameUTF8 = UTF8TEXT("AddOrUpdateWarpTargetFromTransform"), .Pointer = &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromTransform },
		{ .NameUTF8 = UTF8TEXT("AddSwitchOffCondition"), .Pointer = &UMotionWarpingComponent::execAddSwitchOffCondition },
		{ .NameUTF8 = UTF8TEXT("DisableAllRootMotionModifiers"), .Pointer = &UMotionWarpingComponent::execDisableAllRootMotionModifiers },
		{ .NameUTF8 = UTF8TEXT("FindWarpTarget"), .Pointer = &UMotionWarpingComponent::execFindWarpTarget },
		{ .NameUTF8 = UTF8TEXT("RemoveAllWarpTargets"), .Pointer = &UMotionWarpingComponent::execRemoveAllWarpTargets },
		{ .NameUTF8 = UTF8TEXT("RemoveWarpTarget"), .Pointer = &UMotionWarpingComponent::execRemoveWarpTarget },
		{ .NameUTF8 = UTF8TEXT("RemoveWarpTargets"), .Pointer = &UMotionWarpingComponent::execRemoveWarpTargets },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget, "AddOrUpdateWarpTarget" }, // 40ffcc71f5b144d54be0155172067ad8e9aed610
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent, "AddOrUpdateWarpTargetFromComponent" }, // 3a62a6e612cf82018c55cad2c75b79057e00b35e
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation, "AddOrUpdateWarpTargetFromLocation" }, // c8a8e8c0ce24d3862b867bee67fc160050045d32
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation, "AddOrUpdateWarpTargetFromLocationAndRotation" }, // 1b21fe30788cb3394bf252db0137dbfb17fe8814
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform, "AddOrUpdateWarpTargetFromTransform" }, // 4fde3d3dc5ec9f7097494e7a8c94e546cc0e297a
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddSwitchOffCondition, "AddSwitchOffCondition" }, // 79840d509acf6f1eab28402d6c6e07bf4682b4fd
		{ &Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers, "DisableAllRootMotionModifiers" }, // b137a8e858703edb9105f3728cb0ba08b9fdd71b
		{ &Z_Construct_UFunction_UMotionWarpingComponent_FindWarpTarget, "FindWarpTarget" }, // ba2c43ded9a5bcdb135be85a97a2c88ab133bc11
		{ &Z_Construct_UFunction_UMotionWarpingComponent_RemoveAllWarpTargets, "RemoveAllWarpTargets" }, // e44515e53389677cc83f22aa3a9527ba6f80803f
		{ &Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget, "RemoveWarpTarget" }, // a2660937962ff4380655c34e83e3a45ca294ef9e
		{ &Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTargets, "RemoveWarpTargets" }, // 45eb9de506cb634360ca60cad5a422f454bf14ae
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMotionWarpingComponent Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSearchForWindowsInAnimsWithinMontages = { "bSearchForWindowsInAnimsWithinMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMotionWarpingComponent), &UHT_STATICS::NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData), NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPreUpdate = { "OnPreUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, OnPreUpdate), Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreUpdate_MetaData), NewProp_OnPreUpdate_MetaData) }; // 925d33eee5fd886df3d7d88dd53f13f7b66d47f2
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerAdapter = { "OwnerAdapter", nullptr, (EPropertyFlags)0x0124080000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, OwnerAdapter), Z_Construct_UClass_UMotionWarpingBaseAdapter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAdapter_MetaData), NewProp_OwnerAdapter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PredictionAdapter = { "PredictionAdapter", nullptr, (EPropertyFlags)0x0124080000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, PredictionAdapter), Z_Construct_UClass_UMotionWarpingBaseAdapter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionAdapter_MetaData), NewProp_PredictionAdapter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedOwnerAdapter = { "CachedOwnerAdapter", nullptr, (EPropertyFlags)0x0124080000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, CachedOwnerAdapter), Z_Construct_UClass_UMotionWarpingBaseAdapter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOwnerAdapter_MetaData), NewProp_CachedOwnerAdapter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0124080000022801, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WarpTargets_Inner = { "WarpTargets", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(0, nullptr) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WarpTargets = { "WarpTargets", nullptr, (EPropertyFlags)0x0020088000022821, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, WarpTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargets_MetaData), NewProp_WarpTargets_MetaData) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SwitchOffConditions_Inner = { "SwitchOffConditions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSwitchOffConditionData, METADATA_PARAMS(0, nullptr) }; // 2b75da9c72ae89c84a25de3f6b88aeb81cba982f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SwitchOffConditions = { "SwitchOffConditions", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingComponent, SwitchOffConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffConditions_MetaData), NewProp_SwitchOffConditions_MetaData) }; // 2b75da9c72ae89c84a25de3f6b88aeb81cba982f
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPredictingTrajectory = { "bPredictingTrajectory", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMotionWarpingComponent), &UHT_STATICS::NewProp_bPredictingTrajectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPredictingTrajectory_MetaData), NewProp_bPredictingTrajectory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSearchForWindowsInAnimsWithinMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPreUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerAdapter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PredictionAdapter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedOwnerAdapter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPredictingTrajectory,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMotionWarpingComponent Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingComponent_StaticRegisterNativesUMotionWarpingComponent()
{
	UClass* Class = UMotionWarpingComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingComponent;
UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingComponent;
		if (!Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingComponent"),
				Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton,
				UMotionWarpingComponent_StaticRegisterNativesUMotionWarpingComponent,
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
		return Z_Registration_Info_UClass_UMotionWarpingComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UMotionWarpingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_WarpTargets(TEXT("WarpTargets"));
	const bool bIsValid = true
		&& Name_WarpTargets == ClassReps[(int32)ENetFields_Private::WarpTargets].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMotionWarpingComponent"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingComponent);
UMotionWarpingComponent::~UMotionWarpingComponent() {}
// ********** End Class UMotionWarpingComponent ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMotionWarpingWindowData, Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewStructOps, TEXT("MotionWarpingWindowData"),&Z_Registration_Info_UScriptStruct_FMotionWarpingWindowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingWindowData), 2427924047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingUtilities, TEXT("UMotionWarpingUtilities"), &Z_Registration_Info_UClass_UMotionWarpingUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingUtilities), 397127337U) },
		{ Z_Construct_UClass_UMotionWarpingComponent, TEXT("UMotionWarpingComponent"), &Z_Registration_Info_UClass_UMotionWarpingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingComponent), 835057326U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h__Script_MotionWarping_87195ab7ef22497f177a8f69cfa7668be92c768b{
	TEXT("/Script/MotionWarping"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
