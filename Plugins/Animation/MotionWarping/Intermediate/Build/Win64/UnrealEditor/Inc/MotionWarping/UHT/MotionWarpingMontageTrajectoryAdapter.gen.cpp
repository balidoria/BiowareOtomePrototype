// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingMontageTrajectoryAdapter.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "RootMotionModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMotionWarpingMontageTrajectoryAdapter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingBaseAdapter(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingMontageTrajectoryAdapter(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingSwapState(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchOffConditionData(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingMontageTrajectoryAdapter(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMotionWarpingSwapState *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMotionWarpingSwapState_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMotionWarpingSwapState>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMotionWarpingSwapState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Temp state to iterate on for properties normally owned by the warping component. Used so we can predict without mutating real actor state. */" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temp state to iterate on for properties normally owned by the warping component. Used so we can predict without mutating real actor state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[] = {
		{ "Category", "Warp State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of root motion modifiers, stored as modifiers can be removed during prediction */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of root motion modifiers, stored as modifiers can be removed during prediction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargets_MetaData[] = {
		{ "Category", "Warp State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of warp targets */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of warp targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchOffConditions_MetaData[] = {
		{ "Category", "Warp State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * List of switch off conditions\n\x09 * \n\x09 * @TODO: Currently unused. Switch off conditions aren't actorless yet & to be accurate we may want to also predict against target actor trajectories\n\x09 */" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of switch off conditions\n\n@TODO: Currently unused. Switch off conditions aren't actorless yet & to be accurate we may want to also predict against target actor trajectories" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMotionWarpingSwapState constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchOffConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwitchOffConditions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMotionWarpingSwapState constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingSwapState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMotionWarpingSwapState Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URootMotionModifier, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0114000000022801, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingSwapState, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifiers_MetaData), NewProp_Modifiers_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WarpTargets_Inner = { "WarpTargets", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(0, nullptr) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WarpTargets = { "WarpTargets", nullptr, (EPropertyFlags)0x0010008000022801, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingSwapState, WarpTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargets_MetaData), NewProp_WarpTargets_MetaData) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SwitchOffConditions_Inner = { "SwitchOffConditions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSwitchOffConditionData, METADATA_PARAMS(0, nullptr) }; // 2b75da9c72ae89c84a25de3f6b88aeb81cba982f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SwitchOffConditions = { "SwitchOffConditions", nullptr, (EPropertyFlags)0x0010000000022801, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionWarpingSwapState, SwitchOffConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchOffConditions_MetaData), NewProp_SwitchOffConditions_MetaData) }; // 2b75da9c72ae89c84a25de3f6b88aeb81cba982f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Modifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarpTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SwitchOffConditions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMotionWarpingSwapState Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"MotionWarpingSwapState",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMotionWarpingSwapState>(),
	alignof(FMotionWarpingSwapState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState;
UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingSwapState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingSwapState, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("MotionWarpingSwapState"));
		}
		return Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMotionWarpingSwapState *********************************************

// ********** Begin Class UMotionWarpingMontageTrajectoryAdapter ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingMontageTrajectoryAdapter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adapter for montage trajectories to participate in motion warping */" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionWarpingMontageTrajectoryAdapter.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adapter for montage trajectories to participate in motion warping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWarpState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached state before any prediction, we restore this after predicting. */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached state before any prediction, we restore this after predicting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage to warp trajectory for */" },
#endif
		{ "ModuleRelativePath", "Public/MotionWarpingMontageTrajectoryAdapter.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage to warp trajectory for" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingMontageTrajectoryAdapter constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWarpState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMotionWarpingMontageTrajectoryAdapter constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingMontageTrajectoryAdapter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMotionWarpingMontageTrajectoryAdapter Property Definitions **************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CachedWarpState = { "CachedWarpState", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingMontageTrajectoryAdapter, CachedWarpState), Z_Construct_UScriptStruct_FMotionWarpingSwapState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWarpState_MetaData), NewProp_CachedWarpState_MetaData) }; // 8a227c13d0e819bf8c1fe35471e7ff21bd0ec128
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingMontageTrajectoryAdapter, Montage), Z_Construct_UClass_UAnimMontage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montage_MetaData), NewProp_Montage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedWarpState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMotionWarpingMontageTrajectoryAdapter Property Definitions ****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingBaseAdapter,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingMontageTrajectoryAdapter,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter;
UClass* Z_Construct_UClass_UMotionWarpingMontageTrajectoryAdapter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingMontageTrajectoryAdapter;
		if (!Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingMontageTrajectoryAdapter"),
				Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingMontageTrajectoryAdapter::UMotionWarpingMontageTrajectoryAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingMontageTrajectoryAdapter);
UMotionWarpingMontageTrajectoryAdapter::~UMotionWarpingMontageTrajectoryAdapter() {}
// ********** End Class UMotionWarpingMontageTrajectoryAdapter *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingMontageTrajectoryAdapter_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMotionWarpingSwapState, Z_Construct_UScriptStruct_FMotionWarpingSwapState_Statics::NewStructOps, TEXT("MotionWarpingSwapState"),&Z_Registration_Info_UScriptStruct_FMotionWarpingSwapState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingSwapState), 2317515795U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingMontageTrajectoryAdapter, TEXT("UMotionWarpingMontageTrajectoryAdapter"), &Z_Registration_Info_UClass_UMotionWarpingMontageTrajectoryAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingMontageTrajectoryAdapter), 381055094U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingMontageTrajectoryAdapter_h__Script_MotionWarping_63a5088287683e9edcd8bcb8965fbede94cc6a48{
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
