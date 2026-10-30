// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMotionWarpingSwitchOffCondition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchOffConditionData(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCondition(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSwitchOffConditionData *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSwitchOffConditionData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSwitchOffConditionData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSwitchOffConditionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffConditions_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSwitchOffConditionData constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchOffConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwitchOffConditions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSwitchOffConditionData constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchOffConditionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSwitchOffConditionData Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchOffConditionData, WarpTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargetName_MetaData), NewProp_WarpTargetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SwitchOffConditions_Inner = { "SwitchOffConditions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMotionWarpingSwitchOffCondition, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SwitchOffConditions = { "SwitchOffConditions", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSwitchOffConditionData, SwitchOffConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffConditions_MetaData), NewProp_SwitchOffConditions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSwitchOffConditionData Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"SwitchOffConditionData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSwitchOffConditionData>(),
	alignof(FSwitchOffConditionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSwitchOffConditionData;
UScriptStruct* Z_Construct_UScriptStruct_FSwitchOffConditionData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchOffConditionData, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("SwitchOffConditionData"));
		}
		return Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSwitchOffConditionData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSwitchOffConditionData *********************************************

// ********** Begin Enum ESwitchOffConditionEffect *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionEffect>()
{
	return Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CancelFollow.Comment", "/**Changes associated motion warping target from component to a location of this component\n\x09* in the frame in which this switch off condition appeared */" },
		{ "CancelFollow.DisplayName", "Cancel Follow Component" },
		{ "CancelFollow.Name", "ESwitchOffConditionEffect::CancelFollow" },
		{ "CancelFollow.ToolTip", "Changes associated motion warping target from component to a location of this component\nin the frame in which this switch off condition appeared" },
		{ "CancelWarping.Comment", "/**Removes associated motion warping target*/" },
		{ "CancelWarping.DisplayName", "Cancel Warping" },
		{ "CancelWarping.Name", "ESwitchOffConditionEffect::CancelWarping" },
		{ "CancelWarping.ToolTip", "Removes associated motion warping target" },
		{ "Category", "MotionWarping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Result of switch off condition.*/" },
#endif
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
		{ "PauseRootMotion.Comment", "/**During time slot in the animation, where switch off condition is true, play the animation in place*/" },
		{ "PauseRootMotion.DisplayName", "Pause Root Motion" },
		{ "PauseRootMotion.Name", "ESwitchOffConditionEffect::PauseRootMotion" },
		{ "PauseRootMotion.ToolTip", "During time slot in the animation, where switch off condition is true, play the animation in place" },
		{ "PauseWarping.Comment", "/**During time slot in the animation, where switch off condition is true, only play root motion, without warping*/" },
		{ "PauseWarping.DisplayName", "Pause Warping" },
		{ "PauseWarping.Name", "ESwitchOffConditionEffect::PauseWarping" },
		{ "PauseWarping.ToolTip", "During time slot in the animation, where switch off condition is true, only play root motion, without warping" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of switch off condition." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchOffConditionEffect::CancelFollow", (int64)ESwitchOffConditionEffect::CancelFollow },
		{ "ESwitchOffConditionEffect::CancelWarping", (int64)ESwitchOffConditionEffect::CancelWarping },
		{ "ESwitchOffConditionEffect::PauseWarping", (int64)ESwitchOffConditionEffect::PauseWarping },
		{ "ESwitchOffConditionEffect::PauseRootMotion", (int64)ESwitchOffConditionEffect::PauseRootMotion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"ESwitchOffConditionEffect",
	"ESwitchOffConditionEffect",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESwitchOffConditionEffect;
UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESwitchOffConditionEffect.OuterSingleton)
		{
			ZRIE_ESwitchOffConditionEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("ESwitchOffConditionEffect"));
		}
		return ZRIE_ESwitchOffConditionEffect.OuterSingleton;
	}
	if (!ZRIE_ESwitchOffConditionEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESwitchOffConditionEffect.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESwitchOffConditionEffect.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESwitchOffConditionEffect ***************************************************

// ********** Begin Class UMotionWarpingSwitchOffCondition *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingSwitchOffCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "MotionWarping" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionWarpingSwitchOffCondition.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "Category", "MotionWarping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to false, switch off condition will use target actor location */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to false, switch off condition will use target actor location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingSwitchOffCondition constinit property declarations *********
	static void NewProp_bUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((UMotionWarpingSwitchOffCondition*)Obj)->bUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWarpTargetAsTargetLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Effect_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMotionWarpingSwitchOffCondition constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingSwitchOffCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMotionWarpingSwitchOffCondition Property Definitions ********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseWarpTargetAsTargetLocation = { "bUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMotionWarpingSwitchOffCondition), &UHT_STATICS::NewProp_bUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWarpTargetAsTargetLocation_MetaData), NewProp_bUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Effect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffCondition, Effect), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) }; // 861e4df7aa5ffe35a72eb43493cb48aa5698047f
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffCondition, OwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActor_MetaData), NewProp_OwnerActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffCondition, TargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Effect_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMotionWarpingSwitchOffCondition Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingSwitchOffCondition,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition;
UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingSwitchOffCondition;
		if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingSwitchOffCondition"),
				Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingSwitchOffCondition::UMotionWarpingSwitchOffCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingSwitchOffCondition);
UMotionWarpingSwitchOffCondition::~UMotionWarpingSwitchOffCondition() {}
// ********** End Class UMotionWarpingSwitchOffCondition *******************************************

// ********** Begin Enum ESwitchOffConditionDistanceOp *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionDistanceOp>()
{
	return Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MotionWarping" },
		{ "Experimental", "" },
		{ "GreaterThan.Name", "ESwitchOffConditionDistanceOp::GreaterThan" },
		{ "LessThan.Name", "ESwitchOffConditionDistanceOp::LessThan" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchOffConditionDistanceOp::LessThan", (int64)ESwitchOffConditionDistanceOp::LessThan },
		{ "ESwitchOffConditionDistanceOp::GreaterThan", (int64)ESwitchOffConditionDistanceOp::GreaterThan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"ESwitchOffConditionDistanceOp",
	"ESwitchOffConditionDistanceOp",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESwitchOffConditionDistanceOp;
UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESwitchOffConditionDistanceOp.OuterSingleton)
		{
			ZRIE_ESwitchOffConditionDistanceOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("ESwitchOffConditionDistanceOp"));
		}
		return ZRIE_ESwitchOffConditionDistanceOp.OuterSingleton;
	}
	if (!ZRIE_ESwitchOffConditionDistanceOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESwitchOffConditionDistanceOp.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESwitchOffConditionDistanceOp.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESwitchOffConditionDistanceOp ***********************************************

// ********** Begin Enum ESwitchOffConditionDistanceAxesType ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionDistanceAxesType>()
{
	return Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AllAxes.Name", "ESwitchOffConditionDistanceAxesType::AllAxes" },
		{ "BlueprintType", "true" },
		{ "Category", "MotionWarping" },
		{ "Experimental", "" },
		{ "IgnoreZAxis.Name", "ESwitchOffConditionDistanceAxesType::IgnoreZAxis" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
		{ "OnlyZAxis.Name", "ESwitchOffConditionDistanceAxesType::OnlyZAxis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchOffConditionDistanceAxesType::AllAxes", (int64)ESwitchOffConditionDistanceAxesType::AllAxes },
		{ "ESwitchOffConditionDistanceAxesType::IgnoreZAxis", (int64)ESwitchOffConditionDistanceAxesType::IgnoreZAxis },
		{ "ESwitchOffConditionDistanceAxesType::OnlyZAxis", (int64)ESwitchOffConditionDistanceAxesType::OnlyZAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"ESwitchOffConditionDistanceAxesType",
	"ESwitchOffConditionDistanceAxesType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESwitchOffConditionDistanceAxesType;
UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESwitchOffConditionDistanceAxesType.OuterSingleton)
		{
			ZRIE_ESwitchOffConditionDistanceAxesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("ESwitchOffConditionDistanceAxesType"));
		}
		return ZRIE_ESwitchOffConditionDistanceAxesType.OuterSingleton;
	}
	if (!ZRIE_ESwitchOffConditionDistanceAxesType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESwitchOffConditionDistanceAxesType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESwitchOffConditionDistanceAxesType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESwitchOffConditionDistanceAxesType *****************************************

// ********** Begin Class UMotionWarpingSwitchOffDistanceCondition Function CreateSwitchOffDistanceCondition 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition_Statics
struct UHT_STATICS
{
	struct MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms
	{
		AActor* InOwnerActor;
		ESwitchOffConditionEffect InEffect;
		ESwitchOffConditionDistanceOp InOperator;
		ESwitchOffConditionDistanceAxesType InAxesType;
		float InDistance;
		bool InbUseWarpTargetAsTargetLocation;
		AActor* InTargetActor;
		UMotionWarpingSwitchOffDistanceCondition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "bInUseWarpTargetAsTargetLocation, InTargetActor" },
		{ "Category", "Motion Warping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates Switch Off Distance Condition that checks distance between Owner Actor and Target Location.\n\x09 * If Use Warp Target Location is true, Target Location is corresponding Warp Target's location.\n\x09 * If Use Warp Target Location is false, Target Location is Target Actor's parameter location.\n\x09 * @param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n\x09 * @param InEffect What should happen if switch off condition is true\n\x09 * @param InOperator Distance comparison operator\n\x09 * @param InAxesType Specifier of the axes the distance should be calculated for\n\x09 * @param InDistance Distance to compare to\n\x09 * @param InbUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\n\x09 * If set to false, will use TargetActor parameter\n\x09 * @param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n\x09 * @return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node.\n\x09 */" },
#endif
		{ "CPP_Default_InbUseWarpTargetAsTargetLocation", "true" },
		{ "CPP_Default_InTargetActor", "None" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates Switch Off Distance Condition that checks distance between Owner Actor and Target Location.\nIf Use Warp Target Location is true, Target Location is corresponding Warp Target's location.\nIf Use Warp Target Location is false, Target Location is Target Actor's parameter location.\n@param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n@param InEffect What should happen if switch off condition is true\n@param InOperator Distance comparison operator\n@param InAxesType Specifier of the axes the distance should be calculated for\n@param InDistance Distance to compare to\n@param InbUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\nIf set to false, will use TargetActor parameter\n@param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n@return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwnerActor_MetaData[] = {
		{ "DisplayName", "Owner Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffect_MetaData[] = {
		{ "DisplayName", "Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOperator_MetaData[] = {
		{ "DisplayName", "Operator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAxesType_MetaData[] = {
		{ "DisplayName", "AxesType" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDistance_MetaData[] = {
		{ "DisplayName", "Distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InbUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "DisplayName", "UseWarpTargetAsLocation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActor_MetaData[] = {
		{ "DisplayName", "TargetActor" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSwitchOffDistanceCondition constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEffect_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InOperator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAxesType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAxesType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDistance;
	static void NewProp_InbUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms*)Obj)->InbUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InbUseWarpTargetAsTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSwitchOffDistanceCondition constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSwitchOffDistanceCondition Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, InOwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwnerActor_MetaData), NewProp_InOwnerActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, InEffect), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffect_MetaData), NewProp_InEffect_MetaData) }; // 861e4df7aa5ffe35a72eb43493cb48aa5698047f
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InOperator = { "InOperator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, InOperator), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOperator_MetaData), NewProp_InOperator_MetaData) }; // 1a3fe633bc050f7e33358aa8143906d803b1fd21
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InAxesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InAxesType = { "InAxesType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, InAxesType), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAxesType_MetaData), NewProp_InAxesType_MetaData) }; // f2dd19212de597d6ad42e77fc4b563d88d29a5e2
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InDistance = { "InDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, InDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDistance_MetaData), NewProp_InDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_InbUseWarpTargetAsTargetLocation = { "InbUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms), &UHT_STATICS::NewProp_InbUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InbUseWarpTargetAsTargetLocation_MetaData), NewProp_InbUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, InTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActor_MetaData), NewProp_InTargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms, ReturnValue), Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAxesType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAxesType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InbUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSwitchOffDistanceCondition Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition, nullptr, "CreateSwitchOffDistanceCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingSwitchOffDistanceCondition_eventCreateSwitchOffDistanceCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingSwitchOffDistanceCondition::execCreateSwitchOffDistanceCondition)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_InOwnerActor);
	P_GET_ENUM(ESwitchOffConditionEffect,Z_Param_InEffect);
	P_GET_ENUM(ESwitchOffConditionDistanceOp,Z_Param_InOperator);
	P_GET_ENUM(ESwitchOffConditionDistanceAxesType,Z_Param_InAxesType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDistance);
	P_GET_UBOOL(Z_Param_InbUseWarpTargetAsTargetLocation);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionWarpingSwitchOffDistanceCondition**)Z_Param__Result=UMotionWarpingSwitchOffDistanceCondition::CreateSwitchOffDistanceCondition(Z_Param_Out_InOwnerActor,ESwitchOffConditionEffect(Z_Param_InEffect),ESwitchOffConditionDistanceOp(Z_Param_InOperator),ESwitchOffConditionDistanceAxesType(Z_Param_InAxesType),Z_Param_InDistance,Z_Param_InbUseWarpTargetAsTargetLocation,Z_Param_InTargetActor);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingSwitchOffDistanceCondition Function CreateSwitchOffDistanceCondition 

// ********** Begin Class UMotionWarpingSwitchOffDistanceCondition *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionWarpingSwitchOffCondition.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxesType_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingSwitchOffDistanceCondition constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxesType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxesType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMotionWarpingSwitchOffDistanceCondition constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSwitchOffDistanceCondition"), .Pointer = &UMotionWarpingSwitchOffDistanceCondition::execCreateSwitchOffDistanceCondition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingSwitchOffDistanceCondition_CreateSwitchOffDistanceCondition, "CreateSwitchOffDistanceCondition" }, // 59c4ca09dfceff4dc3ba897cef344e40071b90ec
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingSwitchOffDistanceCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMotionWarpingSwitchOffDistanceCondition Property Definitions ************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffDistanceCondition, Operator), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // 1a3fe633bc050f7e33358aa8143906d803b1fd21
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AxesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AxesType = { "AxesType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffDistanceCondition, AxesType), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxesType_MetaData), NewProp_AxesType_MetaData) }; // f2dd19212de597d6ad42e77fc4b563d88d29a5e2
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffDistanceCondition, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Operator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxesType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxesType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMotionWarpingSwitchOffDistanceCondition Property Definitions **************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffCondition,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingSwitchOffDistanceCondition_StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition()
{
	UClass* Class = UMotionWarpingSwitchOffDistanceCondition::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition;
UClass* Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingSwitchOffDistanceCondition;
		if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingSwitchOffDistanceCondition"),
				Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton,
				UMotionWarpingSwitchOffDistanceCondition_StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition,
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
		return Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingSwitchOffDistanceCondition::UMotionWarpingSwitchOffDistanceCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingSwitchOffDistanceCondition);
UMotionWarpingSwitchOffDistanceCondition::~UMotionWarpingSwitchOffDistanceCondition() {}
// ********** End Class UMotionWarpingSwitchOffDistanceCondition ***********************************

// ********** Begin Enum ESwitchOffConditionAngleOp ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionAngleOp>()
{
	return Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MotionWarping" },
		{ "Experimental", "" },
		{ "GreaterThan.Name", "ESwitchOffConditionAngleOp::GreaterThan" },
		{ "LessThan.Name", "ESwitchOffConditionAngleOp::LessThan" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchOffConditionAngleOp::LessThan", (int64)ESwitchOffConditionAngleOp::LessThan },
		{ "ESwitchOffConditionAngleOp::GreaterThan", (int64)ESwitchOffConditionAngleOp::GreaterThan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"ESwitchOffConditionAngleOp",
	"ESwitchOffConditionAngleOp",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESwitchOffConditionAngleOp;
UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESwitchOffConditionAngleOp.OuterSingleton)
		{
			ZRIE_ESwitchOffConditionAngleOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("ESwitchOffConditionAngleOp"));
		}
		return ZRIE_ESwitchOffConditionAngleOp.OuterSingleton;
	}
	if (!ZRIE_ESwitchOffConditionAngleOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESwitchOffConditionAngleOp.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESwitchOffConditionAngleOp.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESwitchOffConditionAngleOp **************************************************

// ********** Begin Class UMotionWarpingSwitchOffAngleToTargetCondition Function CreateSwitchOffAngleToTargetCondition 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition_Statics
struct UHT_STATICS
{
	struct MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms
	{
		AActor* InOwnerActor;
		ESwitchOffConditionEffect InEffect;
		ESwitchOffConditionAngleOp InOperator;
		float InAngle;
		bool bInIgnoreZAxis;
		bool bInUseWarpTargetAsTargetLocation;
		AActor* InTargetActor;
		UMotionWarpingSwitchOffAngleToTargetCondition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "bInUseWarpTargetAsTargetLocation, InTargetActor" },
		{ "Category", "Motion Warping|Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates Switch Off Angle To Target Condition that checks angle between Owner Actor and Target Location.\n\x09 * If Use Warp Target Location is true, Target Location is corresponding Warp Target's location.\n\x09 * If Use Warp Target Location is false, Target Location is Target Actor's parameter location.\n\x09 * @param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n\x09 * @param InEffect What should happen if switch off condition is true\n\x09 * @param InOperator Angle comparison operator\n\x09 * @param InAngle Angle to compare to\n\x09 * @param bInIgnoreZAxis Should ignore Z axis in Angle comparison\n\x09 * @param bInUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\n\x09 * If set to false, will use TargetActor parameter\n\x09 * @param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n\x09 * @return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node.\n\x09 */" },
#endif
		{ "CPP_Default_bInUseWarpTargetAsTargetLocation", "true" },
		{ "CPP_Default_InTargetActor", "None" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates Switch Off Angle To Target Condition that checks angle between Owner Actor and Target Location.\nIf Use Warp Target Location is true, Target Location is corresponding Warp Target's location.\nIf Use Warp Target Location is false, Target Location is Target Actor's parameter location.\n@param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n@param InEffect What should happen if switch off condition is true\n@param InOperator Angle comparison operator\n@param InAngle Angle to compare to\n@param bInIgnoreZAxis Should ignore Z axis in Angle comparison\n@param bInUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\nIf set to false, will use TargetActor parameter\n@param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n@return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwnerActor_MetaData[] = {
		{ "DisplayName", "Owner Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffect_MetaData[] = {
		{ "DisplayName", "Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOperator_MetaData[] = {
		{ "DisplayName", "Operator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAngle_MetaData[] = {
		{ "DisplayName", "Angle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInIgnoreZAxis_MetaData[] = {
		{ "DisplayName", "Ignore Z Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "DisplayName", "TargetActor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActor_MetaData[] = {
		{ "DisplayName", "TargetActor" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSwitchOffAngleToTargetCondition constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEffect_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InOperator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAngle;
	static void NewProp_bInIgnoreZAxis_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms*)Obj)->bInIgnoreZAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreZAxis;
	static void NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms*)Obj)->bInUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseWarpTargetAsTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSwitchOffAngleToTargetCondition constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSwitchOffAngleToTargetCondition Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms, InOwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwnerActor_MetaData), NewProp_InOwnerActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms, InEffect), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffect_MetaData), NewProp_InEffect_MetaData) }; // 861e4df7aa5ffe35a72eb43493cb48aa5698047f
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InOperator = { "InOperator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms, InOperator), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOperator_MetaData), NewProp_InOperator_MetaData) }; // cee11614fa7126eb9f1574d0a187c1b90e7f9ce2
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InAngle = { "InAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms, InAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAngle_MetaData), NewProp_InAngle_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInIgnoreZAxis = { "bInIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms), &UHT_STATICS::NewProp_bInIgnoreZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInIgnoreZAxis_MetaData), NewProp_bInIgnoreZAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation = { "bInUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms), &UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInUseWarpTargetAsTargetLocation_MetaData), NewProp_bInUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms, InTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActor_MetaData), NewProp_InTargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms, ReturnValue), Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInIgnoreZAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSwitchOffAngleToTargetCondition Property Definitions **************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition, nullptr, "CreateSwitchOffAngleToTargetCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingSwitchOffAngleToTargetCondition_eventCreateSwitchOffAngleToTargetCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingSwitchOffAngleToTargetCondition::execCreateSwitchOffAngleToTargetCondition)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_InOwnerActor);
	P_GET_ENUM(ESwitchOffConditionEffect,Z_Param_InEffect);
	P_GET_ENUM(ESwitchOffConditionAngleOp,Z_Param_InOperator);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAngle);
	P_GET_UBOOL(Z_Param_bInIgnoreZAxis);
	P_GET_UBOOL(Z_Param_bInUseWarpTargetAsTargetLocation);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionWarpingSwitchOffAngleToTargetCondition**)Z_Param__Result=UMotionWarpingSwitchOffAngleToTargetCondition::CreateSwitchOffAngleToTargetCondition(Z_Param_Out_InOwnerActor,ESwitchOffConditionEffect(Z_Param_InEffect),ESwitchOffConditionAngleOp(Z_Param_InOperator),Z_Param_InAngle,Z_Param_bInIgnoreZAxis,Z_Param_bInUseWarpTargetAsTargetLocation,Z_Param_InTargetActor);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingSwitchOffAngleToTargetCondition Function CreateSwitchOffAngleToTargetCondition 

// ********** Begin Class UMotionWarpingSwitchOffAngleToTargetCondition ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionWarpingSwitchOffCondition.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ForceUnits", "degrees" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxis_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingSwitchOffAngleToTargetCondition constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static void NewProp_bIgnoreZAxis_SetBit(void* Obj)
	{
		((UMotionWarpingSwitchOffAngleToTargetCondition*)Obj)->bIgnoreZAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMotionWarpingSwitchOffAngleToTargetCondition constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSwitchOffAngleToTargetCondition"), .Pointer = &UMotionWarpingSwitchOffAngleToTargetCondition::execCreateSwitchOffAngleToTargetCondition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingSwitchOffAngleToTargetCondition_CreateSwitchOffAngleToTargetCondition, "CreateSwitchOffAngleToTargetCondition" }, // 8e79a1f64b72895fc731a64ccc6df1fa1b4ee61f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingSwitchOffAngleToTargetCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMotionWarpingSwitchOffAngleToTargetCondition Property Definitions *******
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffAngleToTargetCondition, Operator), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // cee11614fa7126eb9f1574d0a187c1b90e7f9ce2
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffAngleToTargetCondition, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIgnoreZAxis = { "bIgnoreZAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMotionWarpingSwitchOffAngleToTargetCondition), &UHT_STATICS::NewProp_bIgnoreZAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreZAxis_MetaData), NewProp_bIgnoreZAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Operator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIgnoreZAxis,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMotionWarpingSwitchOffAngleToTargetCondition Property Definitions *********
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffCondition,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingSwitchOffAngleToTargetCondition_StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition()
{
	UClass* Class = UMotionWarpingSwitchOffAngleToTargetCondition::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition;
UClass* Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingSwitchOffAngleToTargetCondition;
		if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingSwitchOffAngleToTargetCondition"),
				Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton,
				UMotionWarpingSwitchOffAngleToTargetCondition_StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition,
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
		return Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingSwitchOffAngleToTargetCondition::UMotionWarpingSwitchOffAngleToTargetCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingSwitchOffAngleToTargetCondition);
UMotionWarpingSwitchOffAngleToTargetCondition::~UMotionWarpingSwitchOffAngleToTargetCondition() {}
// ********** End Class UMotionWarpingSwitchOffAngleToTargetCondition ******************************

// ********** Begin Enum ESwitchOffConditionCompositeOp ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ESwitchOffConditionCompositeOp>()
{
	return Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "And.DisplayName", "AND" },
		{ "And.Name", "ESwitchOffConditionCompositeOp::And" },
		{ "BlueprintType", "true" },
		{ "Category", "MotionWarping" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
		{ "Or.DisplayName", "OR" },
		{ "Or.Name", "ESwitchOffConditionCompositeOp::Or" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchOffConditionCompositeOp::Or", (int64)ESwitchOffConditionCompositeOp::Or },
		{ "ESwitchOffConditionCompositeOp::And", (int64)ESwitchOffConditionCompositeOp::And },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"ESwitchOffConditionCompositeOp",
	"ESwitchOffConditionCompositeOp",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESwitchOffConditionCompositeOp;
UEnum* Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESwitchOffConditionCompositeOp.OuterSingleton)
		{
			ZRIE_ESwitchOffConditionCompositeOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("ESwitchOffConditionCompositeOp"));
		}
		return ZRIE_ESwitchOffConditionCompositeOp.OuterSingleton;
	}
	if (!ZRIE_ESwitchOffConditionCompositeOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESwitchOffConditionCompositeOp.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESwitchOffConditionCompositeOp.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESwitchOffConditionCompositeOp **********************************************

// ********** Begin Class UMotionWarpingSwitchOffCompositeCondition Function CreateSwitchOffCompositeCondition 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition_Statics
struct UHT_STATICS
{
	struct MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms
	{
		AActor* InOwnerActor;
		ESwitchOffConditionEffect InEffect;
		UMotionWarpingSwitchOffCondition* InSwitchOffConditionA;
		ESwitchOffConditionCompositeOp InLogicOperator;
		UMotionWarpingSwitchOffCondition* InSwitchOffConditionB;
		bool bInUseWarpTargetAsTargetLocation;
		AActor* InTargetActor;
		UMotionWarpingSwitchOffCompositeCondition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "bInUseWarpTargetAsTargetLocation, InTargetActor" },
		{ "Category", "Motion Warping|Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates Switch Off Composite Condition that lets you combine different switch off conditions with logic AND/OR operators.\n\x09 * @param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n\x09 * @param InEffect What should happen if switch off condition is true\n\x09 * @param InSwitchOffConditionA First Switch Off Condition to combine\n\x09 * @param InLogicOperator Logic operator to use for Switch Off Condition combination\n\x09 * @param InSwitchOffConditionB Second Switch Off Condition to combine\n\x09 * @param bInUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\n\x09 * If set to false, will use TargetActor parameter\n\x09 * @param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n\x09 * @return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node.\n\x09 */" },
#endif
		{ "CPP_Default_bInUseWarpTargetAsTargetLocation", "true" },
		{ "CPP_Default_InTargetActor", "None" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates Switch Off Composite Condition that lets you combine different switch off conditions with logic AND/OR operators.\n@param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n@param InEffect What should happen if switch off condition is true\n@param InSwitchOffConditionA First Switch Off Condition to combine\n@param InLogicOperator Logic operator to use for Switch Off Condition combination\n@param InSwitchOffConditionB Second Switch Off Condition to combine\n@param bInUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\nIf set to false, will use TargetActor parameter\n@param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n@return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwnerActor_MetaData[] = {
		{ "DisplayName", "Owner Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffect_MetaData[] = {
		{ "DisplayName", "Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSwitchOffConditionA_MetaData[] = {
		{ "DisplayName", "Switch Off Condition A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLogicOperator_MetaData[] = {
		{ "DisplayName", "Logic Operator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSwitchOffConditionB_MetaData[] = {
		{ "DisplayName", "Switch Off Condition B" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "DisplayName", "Use Warp Target As Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActor_MetaData[] = {
		{ "DisplayName", "TargetActor" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSwitchOffCompositeCondition constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEffect_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSwitchOffConditionA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InLogicOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InLogicOperator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSwitchOffConditionB;
	static void NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms*)Obj)->bInUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseWarpTargetAsTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSwitchOffCompositeCondition constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSwitchOffCompositeCondition Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, InOwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwnerActor_MetaData), NewProp_InOwnerActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, InEffect), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffect_MetaData), NewProp_InEffect_MetaData) }; // 861e4df7aa5ffe35a72eb43493cb48aa5698047f
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InSwitchOffConditionA = { "InSwitchOffConditionA", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, InSwitchOffConditionA), Z_Construct_UClass_UMotionWarpingSwitchOffCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSwitchOffConditionA_MetaData), NewProp_InSwitchOffConditionA_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InLogicOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InLogicOperator = { "InLogicOperator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, InLogicOperator), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLogicOperator_MetaData), NewProp_InLogicOperator_MetaData) }; // 956752416f4191de91ab83030881869510c50de2
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InSwitchOffConditionB = { "InSwitchOffConditionB", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, InSwitchOffConditionB), Z_Construct_UClass_UMotionWarpingSwitchOffCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSwitchOffConditionB_MetaData), NewProp_InSwitchOffConditionB_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation = { "bInUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms), &UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInUseWarpTargetAsTargetLocation_MetaData), NewProp_bInUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, InTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActor_MetaData), NewProp_InTargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms, ReturnValue), Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSwitchOffConditionA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLogicOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InLogicOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSwitchOffConditionB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSwitchOffCompositeCondition Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition, nullptr, "CreateSwitchOffCompositeCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingSwitchOffCompositeCondition_eventCreateSwitchOffCompositeCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingSwitchOffCompositeCondition::execCreateSwitchOffCompositeCondition)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_InOwnerActor);
	P_GET_ENUM(ESwitchOffConditionEffect,Z_Param_InEffect);
	P_GET_OBJECT_REF(UMotionWarpingSwitchOffCondition,Z_Param_Out_InSwitchOffConditionA);
	P_GET_ENUM(ESwitchOffConditionCompositeOp,Z_Param_InLogicOperator);
	P_GET_OBJECT_REF(UMotionWarpingSwitchOffCondition,Z_Param_Out_InSwitchOffConditionB);
	P_GET_UBOOL(Z_Param_bInUseWarpTargetAsTargetLocation);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionWarpingSwitchOffCompositeCondition**)Z_Param__Result=UMotionWarpingSwitchOffCompositeCondition::CreateSwitchOffCompositeCondition(Z_Param_Out_InOwnerActor,ESwitchOffConditionEffect(Z_Param_InEffect),Z_Param_Out_InSwitchOffConditionA,ESwitchOffConditionCompositeOp(Z_Param_InLogicOperator),Z_Param_Out_InSwitchOffConditionB,Z_Param_bInUseWarpTargetAsTargetLocation,Z_Param_InTargetActor);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingSwitchOffCompositeCondition Function CreateSwitchOffCompositeCondition 

// ********** Begin Class UMotionWarpingSwitchOffCompositeCondition ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionWarpingSwitchOffCondition.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffConditionA_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogicOperator_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffConditionB_MetaData[] = {
		{ "Category", "MotionWarping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingSwitchOffCompositeCondition constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchOffConditionA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogicOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogicOperator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchOffConditionB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMotionWarpingSwitchOffCompositeCondition constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSwitchOffCompositeCondition"), .Pointer = &UMotionWarpingSwitchOffCompositeCondition::execCreateSwitchOffCompositeCondition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingSwitchOffCompositeCondition_CreateSwitchOffCompositeCondition, "CreateSwitchOffCompositeCondition" }, // 5892871827548dfa4576b842056bcb844c526c55
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingSwitchOffCompositeCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMotionWarpingSwitchOffCompositeCondition Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SwitchOffConditionA = { "SwitchOffConditionA", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffCompositeCondition, SwitchOffConditionA), Z_Construct_UClass_UMotionWarpingSwitchOffCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffConditionA_MetaData), NewProp_SwitchOffConditionA_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LogicOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LogicOperator = { "LogicOperator", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffCompositeCondition, LogicOperator), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogicOperator_MetaData), NewProp_LogicOperator_MetaData) }; // 956752416f4191de91ab83030881869510c50de2
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SwitchOffConditionB = { "SwitchOffConditionB", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingSwitchOffCompositeCondition, SwitchOffConditionB), Z_Construct_UClass_UMotionWarpingSwitchOffCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffConditionB_MetaData), NewProp_SwitchOffConditionB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditionA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LogicOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LogicOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditionB,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMotionWarpingSwitchOffCompositeCondition Property Definitions *************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffCondition,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition,
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
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingSwitchOffCompositeCondition_StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition()
{
	UClass* Class = UMotionWarpingSwitchOffCompositeCondition::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition;
UClass* Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingSwitchOffCompositeCondition;
		if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingSwitchOffCompositeCondition"),
				Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton,
				UMotionWarpingSwitchOffCompositeCondition_StaticRegisterNativesUMotionWarpingSwitchOffCompositeCondition,
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
		return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingSwitchOffCompositeCondition::UMotionWarpingSwitchOffCompositeCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingSwitchOffCompositeCondition);
UMotionWarpingSwitchOffCompositeCondition::~UMotionWarpingSwitchOffCompositeCondition() {}
// ********** End Class UMotionWarpingSwitchOffCompositeCondition **********************************

// ********** Begin Class UMotionWarpingSwitchOffBlueprintableCondition Function BP_Check **********
struct MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms
{
	const AActor* InOwnerActor;
	const AActor* InTargetActor;
	FVector InTargetLocation;
	bool bInUseWarpTargetAsTargetLocation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check = FName(TEXT("BP_Check"));
bool UMotionWarpingSwitchOffBlueprintableCondition::BP_Check(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const
{
	UFunction* Func = FindFunctionChecked(NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms Parms;
		Parms.InOwnerActor=InOwnerActor;
		Parms.InTargetActor=InTargetActor;
		Parms.InTargetLocation=InTargetLocation;
		Parms.bInUseWarpTargetAsTargetLocation=bInUseWarpTargetAsTargetLocation ? true : false;
		const_cast<UMotionWarpingSwitchOffBlueprintableCondition*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMotionWarpingSwitchOffBlueprintableCondition*>(this)->BP_Check_Implementation(InOwnerActor, InTargetActor, InTargetLocation, bInUseWarpTargetAsTargetLocation);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwnerActor_MetaData[] = {
		{ "DisplayName", "Owner Actor" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActor_MetaData[] = {
		{ "DisplayName", "Target Actor" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[] = {
		{ "DisplayName", "Target Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "DisplayName", "Use warp target as target location" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_Check constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
	static void NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms*)Obj)->bInUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseWarpTargetAsTargetLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_Check constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_Check Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms, InOwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwnerActor_MetaData), NewProp_InOwnerActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms, InTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActor_MetaData), NewProp_InTargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetLocation_MetaData), NewProp_InTargetLocation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation = { "bInUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms), &UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInUseWarpTargetAsTargetLocation_MetaData), NewProp_bInUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BP_Check Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition, nullptr, "BP_Check", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(MotionWarpingSwitchOffBlueprintableCondition_eventBP_Check_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingSwitchOffBlueprintableCondition::execBP_Check)
{
	P_GET_OBJECT(AActor,Z_Param_InOwnerActor);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_GET_STRUCT(FVector,Z_Param_InTargetLocation);
	P_GET_UBOOL(Z_Param_bInUseWarpTargetAsTargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_Check_Implementation(Z_Param_InOwnerActor,Z_Param_InTargetActor,Z_Param_InTargetLocation,Z_Param_bInUseWarpTargetAsTargetLocation);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingSwitchOffBlueprintableCondition Function BP_Check ************

// ********** Begin Class UMotionWarpingSwitchOffBlueprintableCondition Function BP_ExtraDebugInfo *
struct MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms
{
	const AActor* InOwnerActor;
	const AActor* InTargetActor;
	FVector InTargetLocation;
	bool bInUseWarpTargetAsTargetLocation;
	FString ReturnValue;
};
static FName NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo = FName(TEXT("BP_ExtraDebugInfo"));
FString UMotionWarpingSwitchOffBlueprintableCondition::BP_ExtraDebugInfo(const AActor* InOwnerActor, const AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation) const
{
	UFunction* Func = FindFunctionChecked(NAME_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms Parms;
		Parms.InOwnerActor=InOwnerActor;
		Parms.InTargetActor=InTargetActor;
		Parms.InTargetLocation=InTargetLocation;
		Parms.bInUseWarpTargetAsTargetLocation=bInUseWarpTargetAsTargetLocation ? true : false;
		const_cast<UMotionWarpingSwitchOffBlueprintableCondition*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMotionWarpingSwitchOffBlueprintableCondition*>(this)->BP_ExtraDebugInfo_Implementation(InOwnerActor, InTargetActor, InTargetLocation, bInUseWarpTargetAsTargetLocation);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwnerActor_MetaData[] = {
		{ "DisplayName", "Owner Actor" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActor_MetaData[] = {
		{ "DisplayName", "Target Actor" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[] = {
		{ "DisplayName", "Target Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "DisplayName", "Use warp target as target location" },
	};
#endif // WITH_METADATA

// ********** Begin Function BP_ExtraDebugInfo constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
	static void NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms*)Obj)->bInUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseWarpTargetAsTargetLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BP_ExtraDebugInfo constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BP_ExtraDebugInfo Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms, InOwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwnerActor_MetaData), NewProp_InOwnerActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms, InTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActor_MetaData), NewProp_InTargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetLocation_MetaData), NewProp_InTargetLocation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation = { "bInUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms), &UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInUseWarpTargetAsTargetLocation_MetaData), NewProp_bInUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BP_ExtraDebugInfo Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition, nullptr, "BP_ExtraDebugInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(MotionWarpingSwitchOffBlueprintableCondition_eventBP_ExtraDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingSwitchOffBlueprintableCondition::execBP_ExtraDebugInfo)
{
	P_GET_OBJECT(AActor,Z_Param_InOwnerActor);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_GET_STRUCT(FVector,Z_Param_InTargetLocation);
	P_GET_UBOOL(Z_Param_bInUseWarpTargetAsTargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->BP_ExtraDebugInfo_Implementation(Z_Param_InOwnerActor,Z_Param_InTargetActor,Z_Param_InTargetLocation,Z_Param_bInUseWarpTargetAsTargetLocation);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingSwitchOffBlueprintableCondition Function BP_ExtraDebugInfo ***

// ********** Begin Class UMotionWarpingSwitchOffBlueprintableCondition Function CreateSwitchOffBlueprintableCondition 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition_Statics
struct UHT_STATICS
{
	struct MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms
	{
		AActor* InOwnerActor;
		ESwitchOffConditionEffect InEffect;
		TSubclassOf<UMotionWarpingSwitchOffBlueprintableCondition> InBlueprintableCondition;
		bool bInUseWarpTargetAsTargetLocation;
		AActor* InTargetActor;
		UMotionWarpingSwitchOffBlueprintableCondition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "bInUseWarpTargetAsTargetLocation, InTargetActor" },
		{ "Category", "Motion Warping|Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates Switch Off Blueprintable Condition from WarpingSwitchOffBlueprintableCondition subclass.\n\x09 * @param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n\x09 * @param InEffect What should happen if switch off condition is true\n\x09 * @param InBlueprintableCondition Subclass of WarpingSwitchOffBlueprintableCondition\n\x09* @param bInUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\n\x09 * If set to false, will use TargetActor parameter \n\x09 * @param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n\x09 * @return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node.\n\x09 */" },
#endif
		{ "CPP_Default_bInUseWarpTargetAsTargetLocation", "true" },
		{ "CPP_Default_InTargetActor", "None" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates Switch Off Blueprintable Condition from WarpingSwitchOffBlueprintableCondition subclass.\n@param InOwnerActor Actor owning Motion Warping Component to which this switch off condition will be added.\n@param InEffect What should happen if switch off condition is true\n@param InBlueprintableCondition Subclass of WarpingSwitchOffBlueprintableCondition\n@param bInUseWarpTargetAsTargetLocation Should use corresponding warp target as context for this Switch Off Condition.\nIf set to false, will use TargetActor parameter\n@param InTargetActor Target Actor to use as a context for this Switch Off Condition if Use Warp Target As Location parameter is false.\n@return Created Switch Off Condition. This Switch Off Condition can be added to Motion Warping Component with Add Switch Off Condition node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOwnerActor_MetaData[] = {
		{ "DisplayName", "Owner Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEffect_MetaData[] = {
		{ "DisplayName", "Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBlueprintableCondition_MetaData[] = {
		{ "DisplayName", "Blueprintable Switch Off Condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInUseWarpTargetAsTargetLocation_MetaData[] = {
		{ "DisplayName", "Use Warp Target As Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActor_MetaData[] = {
		{ "DisplayName", "TargetActor" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSwitchOffBlueprintableCondition constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwnerActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEffect_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InBlueprintableCondition;
	static void NewProp_bInUseWarpTargetAsTargetLocation_SetBit(void* Obj)
	{
		((MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms*)Obj)->bInUseWarpTargetAsTargetLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseWarpTargetAsTargetLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSwitchOffBlueprintableCondition constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSwitchOffBlueprintableCondition Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwnerActor = { "InOwnerActor", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms, InOwnerActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOwnerActor_MetaData), NewProp_InOwnerActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InEffect = { "InEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms, InEffect), Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEffect_MetaData), NewProp_InEffect_MetaData) }; // 861e4df7aa5ffe35a72eb43493cb48aa5698047f
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InBlueprintableCondition = { "InBlueprintableCondition", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms, InBlueprintableCondition), Z_Construct_UClass_UClass, Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBlueprintableCondition_MetaData), NewProp_InBlueprintableCondition_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation = { "bInUseWarpTargetAsTargetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms), &UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInUseWarpTargetAsTargetLocation_MetaData), NewProp_bInUseWarpTargetAsTargetLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms, InTargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetActor_MetaData), NewProp_InTargetActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms, ReturnValue), Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBlueprintableCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUseWarpTargetAsTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSwitchOffBlueprintableCondition Property Definitions **************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition, nullptr, "CreateSwitchOffBlueprintableCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingSwitchOffBlueprintableCondition_eventCreateSwitchOffBlueprintableCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingSwitchOffBlueprintableCondition::execCreateSwitchOffBlueprintableCondition)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_InOwnerActor);
	P_GET_ENUM(ESwitchOffConditionEffect,Z_Param_InEffect);
	P_GET_OBJECT(UClass,Z_Param_InBlueprintableCondition);
	P_GET_UBOOL(Z_Param_bInUseWarpTargetAsTargetLocation);
	P_GET_OBJECT(AActor,Z_Param_InTargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionWarpingSwitchOffBlueprintableCondition**)Z_Param__Result=UMotionWarpingSwitchOffBlueprintableCondition::CreateSwitchOffBlueprintableCondition(Z_Param_Out_InOwnerActor,ESwitchOffConditionEffect(Z_Param_InEffect),Z_Param_InBlueprintableCondition,Z_Param_bInUseWarpTargetAsTargetLocation,Z_Param_InTargetActor);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingSwitchOffBlueprintableCondition Function CreateSwitchOffBlueprintableCondition 

// ********** Begin Class UMotionWarpingSwitchOffBlueprintableCondition ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionWarpingSwitchOffCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionWarpingSwitchOffCondition.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingSwitchOffBlueprintableCondition constinit property declarations 
// ********** End Class UMotionWarpingSwitchOffBlueprintableCondition constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BP_Check"), .Pointer = &UMotionWarpingSwitchOffBlueprintableCondition::execBP_Check },
		{ .NameUTF8 = UTF8TEXT("BP_ExtraDebugInfo"), .Pointer = &UMotionWarpingSwitchOffBlueprintableCondition::execBP_ExtraDebugInfo },
		{ .NameUTF8 = UTF8TEXT("CreateSwitchOffBlueprintableCondition"), .Pointer = &UMotionWarpingSwitchOffBlueprintableCondition::execCreateSwitchOffBlueprintableCondition },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_Check, "BP_Check" }, // cbbf7fe084fe232bfba83815b97d45cc628f7abf
		{ &Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_BP_ExtraDebugInfo, "BP_ExtraDebugInfo" }, // 6e947478d36fd615b23931118a334c9ff679d186
		{ &Z_Construct_UFunction_UMotionWarpingSwitchOffBlueprintableCondition_CreateSwitchOffBlueprintableCondition, "CreateSwitchOffBlueprintableCondition" }, // 3dd2fdb1088d696e2d2d3996f2303040ad79b54b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingSwitchOffBlueprintableCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingSwitchOffCondition,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingSwitchOffBlueprintableCondition_StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition()
{
	UClass* Class = UMotionWarpingSwitchOffBlueprintableCondition::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition;
UClass* Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingSwitchOffBlueprintableCondition;
		if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingSwitchOffBlueprintableCondition"),
				Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton,
				UMotionWarpingSwitchOffBlueprintableCondition_StaticRegisterNativesUMotionWarpingSwitchOffBlueprintableCondition,
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
		return Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingSwitchOffBlueprintableCondition::UMotionWarpingSwitchOffBlueprintableCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingSwitchOffBlueprintableCondition);
UMotionWarpingSwitchOffBlueprintableCondition::~UMotionWarpingSwitchOffBlueprintableCondition() {}
// ********** End Class UMotionWarpingSwitchOffBlueprintableCondition ******************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MotionWarping_ESwitchOffConditionEffect, TEXT("ESwitchOffConditionEffect"), &ZRIE_ESwitchOffConditionEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2250132983U) },
		{ Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceOp, TEXT("ESwitchOffConditionDistanceOp"), &ZRIE_ESwitchOffConditionDistanceOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 440395315U) },
		{ Z_Construct_UEnum_MotionWarping_ESwitchOffConditionDistanceAxesType, TEXT("ESwitchOffConditionDistanceAxesType"), &ZRIE_ESwitchOffConditionDistanceAxesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4074576161U) },
		{ Z_Construct_UEnum_MotionWarping_ESwitchOffConditionAngleOp, TEXT("ESwitchOffConditionAngleOp"), &ZRIE_ESwitchOffConditionAngleOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3470857748U) },
		{ Z_Construct_UEnum_MotionWarping_ESwitchOffConditionCompositeOp, TEXT("ESwitchOffConditionCompositeOp"), &ZRIE_ESwitchOffConditionCompositeOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2506576449U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSwitchOffConditionData, Z_Construct_UScriptStruct_FSwitchOffConditionData_Statics::NewStructOps, TEXT("SwitchOffConditionData"),&Z_Registration_Info_UScriptStruct_FSwitchOffConditionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitchOffConditionData), 729143964U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingSwitchOffCondition, TEXT("UMotionWarpingSwitchOffCondition"), &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingSwitchOffCondition), 2554060629U) },
		{ Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition, TEXT("UMotionWarpingSwitchOffDistanceCondition"), &Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingSwitchOffDistanceCondition), 85150003U) },
		{ Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition, TEXT("UMotionWarpingSwitchOffAngleToTargetCondition"), &Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingSwitchOffAngleToTargetCondition), 2552749217U) },
		{ Z_Construct_UClass_UMotionWarpingSwitchOffCompositeCondition, TEXT("UMotionWarpingSwitchOffCompositeCondition"), &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCompositeCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingSwitchOffCompositeCondition), 3906174239U) },
		{ Z_Construct_UClass_UMotionWarpingSwitchOffBlueprintableCondition, TEXT("UMotionWarpingSwitchOffBlueprintableCondition"), &Z_Registration_Info_UClass_UMotionWarpingSwitchOffBlueprintableCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingSwitchOffBlueprintableCondition), 3735897547U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingSwitchOffCondition_h__Script_MotionWarping_45d072c42523ed680cf2fa1fcbe9e33a82e064c1{
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
