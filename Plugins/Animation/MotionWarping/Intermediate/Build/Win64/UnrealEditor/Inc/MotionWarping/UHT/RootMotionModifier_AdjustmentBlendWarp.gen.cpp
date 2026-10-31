// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier_AdjustmentBlendWarp.h"
#include "Animation/AnimSequence.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_AdjustmentBlendWarp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrack(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FMotionDeltaTrack *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMotionDeltaTrack>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMotionDeltaTrack); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransformTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTranslationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMotionDeltaTrack constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransformTrack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTransformTrack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTranslationTrack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTranslationTrack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotationTrack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaRotationTrack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TotalTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TotalRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMotionDeltaTrack constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionDeltaTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMotionDeltaTrack Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoneTransformTrack_Inner = { "BoneTransformTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BoneTransformTrack = { "BoneTransformTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionDeltaTrack, BoneTransformTrack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTransformTrack_MetaData), NewProp_BoneTransformTrack_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DeltaTranslationTrack_Inner = { "DeltaTranslationTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DeltaTranslationTrack = { "DeltaTranslationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionDeltaTrack, DeltaTranslationTrack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTranslationTrack_MetaData), NewProp_DeltaTranslationTrack_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DeltaRotationTrack_Inner = { "DeltaRotationTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DeltaRotationTrack = { "DeltaRotationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionDeltaTrack, DeltaRotationTrack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaRotationTrack_MetaData), NewProp_DeltaRotationTrack_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TotalTranslation = { "TotalTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionDeltaTrack, TotalTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTranslation_MetaData), NewProp_TotalTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TotalRotation = { "TotalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionDeltaTrack, TotalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalRotation_MetaData), NewProp_TotalRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneTransformTrack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneTransformTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaTranslationTrack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaTranslationTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaRotationTrack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaRotationTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalRotation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMotionDeltaTrack Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"MotionDeltaTrack",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMotionDeltaTrack>(),
	alignof(FMotionDeltaTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionDeltaTrack;
UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrack(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionDeltaTrack, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("MotionDeltaTrack"));
		}
		return Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMotionDeltaTrack.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMotionDeltaTrack ***************************************************

// ********** Begin ScriptStruct FMotionDeltaTrackContainer ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMotionDeltaTrackContainer>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMotionDeltaTrackContainer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMotionDeltaTrackContainer constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMotionDeltaTrackContainer constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionDeltaTrackContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMotionDeltaTrackContainer Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMotionDeltaTrack, METADATA_PARAMS(0, nullptr) }; // dda03b09ba62bdd346bc1e9a0bcd3bb73fc058c3
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionDeltaTrackContainer, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // dda03b09ba62bdd346bc1e9a0bcd3bb73fc058c3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tracks,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMotionDeltaTrackContainer Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	&NewStructOps,
	"MotionDeltaTrackContainer",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMotionDeltaTrackContainer>(),
	alignof(FMotionDeltaTrackContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer;
UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("MotionDeltaTrackContainer"));
		}
		return Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMotionDeltaTrackContainer ******************************************

// ********** Begin Class URootMotionModifier_AdjustmentBlendWarp **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// EXPERIMENTAL: Marked with 'hidedropdown' to prevent it from showing up in the UI since it is not ready for production.\n" },
#endif
		{ "DisplayName", "Adjustment Blend Warp" },
		{ "IncludePath", "RootMotionModifier_AdjustmentBlendWarp.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EXPERIMENTAL: Marked with 'hidedropdown' to prevent it from showing up in the UI since it is not ready for production." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarpIKBones_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKBones_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMeshTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMeshRelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URootMotionModifier_AdjustmentBlendWarp constinit property declarations **
	static void NewProp_bWarpIKBones_SetBit(void* Obj)
	{
		((URootMotionModifier_AdjustmentBlendWarp*)Obj)->bWarpIKBones = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpIKBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IKBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IKBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMeshTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMeshRelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRootMotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URootMotionModifier_AdjustmentBlendWarp constinit property declarations ****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_AdjustmentBlendWarp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URootMotionModifier_AdjustmentBlendWarp Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWarpIKBones = { "bWarpIKBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URootMotionModifier_AdjustmentBlendWarp), &UHT_STATICS::NewProp_bWarpIKBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarpIKBones_MetaData), NewProp_bWarpIKBones_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_IKBones_Inner = { "IKBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_IKBones = { "IKBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, IKBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKBones_MetaData), NewProp_IKBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CachedMeshTransform = { "CachedMeshTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMeshTransform_MetaData), NewProp_CachedMeshTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CachedMeshRelativeTransform = { "CachedMeshRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMeshRelativeTransform_MetaData), NewProp_CachedMeshRelativeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CachedRootMotion = { "CachedRootMotion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRootMotion_MetaData), NewProp_CachedRootMotion_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, Result), Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // bdc94c046eba233d8104f3ca479ae0e8ab63ca08
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWarpIKBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IKBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IKBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedMeshTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedMeshRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URootMotionModifier_AdjustmentBlendWarp Property Definitions ***************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_URootMotionModifier_Warp,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp,
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
	0x048810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp;
UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URootMotionModifier_AdjustmentBlendWarp;
		if (!Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RootMotionModifier_AdjustmentBlendWarp"),
				Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton,
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
		return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URootMotionModifier_AdjustmentBlendWarp);
URootMotionModifier_AdjustmentBlendWarp::~URootMotionModifier_AdjustmentBlendWarp() {}
// ********** End Class URootMotionModifier_AdjustmentBlendWarp ************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FMotionDeltaTrack, Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewStructOps, TEXT("MotionDeltaTrack"),&Z_Registration_Info_UScriptStruct_FMotionDeltaTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionDeltaTrack), 3718265609U) },
		{ Z_Construct_UScriptStruct_FMotionDeltaTrackContainer, Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewStructOps, TEXT("MotionDeltaTrackContainer"),&Z_Registration_Info_UScriptStruct_FMotionDeltaTrackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionDeltaTrackContainer), 1751646709U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp, TEXT("URootMotionModifier_AdjustmentBlendWarp"), &Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_AdjustmentBlendWarp), 1515123798U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h__Script_MotionWarping_5ca63d15a191d1c7d4e45f7f7ce26da08a473065{
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
