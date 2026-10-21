// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingComponent.h"

#ifdef MOTIONWARPING_MotionWarpingComponent_generated_h
#error "MotionWarpingComponent.generated.h already included, missing '#pragma once' in MotionWarpingComponent.h"
#endif
#define MOTIONWARPING_MotionWarpingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UAnimSequenceBase;
class UMotionWarpingComponent;
class UMotionWarpingSwitchOffCondition;
class USceneComponent;
enum class EWarpTargetLocationOffsetDirection : uint8;
struct FMotionWarpingTarget;
struct FMotionWarpingWindowData;

// ********** Begin ScriptStruct FMotionWarpingWindowData ******************************************
struct Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics;
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingWindowData(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FMotionWarpingWindowData(ETypeConstructPhase::Inner); }


struct FMotionWarpingWindowData;
// ********** End ScriptStruct FMotionWarpingWindowData ********************************************

// ********** Begin Class UMotionWarpingUtilities **************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExtractBoneTransformFromAnimationAtTime); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsForWarpTargetFromAnimation); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsFromAnimation); \
	DECLARE_FUNCTION(execExtractRootMotionFromAnimation);


struct Z_Construct_UClass_UMotionWarpingUtilities_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingUtilities(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UMotionWarpingUtilities_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingUtilities(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UMotionWarpingUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingUtilities) \
	DECLARE_SERIALIZER(UMotionWarpingUtilities)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOTIONWARPING_API UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingUtilities(UMotionWarpingUtilities&&) = delete; \
	UMotionWarpingUtilities(const UMotionWarpingUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UMotionWarpingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingUtilities) \
	MOTIONWARPING_API virtual ~UMotionWarpingUtilities();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_55_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingUtilities;

// ********** End Class UMotionWarpingUtilities ****************************************************

// ********** Begin Class UMotionWarpingComponent **************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddSwitchOffCondition); \
	DECLARE_FUNCTION(execRemoveWarpTargets); \
	DECLARE_FUNCTION(execRemoveAllWarpTargets); \
	DECLARE_FUNCTION(execRemoveWarpTarget); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocationAndRotation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromComponent); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromTransform); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTarget); \
	DECLARE_FUNCTION(execFindWarpTarget); \
	DECLARE_FUNCTION(execDisableAllRootMotionModifiers);


struct Z_Construct_UClass_UMotionWarpingComponent_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UMotionWarpingComponent_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingComponent) \
	DECLARE_SERIALIZER(UMotionWarpingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WarpTargets=NETFIELD_REP_START, \
		NETFIELD_REP_END=WarpTargets	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(MOTIONWARPING_API)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingComponent(UMotionWarpingComponent&&) = delete; \
	UMotionWarpingComponent(const UMotionWarpingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingComponent) \
	MOTIONWARPING_API virtual ~UMotionWarpingComponent();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_99_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingComponent;

// ********** End Class UMotionWarpingComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
