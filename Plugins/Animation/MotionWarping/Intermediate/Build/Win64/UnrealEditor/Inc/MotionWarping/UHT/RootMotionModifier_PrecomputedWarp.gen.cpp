// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier_PrecomputedWarp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_PrecomputedWarp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedWarpCurve(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_PrecomputedWarp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_PrecomputedWarp(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EPrecomputedWarpWeightCurveType *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrecomputedWarpWeightCurveType>()
{
	return Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "DoNotWarp.Name", "EPrecomputedWarpWeightCurveType::DoNotWarp" },
		{ "EaseIn.Name", "EPrecomputedWarpWeightCurveType::EaseIn" },
		{ "EaseInOut.Name", "EPrecomputedWarpWeightCurveType::EaseInOut" },
		{ "EaseOut.Name", "EPrecomputedWarpWeightCurveType::EaseOut" },
		{ "FromRootMotionRotation.Name", "EPrecomputedWarpWeightCurveType::FromRootMotionRotation" },
		{ "FromRootMotionTranslation.Name", "EPrecomputedWarpWeightCurveType::FromRootMotionTranslation" },
		{ "Instant.Name", "EPrecomputedWarpWeightCurveType::Instant" },
		{ "Linear.Name", "EPrecomputedWarpWeightCurveType::Linear" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPrecomputedWarpWeightCurveType::FromRootMotionTranslation", (int64)EPrecomputedWarpWeightCurveType::FromRootMotionTranslation },
		{ "EPrecomputedWarpWeightCurveType::FromRootMotionRotation", (int64)EPrecomputedWarpWeightCurveType::FromRootMotionRotation },
		{ "EPrecomputedWarpWeightCurveType::Linear", (int64)EPrecomputedWarpWeightCurveType::Linear },
		{ "EPrecomputedWarpWeightCurveType::EaseIn", (int64)EPrecomputedWarpWeightCurveType::EaseIn },
		{ "EPrecomputedWarpWeightCurveType::EaseOut", (int64)EPrecomputedWarpWeightCurveType::EaseOut },
		{ "EPrecomputedWarpWeightCurveType::EaseInOut", (int64)EPrecomputedWarpWeightCurveType::EaseInOut },
		{ "EPrecomputedWarpWeightCurveType::Instant", (int64)EPrecomputedWarpWeightCurveType::Instant },
		{ "EPrecomputedWarpWeightCurveType::DoNotWarp", (int64)EPrecomputedWarpWeightCurveType::DoNotWarp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EPrecomputedWarpWeightCurveType",
	"EPrecomputedWarpWeightCurveType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EPrecomputedWarpWeightCurveType;
UEnum* Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EPrecomputedWarpWeightCurveType.OuterSingleton)
		{
			ZRIE_EPrecomputedWarpWeightCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EPrecomputedWarpWeightCurveType"));
		}
		return ZRIE_EPrecomputedWarpWeightCurveType.OuterSingleton;
	}
	if (!ZRIE_EPrecomputedWarpWeightCurveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EPrecomputedWarpWeightCurveType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EPrecomputedWarpWeightCurveType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EPrecomputedWarpWeightCurveType *********************************************

// ********** Begin ScriptStruct FPrecomputedWarpCurve *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPrecomputedWarpCurve_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPrecomputedWarpCurve>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPrecomputedWarpCurve); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of curve to interpolate using\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of curve to interpolate using" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRatio_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time to start warping, as a ratio of the duration of the Notify\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
		{ "SliderExponent", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to start warping, as a ratio of the duration of the Notify" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndRatio_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time to complete warping, as a ratio of the duration of the Notify\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
		{ "SliderExponent", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to complete warping, as a ratio of the duration of the Notify" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPrecomputedWarpCurve constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPrecomputedWarpCurve constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecomputedWarpCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPrecomputedWarpCurve Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedWarpCurve, CurveType), Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveType_MetaData), NewProp_CurveType_MetaData) }; // b8ee5d0506fdb612f698355fcab063fd81911406
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartRatio = { "StartRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedWarpCurve, StartRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRatio_MetaData), NewProp_StartRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndRatio = { "EndRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedWarpCurve, EndRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndRatio_MetaData), NewProp_EndRatio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndRatio,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPrecomputedWarpCurve Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"PrecomputedWarpCurve",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPrecomputedWarpCurve>(),
	alignof(FPrecomputedWarpCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve;
UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedWarpCurve(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedWarpCurve, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("PrecomputedWarpCurve"));
		}
		return Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPrecomputedWarpCurve ***********************************************

// ********** Begin ScriptStruct FPrecomputedWarpSteeringSettings **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPrecomputedWarpSteeringSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPrecomputedWarpSteeringSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSmoothing_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable smoothing of the steering target orientation, to avoid instant orientation changes\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable smoothing of the steering target orientation, to avoid instant orientation changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothStiffness_MetaData[] = {
		{ "Category", "Propeties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sprint stiffness for smoothing\n" },
#endif
		{ "EditCondition", "bEnableSmoothing" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint stiffness for smoothing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothDamping_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spring damping factor for smoothing\n" },
#endif
		{ "EditCondition", "bEnableSmoothing" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring damping factor for smoothing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When the warped movement direction differs from the animated movement direction by more than this threshold, steering will be disabled.\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the warped movement direction differs from the animated movement direction by more than this threshold, steering will be disabled." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPrecomputedWarpSteeringSettings constinit property declarations **
	static void NewProp_bEnableSmoothing_SetBit(void* Obj)
	{
		((FPrecomputedWarpSteeringSettings*)Obj)->bEnableSmoothing = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSmoothing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPrecomputedWarpSteeringSettings constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecomputedWarpSteeringSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPrecomputedWarpSteeringSettings Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableSmoothing = { "bEnableSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FPrecomputedWarpSteeringSettings), &UHT_STATICS::NewProp_bEnableSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSmoothing_MetaData), NewProp_bEnableSmoothing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SmoothStiffness = { "SmoothStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedWarpSteeringSettings, SmoothStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothStiffness_MetaData), NewProp_SmoothStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SmoothDamping = { "SmoothDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedWarpSteeringSettings, SmoothDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothDamping_MetaData), NewProp_SmoothDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedWarpSteeringSettings, AngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleThreshold_MetaData), NewProp_AngleThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AngleThreshold,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPrecomputedWarpSteeringSettings Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"PrecomputedWarpSteeringSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPrecomputedWarpSteeringSettings>(),
	alignof(FPrecomputedWarpSteeringSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings;
UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("PrecomputedWarpSteeringSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPrecomputedWarpSteeringSettings ************************************

// ********** Begin Enum EPrecomputedWarpUpdateMode ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrecomputedWarpUpdateMode>()
{
	return Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
		{ "Relative.Comment", "// each frame, apply the root motion from the alignment path relative to the previous frame\n" },
		{ "Relative.Name", "EPrecomputedWarpUpdateMode::Relative" },
		{ "Relative.ToolTip", "each frame, apply the root motion from the alignment path relative to the previous frame" },
		{ "World.Comment", "// each frame, apply root motion to get to the expected part of the alignment path in wold space\n" },
		{ "World.Name", "EPrecomputedWarpUpdateMode::World" },
		{ "World.ToolTip", "each frame, apply root motion to get to the expected part of the alignment path in wold space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPrecomputedWarpUpdateMode::World", (int64)EPrecomputedWarpUpdateMode::World },
		{ "EPrecomputedWarpUpdateMode::Relative", (int64)EPrecomputedWarpUpdateMode::Relative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EPrecomputedWarpUpdateMode",
	"EPrecomputedWarpUpdateMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EPrecomputedWarpUpdateMode;
UEnum* Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EPrecomputedWarpUpdateMode.OuterSingleton)
		{
			ZRIE_EPrecomputedWarpUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EPrecomputedWarpUpdateMode"));
		}
		return ZRIE_EPrecomputedWarpUpdateMode.OuterSingleton;
	}
	if (!ZRIE_EPrecomputedWarpUpdateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EPrecomputedWarpUpdateMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EPrecomputedWarpUpdateMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EPrecomputedWarpUpdateMode **************************************************

// ********** Begin Class URootMotionModifier_PrecomputedWarp Function SetAlignOffset **************
#if WITH_EDITOR
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URootMotionModifier_PrecomputedWarp_SetAlignOffset_Statics
struct UHT_STATICS
{
	struct RootMotionModifier_PrecomputedWarp_eventSetAlignOffset_Parms
	{
		FTransform NewTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TechAnimUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For automating setting the AlignOffset at the end of the NotifyState\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For automating setting the AlignOffset at the end of the NotifyState" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAlignOffset constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAlignOffset constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAlignOffset Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RootMotionModifier_PrecomputedWarp_eventSetAlignOffset_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAlignOffset Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_PrecomputedWarp, nullptr, "SetAlignOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RootMotionModifier_PrecomputedWarp_eventSetAlignOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RootMotionModifier_PrecomputedWarp_eventSetAlignOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URootMotionModifier_PrecomputedWarp_SetAlignOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URootMotionModifier_PrecomputedWarp::execSetAlignOffset)
{
	P_GET_STRUCT(FTransform,Z_Param_NewTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlignOffset(Z_Param_NewTransform);
	P_NATIVE_END;
}
#endif
// ********** End Class URootMotionModifier_PrecomputedWarp Function SetAlignOffset ****************

// ********** Begin Class URootMotionModifier_PrecomputedWarp **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Precomputed Warp" },
		{ "IncludePath", "RootMotionModifier_PrecomputedWarp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "(Experimental) Precomputed warp computes the full path to alignment on the first frame of execution and then on following frames just applies that root motion.  Only Suitable for stationary targets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationWarpingCurve_MetaData[] = {
		{ "Category", "Blending" },
		{ "EditCondition", "!bSeparateTranslationCurves" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateTranslationCurves_MetaData[] = {
		{ "Category", "Blending" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationWarpingCurve_InMovementDirection_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// curve for warping translation in direction of movement\n" },
#endif
		{ "EditCondition", "bSeparateTranslationCurves" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "curve for warping translation in direction of movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationWarpingCurve_OutOfMovementDirection_MetaData[] = {
		{ "Category", "Blending" },
		{ "EditCondition", "bSeparateTranslationCurves" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationWarpingCurve_MetaData[] = {
		{ "Category", "Blending" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignOffset_MetaData[] = {
		{ "Category", "TargetTransform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset from Root (or AlignBone) to Align to the target transform\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset from Root (or AlignBone) to Align to the target transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTargetTransformUpright_MetaData[] = {
		{ "Category", "TargetTransform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// only allow Yaw in the target transform (remove other rotations before warping)\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "only allow Yaw in the target transform (remove other rotations before warping)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMode_MetaData[] = {
		{ "Category", "TargetTransform" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Disable_MetaData[] = {
		{ "Category", "TargetTransform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bool variable which will disable this notify\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool variable which will disable this notify" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSteering_MetaData[] = {
		{ "Category", "Steering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steering will rotate the character based on the difference between the animated movement direction and the warped movement direction, to keep the character facing their direction of movement\n" },
#endif
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering will rotate the character based on the difference between the animated movement direction and the warped movement direction, to keep the character facing their direction of movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringSettings_MetaData[] = {
		{ "Category", "Steering" },
		{ "EditCondition", "bEnableSteering" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_PrecomputedWarp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier_PrecomputedWarp constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationWarpingCurve;
	static void NewProp_bSeparateTranslationCurves_SetBit(void* Obj)
	{
		((URootMotionModifier_PrecomputedWarp*)Obj)->bSeparateTranslationCurves = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateTranslationCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationWarpingCurve_InMovementDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationWarpingCurve_OutOfMovementDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationWarpingCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlignOffset;
	static void NewProp_bForceTargetTransformUpright_SetBit(void* Obj)
	{
		((URootMotionModifier_PrecomputedWarp*)Obj)->bForceTargetTransformUpright = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTargetTransformUpright;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Disable;
	static void NewProp_bEnableSteering_SetBit(void* Obj)
	{
		((URootMotionModifier_PrecomputedWarp*)Obj)->bEnableSteering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSteering;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URootMotionModifier_PrecomputedWarp constinit property declarations ********
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetAlignOffset"), .Pointer = &URootMotionModifier_PrecomputedWarp::execSetAlignOffset },
	};
#endif
	static FTypeConstructFunc* DependentSingletons[];
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_PrecomputedWarp_SetAlignOffset, "SetAlignOffset" }, // bf752c7dd61b1f697c5ea4b6bf4dc65c202e1a9f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_PrecomputedWarp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URootMotionModifier_PrecomputedWarp Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TranslationWarpingCurve = { "TranslationWarpingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, TranslationWarpingCurve), Z_Construct_UScriptStruct_FPrecomputedWarpCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationWarpingCurve_MetaData), NewProp_TranslationWarpingCurve_MetaData) }; // d067d55447db97e7ce24cb7e3274b37c7362ba4b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSeparateTranslationCurves = { "bSeparateTranslationCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_PrecomputedWarp), &UHT_STATICS::NewProp_bSeparateTranslationCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparateTranslationCurves_MetaData), NewProp_bSeparateTranslationCurves_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TranslationWarpingCurve_InMovementDirection = { "TranslationWarpingCurve_InMovementDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, TranslationWarpingCurve_InMovementDirection), Z_Construct_UScriptStruct_FPrecomputedWarpCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationWarpingCurve_InMovementDirection_MetaData), NewProp_TranslationWarpingCurve_InMovementDirection_MetaData) }; // d067d55447db97e7ce24cb7e3274b37c7362ba4b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TranslationWarpingCurve_OutOfMovementDirection = { "TranslationWarpingCurve_OutOfMovementDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, TranslationWarpingCurve_OutOfMovementDirection), Z_Construct_UScriptStruct_FPrecomputedWarpCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationWarpingCurve_OutOfMovementDirection_MetaData), NewProp_TranslationWarpingCurve_OutOfMovementDirection_MetaData) }; // d067d55447db97e7ce24cb7e3274b37c7362ba4b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationWarpingCurve = { "RotationWarpingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, RotationWarpingCurve), Z_Construct_UScriptStruct_FPrecomputedWarpCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationWarpingCurve_MetaData), NewProp_RotationWarpingCurve_MetaData) }; // d067d55447db97e7ce24cb7e3274b37c7362ba4b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AlignOffset = { "AlignOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, AlignOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignOffset_MetaData), NewProp_AlignOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceTargetTransformUpright = { "bForceTargetTransformUpright", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_PrecomputedWarp), &UHT_STATICS::NewProp_bForceTargetTransformUpright_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTargetTransformUpright_MetaData), NewProp_bForceTargetTransformUpright_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, UpdateMode), Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateMode_MetaData), NewProp_UpdateMode_MetaData) }; // 12d3baba0a112d237b5e1d183bcc9bee5a2860f8
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Disable = { "Disable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, Disable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Disable_MetaData), NewProp_Disable_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableSteering = { "bEnableSteering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_PrecomputedWarp), &UHT_STATICS::NewProp_bEnableSteering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSteering_MetaData), NewProp_bEnableSteering_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SteeringSettings = { "SteeringSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_PrecomputedWarp, SteeringSettings), Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringSettings_MetaData), NewProp_SteeringSettings_MetaData) }; // cd0cc972b90bb581504d56f3ccb12b8f919c9cff
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TranslationWarpingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSeparateTranslationCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TranslationWarpingCurve_InMovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TranslationWarpingCurve_OutOfMovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationWarpingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlignOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceTargetTransformUpright,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Disable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableSteering,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SteeringSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URootMotionModifier_PrecomputedWarp Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_Warp,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier_PrecomputedWarp,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URootMotionModifier_PrecomputedWarp_StaticRegisterNativesURootMotionModifier_PrecomputedWarp()
{
	UClass* Class = URootMotionModifier_PrecomputedWarp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		IF_WITH_EDITOR(MakeConstArrayView(UHT_STATICS::Funcs), {}));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp;
UClass* Z_Construct_UClass_URootMotionModifier_PrecomputedWarp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier_PrecomputedWarp;
		if (!Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_PrecomputedWarp"),
				Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton,
				URootMotionModifier_PrecomputedWarp_StaticRegisterNativesURootMotionModifier_PrecomputedWarp,
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
		return Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier_PrecomputedWarp);
URootMotionModifier_PrecomputedWarp::~URootMotionModifier_PrecomputedWarp() {}
// ********** End Class URootMotionModifier_PrecomputedWarp ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MotionWarping_EPrecomputedWarpWeightCurveType, TEXT("EPrecomputedWarpWeightCurveType"), &ZRIE_EPrecomputedWarpWeightCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3102629125U) },
		{ Z_Construct_UEnum_MotionWarping_EPrecomputedWarpUpdateMode, TEXT("EPrecomputedWarpUpdateMode"), &ZRIE_EPrecomputedWarpUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 315865786U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FPrecomputedWarpCurve, Z_Construct_UScriptStruct_FPrecomputedWarpCurve_Statics::NewStructOps, TEXT("PrecomputedWarpCurve"),&Z_Registration_Info_UScriptStruct_FPrecomputedWarpCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrecomputedWarpCurve), 3496465748U) },
		{ Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings, Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics::NewStructOps, TEXT("PrecomputedWarpSteeringSettings"),&Z_Registration_Info_UScriptStruct_FPrecomputedWarpSteeringSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrecomputedWarpSteeringSettings), 3440167282U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier_PrecomputedWarp, TEXT("URootMotionModifier_PrecomputedWarp"), &Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_PrecomputedWarp), 1807789289U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h__Script_MotionWarping_bd96012172a4f9fb43a63d31be3f3c2f4b343840{
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
