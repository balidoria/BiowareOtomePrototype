// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootMotionModifier_PrecomputedWarp.h"

#ifdef MOTIONWARPING_RootMotionModifier_PrecomputedWarp_generated_h
#error "RootMotionModifier_PrecomputedWarp.generated.h already included, missing '#pragma once' in RootMotionModifier_PrecomputedWarp.h"
#endif
#define MOTIONWARPING_RootMotionModifier_PrecomputedWarp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPrecomputedWarpCurve *********************************************
struct Z_Construct_UScriptStruct_FPrecomputedWarpCurve_Statics;
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedWarpCurve(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPrecomputedWarpCurve_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPrecomputedWarpCurve(ETypeConstructPhase::Inner); }


struct FPrecomputedWarpCurve;
// ********** End ScriptStruct FPrecomputedWarpCurve ***********************************************

// ********** Begin ScriptStruct FPrecomputedWarpSteeringSettings **********************************
struct Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics;
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPrecomputedWarpSteeringSettings(ETypeConstructPhase::Inner); }


struct FPrecomputedWarpSteeringSettings;
// ********** End ScriptStruct FPrecomputedWarpSteeringSettings ************************************

// ********** Begin Class URootMotionModifier_PrecomputedWarp **************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	DECLARE_FUNCTION(execSetAlignOffset);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR
#endif


struct Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_PrecomputedWarp(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URootMotionModifier_PrecomputedWarp_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_PrecomputedWarp(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URootMotionModifier_PrecomputedWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_PrecomputedWarp) \
	DECLARE_SERIALIZER(URootMotionModifier_PrecomputedWarp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier_PrecomputedWarp(URootMotionModifier_PrecomputedWarp&&) = delete; \
	URootMotionModifier_PrecomputedWarp(const URootMotionModifier_PrecomputedWarp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier_PrecomputedWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_PrecomputedWarp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_PrecomputedWarp) \
	MOTIONWARPING_API virtual ~URootMotionModifier_PrecomputedWarp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_71_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_RPC_WRAPPERS_NO_PURE_DECLS_EDITOR \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier_PrecomputedWarp;

// ********** End Class URootMotionModifier_PrecomputedWarp ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_PrecomputedWarp_h

// ********** Begin Enum EPrecomputedWarpWeightCurveType *******************************************
#define FOREACH_ENUM_EPRECOMPUTEDWARPWEIGHTCURVETYPE(op) \
	op(EPrecomputedWarpWeightCurveType::FromRootMotionTranslation) \
	op(EPrecomputedWarpWeightCurveType::FromRootMotionRotation) \
	op(EPrecomputedWarpWeightCurveType::Linear) \
	op(EPrecomputedWarpWeightCurveType::EaseIn) \
	op(EPrecomputedWarpWeightCurveType::EaseOut) \
	op(EPrecomputedWarpWeightCurveType::EaseInOut) \
	op(EPrecomputedWarpWeightCurveType::Instant) \
	op(EPrecomputedWarpWeightCurveType::DoNotWarp) 

enum class EPrecomputedWarpWeightCurveType;
template<> struct TIsUEnumClass<EPrecomputedWarpWeightCurveType> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrecomputedWarpWeightCurveType>();
// ********** End Enum EPrecomputedWarpWeightCurveType *********************************************

// ********** Begin Enum EPrecomputedWarpUpdateMode ************************************************
#define FOREACH_ENUM_EPRECOMPUTEDWARPUPDATEMODE(op) \
	op(EPrecomputedWarpUpdateMode::World) \
	op(EPrecomputedWarpUpdateMode::Relative) 

enum class EPrecomputedWarpUpdateMode;
template<> struct TIsUEnumClass<EPrecomputedWarpUpdateMode> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrecomputedWarpUpdateMode>();
// ********** End Enum EPrecomputedWarpUpdateMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
