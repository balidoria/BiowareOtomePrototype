// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootMotionModifier.h"

#ifdef MOTIONWARPING_RootMotionModifier_generated_h
#error "RootMotionModifier.generated.h already included, missing '#pragma once' in RootMotionModifier.h"
#endif
#define MOTIONWARPING_RootMotionModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier;
class URootMotionModifier_Scale;
class USkeletalMeshComponent;

// ********** Begin ScriptStruct FMotionWarpingUpdateContext ***************************************
struct Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics;
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingUpdateContext(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FMotionWarpingUpdateContext(ETypeConstructPhase::Inner); }


struct FMotionWarpingUpdateContext;
// ********** End ScriptStruct FMotionWarpingUpdateContext *****************************************

// ********** Begin Class URootMotionModifier ******************************************************
struct Z_Construct_UClass_URootMotionModifier_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_73_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URootMotionModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier) \
	DECLARE_SERIALIZER(URootMotionModifier)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier(URootMotionModifier&&) = delete; \
	URootMotionModifier(const URootMotionModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier) \
	MOTIONWARPING_API virtual ~URootMotionModifier();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_70_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier;

// ********** End Class URootMotionModifier ********************************************************

// ********** Begin ScriptStruct FMotionWarpingTarget **********************************************
struct Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics;
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase::Inner); }


struct FMotionWarpingTarget;
// ********** End ScriptStruct FMotionWarpingTarget ************************************************

// ********** Begin Class URootMotionModifier_Warp *************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URootMotionModifier_Warp, MOTIONWARPING_API)


struct Z_Construct_UClass_URootMotionModifier_Warp_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Warp_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_Warp(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URootMotionModifier_Warp, URootMotionModifier, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_Warp) \
	DECLARE_SERIALIZER(URootMotionModifier_Warp) \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier_Warp(URootMotionModifier_Warp&&) = delete; \
	URootMotionModifier_Warp(const URootMotionModifier_Warp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier_Warp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Warp); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Warp) \
	MOTIONWARPING_API virtual ~URootMotionModifier_Warp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_342_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_345_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier_Warp;

// ********** End Class URootMotionModifier_Warp ***************************************************

// ********** Begin Class UDEPRECATED_RootMotionModifier_SimpleWarp ********************************
struct Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_481_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDEPRECATED_RootMotionModifier_SimpleWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp) \
	DECLARE_SERIALIZER(UDEPRECATED_RootMotionModifier_SimpleWarp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_481_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_RootMotionModifier_SimpleWarp(UDEPRECATED_RootMotionModifier_SimpleWarp&&) = delete; \
	UDEPRECATED_RootMotionModifier_SimpleWarp(const UDEPRECATED_RootMotionModifier_SimpleWarp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_RootMotionModifier_SimpleWarp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_RootMotionModifier_SimpleWarp) \
	MOTIONWARPING_API virtual ~UDEPRECATED_RootMotionModifier_SimpleWarp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_478_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_481_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_481_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_481_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_RootMotionModifier_SimpleWarp;

// ********** End Class UDEPRECATED_RootMotionModifier_SimpleWarp **********************************

// ********** Begin Class URootMotionModifier_Scale ************************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddRootMotionModifierScale);


struct Z_Construct_UClass_URootMotionModifier_Scale_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Scale(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Scale_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_Scale(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URootMotionModifier_Scale, URootMotionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_Scale) \
	DECLARE_SERIALIZER(URootMotionModifier_Scale)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier_Scale(URootMotionModifier_Scale&&) = delete; \
	URootMotionModifier_Scale(const URootMotionModifier_Scale&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier_Scale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Scale); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Scale) \
	MOTIONWARPING_API virtual ~URootMotionModifier_Scale();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_492_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_495_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier_Scale;

// ********** End Class URootMotionModifier_Scale **************************************************

// ********** Begin Class URootMotionModifier_Blueprintable ****************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URootMotionModifier_Blueprintable_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Blueprintable(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URootMotionModifier_Blueprintable_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_URootMotionModifier_Blueprintable(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URootMotionModifier_Blueprintable, URootMotionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_URootMotionModifier_Blueprintable) \
	DECLARE_SERIALIZER(URootMotionModifier_Blueprintable)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URootMotionModifier_Blueprintable(URootMotionModifier_Blueprintable&&) = delete; \
	URootMotionModifier_Blueprintable(const URootMotionModifier_Blueprintable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, URootMotionModifier_Blueprintable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_Blueprintable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_Blueprintable) \
	MOTIONWARPING_API virtual ~URootMotionModifier_Blueprintable();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_524_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_527_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URootMotionModifier_Blueprintable;

// ********** End Class URootMotionModifier_Blueprintable ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h

// ********** Begin Enum ERootMotionModifierState **************************************************
#define FOREACH_ENUM_EROOTMOTIONMODIFIERSTATE(op) \
	op(ERootMotionModifierState::Waiting) \
	op(ERootMotionModifierState::Active) \
	op(ERootMotionModifierState::MarkedForRemoval) \
	op(ERootMotionModifierState::Disabled) 

enum class ERootMotionModifierState : uint8;
template<> struct TIsUEnumClass<ERootMotionModifierState> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<ERootMotionModifierState>();
// ********** End Enum ERootMotionModifierState ****************************************************

// ********** Begin Enum EWarpTargetLocationOffsetDirection ****************************************
#define FOREACH_ENUM_EWARPTARGETLOCATIONOFFSETDIRECTION(op) \
	op(EWarpTargetLocationOffsetDirection::TargetsForwardVector) \
	op(EWarpTargetLocationOffsetDirection::VectorFromTargetToOwner) \
	op(EWarpTargetLocationOffsetDirection::WorldSpace) 

enum class EWarpTargetLocationOffsetDirection : uint8;
template<> struct TIsUEnumClass<EWarpTargetLocationOffsetDirection> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpTargetLocationOffsetDirection>();
// ********** End Enum EWarpTargetLocationOffsetDirection ******************************************

// ********** Begin Enum EMotionWarpRotationType ***************************************************
#define FOREACH_ENUM_EMOTIONWARPROTATIONTYPE(op) \
	op(EMotionWarpRotationType::Default) \
	op(EMotionWarpRotationType::Facing) \
	op(EMotionWarpRotationType::OppositeDefault) \
	op(EMotionWarpRotationType::OppositeFacing) 

enum class EMotionWarpRotationType : uint8;
template<> struct TIsUEnumClass<EMotionWarpRotationType> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionWarpRotationType>();
// ********** End Enum EMotionWarpRotationType *****************************************************

// ********** Begin Enum EMotionWarpRotationMethod *************************************************
#define FOREACH_ENUM_EMOTIONWARPROTATIONMETHOD(op) \
	op(EMotionWarpRotationMethod::Slerp) \
	op(EMotionWarpRotationMethod::SlerpWithClampedRate) \
	op(EMotionWarpRotationMethod::ConstantRate) \
	op(EMotionWarpRotationMethod::Scale) 

enum class EMotionWarpRotationMethod : uint8;
template<> struct TIsUEnumClass<EMotionWarpRotationMethod> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionWarpRotationMethod>();
// ********** End Enum EMotionWarpRotationMethod ***************************************************

// ********** Begin Enum EWarpPointAnimProvider ****************************************************
#define FOREACH_ENUM_EWARPPOINTANIMPROVIDER(op) \
	op(EWarpPointAnimProvider::None) \
	op(EWarpPointAnimProvider::Static) \
	op(EWarpPointAnimProvider::Bone) 

enum class EWarpPointAnimProvider : uint8;
template<> struct TIsUEnumClass<EWarpPointAnimProvider> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EWarpPointAnimProvider>();
// ********** End Enum EWarpPointAnimProvider ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
