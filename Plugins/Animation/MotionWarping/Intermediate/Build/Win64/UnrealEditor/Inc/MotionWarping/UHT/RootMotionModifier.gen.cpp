// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ERootMotionModifierState(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingUpdateContext(ETypeConstructPhase);
MOTIONWARPING_API UFunction* Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Blueprintable(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Scale(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Blueprintable(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Scale(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMotionWarpingUpdateContext ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMotionWarpingUpdateContext>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMotionWarpingUpdateContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n * Context passed to any active root motion modifier during the update phase. \n * Contains relevant data from the animation that contributed to root motion this frame (or in the past when replaying saved moves)\n */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Context passed to any active root motion modifier during the update phase.\nContains relevant data from the animation that contributed to root motion this frame (or in the past when replaying saved moves)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMotionWarpingUpdateContext constinit property declarations *******
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMotionWarpingUpdateContext constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingUpdateContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMotionWarpingUpdateContext Property Definitions ******************
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingUpdateContext, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousPosition = { "PreviousPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingUpdateContext, PreviousPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousPosition_MetaData), NewProp_PreviousPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingUpdateContext, CurrentPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPosition_MetaData), NewProp_CurrentPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingUpdateContext, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingUpdateContext, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingUpdateContext, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMotionWarpingUpdateContext Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"MotionWarpingUpdateContext",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMotionWarpingUpdateContext>(),
	alignof(FMotionWarpingUpdateContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext;
UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingUpdateContext(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("MotionWarpingUpdateContext"));
		}
		return Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMotionWarpingUpdateContext *****************************************

// ********** Begin Enum ERootMotionModifierState **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ERootMotionModifierState>()
{
	return Z_Construct_UEnum_MotionWarping_ERootMotionModifierState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Active.Comment", "/** The modifier is active and currently affecting the final root motion */" },
		{ "Active.Name", "ERootMotionModifierState::Active" },
		{ "Active.ToolTip", "The modifier is active and currently affecting the final root motion" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The possible states of a Root Motion Modifier */" },
#endif
		{ "Disabled.Comment", "/** The modifier will remain in the list (as long as the window is active) but will not modify the root motion */" },
		{ "Disabled.Name", "ERootMotionModifierState::Disabled" },
		{ "Disabled.ToolTip", "The modifier will remain in the list (as long as the window is active) but will not modify the root motion" },
		{ "MarkedForRemoval.Comment", "/** The modifier has been marked for removal. Usually because the warping window is done */" },
		{ "MarkedForRemoval.Name", "ERootMotionModifierState::MarkedForRemoval" },
		{ "MarkedForRemoval.ToolTip", "The modifier has been marked for removal. Usually because the warping window is done" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The possible states of a Root Motion Modifier" },
#endif
		{ "Waiting.Comment", "/** The modifier is waiting for the animation to hit the warping window */" },
		{ "Waiting.Name", "ERootMotionModifierState::Waiting" },
		{ "Waiting.ToolTip", "The modifier is waiting for the animation to hit the warping window" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionModifierState::Waiting", (int64)ERootMotionModifierState::Waiting },
		{ "ERootMotionModifierState::Active", (int64)ERootMotionModifierState::Active },
		{ "ERootMotionModifierState::MarkedForRemoval", (int64)ERootMotionModifierState::MarkedForRemoval },
		{ "ERootMotionModifierState::Disabled", (int64)ERootMotionModifierState::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"ERootMotionModifierState",
	"ERootMotionModifierState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERootMotionModifierState;
UEnum* Z_Construct_UEnum_MotionWarping_ERootMotionModifierState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERootMotionModifierState.OuterSingleton)
		{
			ZRIE_ERootMotionModifierState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("ERootMotionModifierState"));
		}
		return ZRIE_ERootMotionModifierState.OuterSingleton;
	}
	if (!ZRIE_ERootMotionModifierState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERootMotionModifierState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERootMotionModifierState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERootMotionModifierState ****************************************************

// ********** Begin Delegate FOnRootMotionModifierDelegate *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* RootMotionModifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRootMotionModifierDelegate constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRootMotionModifierDelegate constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRootMotionModifierDelegate Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComp_MetaData), NewProp_MotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RootMotionModifier = { "RootMotionModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms, RootMotionModifier), Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootMotionModifier,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnRootMotionModifierDelegate Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping, nullptr, "OnRootMotionModifierDelegate__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnRootMotionModifierDelegate *******************************************

// ********** Begin Class URootMotionModifier ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URootMotionModifier\n///////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URootMotionModifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source of the root motion we are warping */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source of the root motion we are warping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start time of the warping window */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start time of the warping window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** End time of the warping window */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End time of the warping window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPosition_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Previous playback time of the animation */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous playback time of the animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current playback time of the animation */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current playback time of the animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current blend weight of the animation */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current blend weight of the animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current play rate of the animation */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current play rate of the animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character owner transform at the time this modifier becomes active */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character owner transform at the time this modifier becomes active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActualStartTime_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actual playback time when the modifier becomes active */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual playback time when the modifier becomes active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalRootMotionWithinWindow_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total root motion within the warping window */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total root motion within the warping window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActivateDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate called when this modifier is activated (starts affecting the root motion) */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when this modifier is activated (starts affecting the root motion)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate called when this modifier updates while active (affecting the root motion) */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when this modifier updates while active (affecting the root motion)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeactivateDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate called when this modifier is deactivated (stops affecting the root motion) */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when this modifier is deactivated (stops affecting the root motion)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current state */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current state" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier constinit property declarations **********************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualStartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TotalRootMotionWithinWindow;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnActivateDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUpdateDelegate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDeactivateDelegate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URootMotionModifier constinit property declarations ************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URootMotionModifier Property Definitions *********************************
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, Animation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PreviousPosition = { "PreviousPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, PreviousPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousPosition_MetaData), NewProp_PreviousPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, CurrentPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPosition_MetaData), NewProp_CurrentPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTransform_MetaData), NewProp_StartTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ActualStartTime = { "ActualStartTime", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, ActualStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActualStartTime_MetaData), NewProp_ActualStartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TotalRootMotionWithinWindow = { "TotalRootMotionWithinWindow", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, TotalRootMotionWithinWindow), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalRootMotionWithinWindow_MetaData), NewProp_TotalRootMotionWithinWindow_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_OnActivateDelegate = { "OnActivateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, OnActivateDelegate), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActivateDelegate_MetaData), NewProp_OnActivateDelegate_MetaData) }; // 21fb0de39754f5962d244348ea9d773427ec8f94
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_OnUpdateDelegate = { "OnUpdateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, OnUpdateDelegate), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpdateDelegate_MetaData), NewProp_OnUpdateDelegate_MetaData) }; // 21fb0de39754f5962d244348ea9d773427ec8f94
const UECodeGen_Private::FDelegatePropertyParams UHT_STATICS::NewProp_OnDeactivateDelegate = { "OnDeactivateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, OnDeactivateDelegate), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeactivateDelegate_MetaData), NewProp_OnDeactivateDelegate_MetaData) }; // 21fb0de39754f5962d244348ea9d773427ec8f94
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier, State), Z_Construct_UEnum_MotionWarping_ERootMotionModifierState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 22ec6fe6b6b227e2c10f9ff925c6aaece7c70a87
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviousPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActualStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalRootMotionWithinWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnActivateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDeactivateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URootMotionModifier Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier;
UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier;
		if (!Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier"),
				Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_URootMotionModifier.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier);
URootMotionModifier::~URootMotionModifier() {}
// ********** End Class URootMotionModifier ********************************************************

// ********** Begin Enum EWarpTargetLocationOffsetDirection ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpTargetLocationOffsetDirection>()
{
	return Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "TargetsForwardVector.Comment", "/* LocationOffset.X translates the target transform along the target component's forward vector. */" },
		{ "TargetsForwardVector.Name", "EWarpTargetLocationOffsetDirection::TargetsForwardVector" },
		{ "TargetsForwardVector.ToolTip", "LocationOffset.X translates the target transform along the target component's forward vector." },
		{ "VectorFromTargetToOwner.Comment", "/* LocationOffset.X translates the target transform along the vector from the target to the owning actor. */" },
		{ "VectorFromTargetToOwner.Name", "EWarpTargetLocationOffsetDirection::VectorFromTargetToOwner" },
		{ "VectorFromTargetToOwner.ToolTip", "LocationOffset.X translates the target transform along the vector from the target to the owning actor." },
		{ "WorldSpace.Comment", "/* LocationOffset moves the target transform in world space */" },
		{ "WorldSpace.Name", "EWarpTargetLocationOffsetDirection::WorldSpace" },
		{ "WorldSpace.ToolTip", "LocationOffset moves the target transform in world space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarpTargetLocationOffsetDirection::TargetsForwardVector", (int64)EWarpTargetLocationOffsetDirection::TargetsForwardVector },
		{ "EWarpTargetLocationOffsetDirection::VectorFromTargetToOwner", (int64)EWarpTargetLocationOffsetDirection::VectorFromTargetToOwner },
		{ "EWarpTargetLocationOffsetDirection::WorldSpace", (int64)EWarpTargetLocationOffsetDirection::WorldSpace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EWarpTargetLocationOffsetDirection",
	"EWarpTargetLocationOffsetDirection",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWarpTargetLocationOffsetDirection;
UEnum* Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWarpTargetLocationOffsetDirection.OuterSingleton)
		{
			ZRIE_EWarpTargetLocationOffsetDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EWarpTargetLocationOffsetDirection"));
		}
		return ZRIE_EWarpTargetLocationOffsetDirection.OuterSingleton;
	}
	if (!ZRIE_EWarpTargetLocationOffsetDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWarpTargetLocationOffsetDirection.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWarpTargetLocationOffsetDirection.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWarpTargetLocationOffsetDirection ******************************************

// ********** Begin ScriptStruct FMotionWarpingTarget **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMotionWarpingTarget>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMotionWarpingTarget); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents a point of alignment in the world */" },
#endif
		{ "HasNativeMake", "/Script/MotionWarping.MotionWarpingFunctionLibrary.MakeMotionWarpingTarget" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a point of alignment in the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique name for this warp target */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique name for this warp target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the warp target is created from a component this stores the location of the component at the time of creation, otherwise its the location supplied by the user */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the warp target is created from a component this stores the location of the component at the time of creation, otherwise its the location supplied by the user" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the warp target is created from a component this stores the rotation of the component at the time of creation, otherwise its the rotation supplied by the user */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the warp target is created from a component this stores the rotation of the component at the time of creation, otherwise its the rotation supplied by the user" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional component used to calculate the final target transform */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional component used to calculate the final target transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional bone name in the component used to calculate the final target transform */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional bone name in the component used to calculate the final target transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowComponent_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the target transform calculated from a component and an optional bone should be updated during the warp \n\x09Only relevant when the warp target is created from a component  */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the target transform calculated from a component and an optional bone should be updated during the warp\n      Only relevant when the warp target is created from a component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffsetDirection_MetaData[] = {
		{ "Category", "Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines how LocationOffset is applied by FMotionWarpingTarget when calculating a target transform\n\x09Only relevant when the warp target is created from a component */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how LocationOffset is applied by FMotionWarpingTarget when calculating a target transform\n      Only relevant when the warp target is created from a component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional static location offset. Only relevant when the warp target is created from a component */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional static location offset. Only relevant when the warp target is created from a component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional static rotation offset. Only relevant when the warp target is created from a component */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional static rotation offset. Only relevant when the warp target is created from a component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[] = {
		{ "Category", "Defaults" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Actor that uses this warping target. Used for offset calculation of target transform is provided via component  */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Actor that uses this warping target. Used for offset calculation of target transform is provided via component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMotionWarpingTarget constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bFollowComponent_SetBit(void* Obj)
	{
		((FMotionWarpingTarget*)Obj)->bFollowComponent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationOffsetDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationOffsetDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AvatarActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMotionWarpingTarget constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMotionWarpingTarget Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, Component), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFollowComponent = { "bFollowComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMotionWarpingTarget), &UHT_STATICS::NewProp_bFollowComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowComponent_MetaData), NewProp_bFollowComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LocationOffsetDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LocationOffsetDirection = { "LocationOffsetDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, LocationOffsetDirection), Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffsetDirection_MetaData), NewProp_LocationOffsetDirection_MetaData) }; // 261a57dd4fe3ef95924911b480eca7641bc9ba01
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingTarget, AvatarActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarActor_MetaData), NewProp_AvatarActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFollowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffsetDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffsetDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AvatarActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMotionWarpingTarget Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"MotionWarpingTarget",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMotionWarpingTarget>(),
	alignof(FMotionWarpingTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionWarpingTarget;
UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingTarget, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("MotionWarpingTarget"));
		}
		return Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMotionWarpingTarget ************************************************

// ********** Begin Enum EMotionWarpRotationType ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionWarpRotationType>()
{
	return Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/** Character rotates to match the rotation of the sync point */" },
		{ "Default.Name", "EMotionWarpRotationType::Default" },
		{ "Default.ToolTip", "Character rotates to match the rotation of the sync point" },
		{ "Facing.Comment", "/** Character rotates to face the sync point */" },
		{ "Facing.Name", "EMotionWarpRotationType::Facing" },
		{ "Facing.ToolTip", "Character rotates to face the sync point" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "OppositeDefault.Comment", "/** Character rotates to match the rotation of the sync point, rotated by half of full angle around up axis (180 degrees yaw) */" },
		{ "OppositeDefault.Hidden", "" },
		{ "OppositeDefault.Name", "EMotionWarpRotationType::OppositeDefault" },
		{ "OppositeDefault.ToolTip", "Character rotates to match the rotation of the sync point, rotated by half of full angle around up axis (180 degrees yaw)" },
		{ "OppositeFacing.Comment", "/** Character rotates to face the sync point with their back. Essentially facing + 180 degrees yaw. */" },
		{ "OppositeFacing.Hidden", "" },
		{ "OppositeFacing.Name", "EMotionWarpRotationType::OppositeFacing" },
		{ "OppositeFacing.ToolTip", "Character rotates to face the sync point with their back. Essentially facing + 180 degrees yaw." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMotionWarpRotationType::Default", (int64)EMotionWarpRotationType::Default },
		{ "EMotionWarpRotationType::Facing", (int64)EMotionWarpRotationType::Facing },
		{ "EMotionWarpRotationType::OppositeDefault", (int64)EMotionWarpRotationType::OppositeDefault },
		{ "EMotionWarpRotationType::OppositeFacing", (int64)EMotionWarpRotationType::OppositeFacing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EMotionWarpRotationType",
	"EMotionWarpRotationType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMotionWarpRotationType;
UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMotionWarpRotationType.OuterSingleton)
		{
			ZRIE_EMotionWarpRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EMotionWarpRotationType"));
		}
		return ZRIE_EMotionWarpRotationType.OuterSingleton;
	}
	if (!ZRIE_EMotionWarpRotationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMotionWarpRotationType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMotionWarpRotationType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMotionWarpRotationType *****************************************************

// ********** Begin Enum EMotionWarpRotationMethod *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionWarpRotationMethod>()
{
	return Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ConstantRate.Comment", "/** Rotate with a constant rotation rate*/" },
		{ "ConstantRate.Name", "EMotionWarpRotationMethod::ConstantRate" },
		{ "ConstantRate.ToolTip", "Rotate with a constant rotation rate" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "Scale.Comment", "/** Scale rotation in a way that by the end of the anim notify state the owner's rotation matches the warp target's rotation */" },
		{ "Scale.Name", "EMotionWarpRotationMethod::Scale" },
		{ "Scale.ToolTip", "Scale rotation in a way that by the end of the anim notify state the owner's rotation matches the warp target's rotation" },
		{ "Slerp.Comment", "/** Rotate with spherical linear interpolation */" },
		{ "Slerp.Name", "EMotionWarpRotationMethod::Slerp" },
		{ "Slerp.ToolTip", "Rotate with spherical linear interpolation" },
		{ "SlerpWithClampedRate.Comment", "/** Rotate with spherical linear interpolation, not exceeding a max rotation rate*/" },
		{ "SlerpWithClampedRate.Name", "EMotionWarpRotationMethod::SlerpWithClampedRate" },
		{ "SlerpWithClampedRate.ToolTip", "Rotate with spherical linear interpolation, not exceeding a max rotation rate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMotionWarpRotationMethod::Slerp", (int64)EMotionWarpRotationMethod::Slerp },
		{ "EMotionWarpRotationMethod::SlerpWithClampedRate", (int64)EMotionWarpRotationMethod::SlerpWithClampedRate },
		{ "EMotionWarpRotationMethod::ConstantRate", (int64)EMotionWarpRotationMethod::ConstantRate },
		{ "EMotionWarpRotationMethod::Scale", (int64)EMotionWarpRotationMethod::Scale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EMotionWarpRotationMethod",
	"EMotionWarpRotationMethod",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMotionWarpRotationMethod;
UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMotionWarpRotationMethod.OuterSingleton)
		{
			ZRIE_EMotionWarpRotationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EMotionWarpRotationMethod"));
		}
		return ZRIE_EMotionWarpRotationMethod.OuterSingleton;
	}
	if (!ZRIE_EMotionWarpRotationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMotionWarpRotationMethod.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMotionWarpRotationMethod.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMotionWarpRotationMethod ***************************************************

// ********** Begin Enum EWarpPointAnimProvider ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpPointAnimProvider>()
{
	return Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Bone.Comment", "/** Warp point defined by a bone */" },
		{ "Bone.Name", "EWarpPointAnimProvider::Bone" },
		{ "Bone.ToolTip", "Warp point defined by a bone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method used to extract the warp point from the animation */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "None.Comment", "/** No warp point is provided */" },
		{ "None.Name", "EWarpPointAnimProvider::None" },
		{ "None.ToolTip", "No warp point is provided" },
		{ "Static.Comment", "/** Warp point defined by a 'hard-coded' transform  user can enter through the warping notify */" },
		{ "Static.Name", "EWarpPointAnimProvider::Static" },
		{ "Static.ToolTip", "Warp point defined by a 'hard-coded' transform  user can enter through the warping notify" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method used to extract the warp point from the animation" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarpPointAnimProvider::None", (int64)EWarpPointAnimProvider::None },
		{ "EWarpPointAnimProvider::Static", (int64)EWarpPointAnimProvider::Static },
		{ "EWarpPointAnimProvider::Bone", (int64)EWarpPointAnimProvider::Bone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EWarpPointAnimProvider",
	"EWarpPointAnimProvider",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWarpPointAnimProvider;
UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWarpPointAnimProvider.OuterSingleton)
		{
			ZRIE_EWarpPointAnimProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EWarpPointAnimProvider"));
		}
		return ZRIE_EWarpPointAnimProvider.OuterSingleton;
	}
	if (!ZRIE_EWarpPointAnimProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWarpPointAnimProvider.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWarpPointAnimProvider.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWarpPointAnimProvider ******************************************************

// ********** Begin Class URootMotionModifier_Warp *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_Warp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetName_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name used to find the warp target for this modifier */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name used to find the warp target for this modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointAnimProvider_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointAnimTransform_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Hide from the UI when Target != Static\n" },
#endif
		{ "EditCondition", "WarpPointAnimProvider == EWarpPointAnimProvider::Static" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Hide from the UI when Target != Static" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointAnimBoneName_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Hide from the UI when Target != Bone\n" },
#endif
		{ "EditCondition", "WarpPointAnimProvider == EWarpPointAnimProvider::Bone" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Hide from the UI when Target != Bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarpTranslation_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to warp the translation component of the root motion */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to warp the translation component of the root motion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxis_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to ignore the Z component of the translation. Z motion will remain untouched */" },
#endif
		{ "EditCondition", "bWarpTranslation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to ignore the Z component of the translation. Z motion will remain untouched" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarpToFeetLocation_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether we warp the actors location or their foot location to the warp target */" },
#endif
		{ "EditCondition", "bWarpTranslation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether we warp the actors location or their foot location to the warp target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddTranslationEasingFunc_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easing function used when adding translation. Only relevant when there is no translation in the animation */" },
#endif
		{ "EditCondition", "bWarpTranslation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easing function used when adding translation. Only relevant when there is no translation in the animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddTranslationEasingCurve_MetaData[] = {
		{ "Category", "Blend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom curve used to add translation when there is none to warp. Only relevant when AddTranslationEasingFunc is set to Custom */" },
#endif
		{ "EditCondition", "AddTranslationEasingFunc==EAlphaBlendOption::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom curve used to add translation when there is none to warp. Only relevant when AddTranslationEasingFunc is set to Custom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarpRotation_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to warp the rotation component of the root motion */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to warp the rotation component of the root motion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether rotation should be warp to match the rotation of the sync point or to face the sync point */" },
#endif
		{ "EditCondition", "bWarpRotation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether rotation should be warp to match the rotation of the sync point or to face the sync point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMethod_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The method of rotation to use */" },
#endif
		{ "EditCondition", "bWarpRotation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The method of rotation to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractRemainingRootMotion_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should root motion after this notify state be subtracted from warp target transform. \n\x09This means actor will arrive at warp target transform when the animation finishes, not when the notify ends */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should root motion after this notify state be subtracted from warp target transform.\n      This means actor will arrive at warp target transform when the animation finishes, not when the notify ends" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRotationOffset_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applied as a final rotational offset on the warp target */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applied as a final rotational offset on the warp target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpRotationTimeMultiplier_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allow to modify how fast the rotation is warped.\n\x09 * e.g if the window duration is 2sec and this is 0.5, the target rotation will be reached in 1sec instead of 2sec\n\x09 */" },
#endif
		{ "EditCondition", "RotationMethod!=EMotionWarpRotationMethod::ConstantRate && RotationMethod!=EMotionWarpRotationMethod::Scale && bWarpRotation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow to modify how fast the rotation is warped.\ne.g if the window duration is 2sec and this is 0.5, the target rotation will be reached in 1sec instead of 2sec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpMaxRotationRate_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotation rate in degrees/sec. Will be the value used in constant rotation rate*/" },
#endif
		{ "EditCondition", "RotationMethod!=EMotionWarpRotationMethod::Slerp && bWarpRotation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotation rate in degrees/sec. Will be the value used in constant rotation rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTargetTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionRemainingAfterNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier_Warp constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WarpPointAnimProvider_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WarpPointAnimProvider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpPointAnimTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpPointAnimBoneName;
	static void NewProp_bWarpTranslation_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bWarpTranslation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpTranslation;
	static void NewProp_bIgnoreZAxis_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bIgnoreZAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxis;
	static void NewProp_bWarpToFeetLocation_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bWarpToFeetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpToFeetLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddTranslationEasingFunc_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AddTranslationEasingFunc;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddTranslationEasingCurve;
	static void NewProp_bWarpRotation_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bWarpRotation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMethod;
	static void NewProp_bSubtractRemainingRootMotion_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bSubtractRemainingRootMotion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractRemainingRootMotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpRotationTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpMaxRotationRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTargetTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionRemainingAfterNotify;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URootMotionModifier_Warp constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_Warp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URootMotionModifier_Warp Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, WarpTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargetName_MetaData), NewProp_WarpTargetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_WarpPointAnimProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_WarpPointAnimProvider = { "WarpPointAnimProvider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, WarpPointAnimProvider), Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpPointAnimProvider_MetaData), NewProp_WarpPointAnimProvider_MetaData) }; // bb16ffae1a80c45160d4284f5b1f453bf07d7df0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WarpPointAnimTransform = { "WarpPointAnimTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, WarpPointAnimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpPointAnimTransform_MetaData), NewProp_WarpPointAnimTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpPointAnimBoneName = { "WarpPointAnimBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, WarpPointAnimBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpPointAnimBoneName_MetaData), NewProp_WarpPointAnimBoneName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWarpTranslation = { "bWarpTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_Warp), &UHT_STATICS::NewProp_bWarpTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarpTranslation_MetaData), NewProp_bWarpTranslation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIgnoreZAxis = { "bIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_Warp), &UHT_STATICS::NewProp_bIgnoreZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreZAxis_MetaData), NewProp_bIgnoreZAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWarpToFeetLocation = { "bWarpToFeetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_Warp), &UHT_STATICS::NewProp_bWarpToFeetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarpToFeetLocation_MetaData), NewProp_bWarpToFeetLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AddTranslationEasingFunc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AddTranslationEasingFunc = { "AddTranslationEasingFunc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, AddTranslationEasingFunc), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddTranslationEasingFunc_MetaData), NewProp_AddTranslationEasingFunc_MetaData) }; // 262554abb537574a5df45d520d8b52669d28d14c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AddTranslationEasingCurve = { "AddTranslationEasingCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, AddTranslationEasingCurve), Z_Construct_UClass_UCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddTranslationEasingCurve_MetaData), NewProp_AddTranslationEasingCurve_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWarpRotation = { "bWarpRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_Warp), &UHT_STATICS::NewProp_bWarpRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarpRotation_MetaData), NewProp_bWarpRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, RotationType), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationType_MetaData), NewProp_RotationType_MetaData) }; // 11baa9d5a4f5d269e97e826545470f125eec3a15
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RotationMethod = { "RotationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, RotationMethod), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMethod_MetaData), NewProp_RotationMethod_MetaData) }; // 27043b6208392b807629a02c7a81d8adcc1b999e
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSubtractRemainingRootMotion = { "bSubtractRemainingRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_Warp), &UHT_STATICS::NewProp_bSubtractRemainingRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtractRemainingRootMotion_MetaData), NewProp_bSubtractRemainingRootMotion_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdditionalRotationOffset = { "AdditionalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, AdditionalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalRotationOffset_MetaData), NewProp_AdditionalRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WarpRotationTimeMultiplier = { "WarpRotationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, WarpRotationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpRotationTimeMultiplier_MetaData), NewProp_WarpRotationTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WarpMaxRotationRate = { "WarpMaxRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, WarpMaxRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpMaxRotationRate_MetaData), NewProp_WarpMaxRotationRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CachedTargetTransform = { "CachedTargetTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, CachedTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTargetTransform_MetaData), NewProp_CachedTargetTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RootMotionRemainingAfterNotify = { "RootMotionRemainingAfterNotify", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Warp, RootMotionRemainingAfterNotify), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionRemainingAfterNotify_MetaData), NewProp_RootMotionRemainingAfterNotify_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpPointAnimProvider_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpPointAnimProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpPointAnimTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpPointAnimBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWarpTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIgnoreZAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWarpToFeetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AddTranslationEasingFunc_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AddTranslationEasingFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AddTranslationEasingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWarpRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSubtractRemainingRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpRotationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpMaxRotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedTargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootMotionRemainingAfterNotify,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URootMotionModifier_Warp Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier_Warp,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier_Warp;
UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier_Warp;
		if (!Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_Warp"),
				Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_URootMotionModifier_Warp.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier_Warp);
URootMotionModifier_Warp::~URootMotionModifier_Warp() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URootMotionModifier_Warp)
// ********** End Class URootMotionModifier_Warp ***************************************************

// ********** Begin Class UDEPRECATED_RootMotionModifier_SimpleWarp ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URootMotionModifier_SimpleWarp. \n// DEPRECATED in favor of URootMotionModifier_SkewWarp (kept for reference)\n///////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Simple Warp" },
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URootMotionModifier_SimpleWarp.\nDEPRECATED in favor of URootMotionModifier_SkewWarp (kept for reference)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDEPRECATED_RootMotionModifier_SimpleWarp constinit property declarations 
// ********** End Class UDEPRECATED_RootMotionModifier_SimpleWarp constinit property declarations **
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RootMotionModifier_SimpleWarp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_Warp,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x028812A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp;
UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDEPRECATED_RootMotionModifier_SimpleWarp;
		if (!Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_SimpleWarp"),
				Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDEPRECATED_RootMotionModifier_SimpleWarp);
UDEPRECATED_RootMotionModifier_SimpleWarp::~UDEPRECATED_RootMotionModifier_SimpleWarp() {}
// ********** End Class UDEPRECATED_RootMotionModifier_SimpleWarp **********************************

// ********** Begin Class URootMotionModifier_Scale Function AddRootMotionModifierScale ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics
struct UHT_STATICS
{
	struct RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms
	{
		UMotionWarpingComponent* InMotionWarpingComp;
		const UAnimSequenceBase* InAnimation;
		float InStartTime;
		float InEndTime;
		FVector InScale;
		URootMotionModifier_Scale* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "CPP_Default_InScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[] = {
		{ "DisplayName", "Scale" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRootMotionModifierScale constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMotionWarpingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRootMotionModifierScale constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRootMotionModifierScale Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InMotionWarpingComp = { "InMotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InMotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMotionWarpingComp_MetaData), NewProp_InMotionWarpingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InAnimation), Z_Construct_UClass_UAnimSequenceBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAnimation_MetaData), NewProp_InAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStartTime_MetaData), NewProp_InStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InEndTime = { "InEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEndTime_MetaData), NewProp_InEndTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScale_MetaData), NewProp_InScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_Scale, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMotionWarpingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddRootMotionModifierScale Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_Scale, nullptr, "AddRootMotionModifierScale", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URootMotionModifier_Scale::execAddRootMotionModifierScale)
{
	P_GET_OBJECT(UMotionWarpingComponent,Z_Param_InMotionWarpingComp);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InEndTime);
	P_GET_STRUCT(FVector,Z_Param_InScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URootMotionModifier_Scale**)Z_Param__Result=URootMotionModifier_Scale::AddRootMotionModifierScale(Z_Param_InMotionWarpingComp,Z_Param_InAnimation,Z_Param_InStartTime,Z_Param_InEndTime,Z_Param_InScale);
	P_NATIVE_END;
}
// ********** End Class URootMotionModifier_Scale Function AddRootMotionModifierScale **************

// ********** Begin Class URootMotionModifier_Scale ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_Scale_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URootMotionModifier_Scale\n///////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Scale" },
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URootMotionModifier_Scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vector used to scale each component of the translation */" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector used to scale each component of the translation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier_Scale constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URootMotionModifier_Scale constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddRootMotionModifierScale"), .Pointer = &URootMotionModifier_Scale::execAddRootMotionModifierScale },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale, "AddRootMotionModifierScale" }, // e87bdd3bb45c86a33febc32063b7000c444ec74f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_Scale>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URootMotionModifier_Scale Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_Scale, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URootMotionModifier_Scale Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier_Scale,
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
static void URootMotionModifier_Scale_StaticRegisterNativesURootMotionModifier_Scale()
{
	UClass* Class = URootMotionModifier_Scale::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier_Scale;
UClass* Z_Construct_UClass_URootMotionModifier_Scale(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier_Scale;
		if (!Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_Scale"),
				Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton,
				URootMotionModifier_Scale_StaticRegisterNativesURootMotionModifier_Scale,
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
		return Z_Registration_Info_UClass_URootMotionModifier_Scale.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier_Scale);
URootMotionModifier_Scale::~URootMotionModifier_Scale() {}
// ********** End Class URootMotionModifier_Scale **************************************************

// ********** Begin Class URootMotionModifier_Blueprintable Function BP_ProcessRootMotion **********
struct RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms
{
	const AActor* Actor;
	const USkeletalMeshComponent* Mesh;
	FTransform InRootMotion;
	float DeltaSeconds;
	FTransform ReturnValue;
};
static FName NAME_URootMotionModifier_Blueprintable_BP_ProcessRootMotion = FName(TEXT("BP_ProcessRootMotion"));
FTransform URootMotionModifier_Blueprintable::BP_ProcessRootMotion(const AActor* Actor, const USkeletalMeshComponent* Mesh, FTransform const& InRootMotion, float DeltaSeconds) const
{
	RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms Parms;
	Parms.Actor=Actor;
	Parms.Mesh=Mesh;
	Parms.InRootMotion=InRootMotion;
	Parms.DeltaSeconds=DeltaSeconds;
	UFunction* Func = FindFunctionChecked(NAME_URootMotionModifier_Blueprintable_BP_ProcessRootMotion);
		const_cast<URootMotionModifier_Blueprintable*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URootMotionModifier_Blueprintable_BP_ProcessRootMotion_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Process Root Motion" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRootMotion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_ProcessRootMotion constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRootMotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_ProcessRootMotion constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_ProcessRootMotion Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms, Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InRootMotion = { "InRootMotion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms, InRootMotion), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRootMotion_MetaData), NewProp_InRootMotion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BP_ProcessRootMotion Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_Blueprintable, nullptr, "BP_ProcessRootMotion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RootMotionModifier_Blueprintable_eventBP_ProcessRootMotion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URootMotionModifier_Blueprintable_BP_ProcessRootMotion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class URootMotionModifier_Blueprintable Function BP_ProcessRootMotion ************

// ********** Begin Class URootMotionModifier_Blueprintable ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_Blueprintable_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URootMotionModifier_Blueprintable\n///////////////////////////////////////////////////////////////\n" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Blueprintable" },
		{ "IncludePath", "RootMotionModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URootMotionModifier_Blueprintable" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier_Blueprintable constinit property declarations ********
// ********** End Class URootMotionModifier_Blueprintable constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_Blueprintable_BP_ProcessRootMotion, "BP_ProcessRootMotion" }, // 8730466152c62b75d6bded171789add9cecd9d17
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_Blueprintable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier_Blueprintable,
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
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier_Blueprintable;
UClass* Z_Construct_UClass_URootMotionModifier_Blueprintable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier_Blueprintable;
		if (!Z_Registration_Info_UClass_URootMotionModifier_Blueprintable.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_Blueprintable"),
				Z_Registration_Info_UClass_URootMotionModifier_Blueprintable.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_URootMotionModifier_Blueprintable.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier_Blueprintable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_Blueprintable.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier_Blueprintable.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier_Blueprintable);
URootMotionModifier_Blueprintable::~URootMotionModifier_Blueprintable() {}
// ********** End Class URootMotionModifier_Blueprintable ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MotionWarping_ERootMotionModifierState, TEXT("ERootMotionModifierState"), &ZRIE_ERootMotionModifierState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 585920486U) },
		{ Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection, TEXT("EWarpTargetLocationOffsetDirection"), &ZRIE_EWarpTargetLocationOffsetDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 639260637U) },
		{ Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, TEXT("EMotionWarpRotationType"), &ZRIE_EMotionWarpRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 297445845U) },
		{ Z_Construct_UEnum_MotionWarping_EMotionWarpRotationMethod, TEXT("EMotionWarpRotationMethod"), &ZRIE_EMotionWarpRotationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 654588770U) },
		{ Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, TEXT("EWarpPointAnimProvider"), &ZRIE_EWarpPointAnimProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3138846638U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMotionWarpingUpdateContext, Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewStructOps, TEXT("MotionWarpingUpdateContext"),&Z_Registration_Info_UScriptStruct_FMotionWarpingUpdateContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingUpdateContext), 1927401284U) },
		{ Z_Construct_UScriptStruct_FMotionWarpingTarget, Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewStructOps, TEXT("MotionWarpingTarget"),&Z_Registration_Info_UScriptStruct_FMotionWarpingTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingTarget), 4158598496U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier, TEXT("URootMotionModifier"), &Z_Registration_Info_UClass_URootMotionModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier), 2361472191U) },
		{ Z_Construct_UClass_URootMotionModifier_Warp, TEXT("URootMotionModifier_Warp"), &Z_Registration_Info_UClass_URootMotionModifier_Warp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_Warp), 4087258436U) },
		{ Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp, TEXT("UDEPRECATED_RootMotionModifier_SimpleWarp"), &Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RootMotionModifier_SimpleWarp), 2601588469U) },
		{ Z_Construct_UClass_URootMotionModifier_Scale, TEXT("URootMotionModifier_Scale"), &Z_Registration_Info_UClass_URootMotionModifier_Scale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_Scale), 1015138711U) },
		{ Z_Construct_UClass_URootMotionModifier_Blueprintable, TEXT("URootMotionModifier_Blueprintable"), &Z_Registration_Info_UClass_URootMotionModifier_Blueprintable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_Blueprintable), 3530272108U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h__Script_MotionWarping_ce2c93621494093a9f0cc903e4a0cc382dc63d86{
	TEXT("/Script/MotionWarping"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
