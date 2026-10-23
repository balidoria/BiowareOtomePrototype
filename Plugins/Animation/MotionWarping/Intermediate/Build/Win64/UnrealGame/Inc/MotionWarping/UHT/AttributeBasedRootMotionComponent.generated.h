// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeBasedRootMotionComponent.h"

#ifdef MOTIONWARPING_AttributeBasedRootMotionComponent_generated_h
#error "AttributeBasedRootMotionComponent.generated.h already included, missing '#pragma once' in AttributeBasedRootMotionComponent.h"
#endif
#define MOTIONWARPING_AttributeBasedRootMotionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAttributeBasedRootMotionComponentPrePhysicsTickFunction **********
struct Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics;
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction(ETypeConstructPhase);

#define FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction(ETypeConstructPhase::Inner); } \
	typedef FTickFunction Super;


struct FAttributeBasedRootMotionComponentPrePhysicsTickFunction;
// ********** End ScriptStruct FAttributeBasedRootMotionComponentPrePhysicsTickFunction ************

// ********** Begin Class UAttributeBasedRootMotionComponent ***************************************
struct Z_Construct_UClass_UAttributeBasedRootMotionComponent_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UAttributeBasedRootMotionComponent(ETypeConstructPhase);

#define FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAttributeBasedRootMotionComponent_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UAttributeBasedRootMotionComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAttributeBasedRootMotionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UAttributeBasedRootMotionComponent) \
	DECLARE_SERIALIZER(UAttributeBasedRootMotionComponent)


#define FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttributeBasedRootMotionComponent(UAttributeBasedRootMotionComponent&&) = delete; \
	UAttributeBasedRootMotionComponent(const UAttributeBasedRootMotionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UAttributeBasedRootMotionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeBasedRootMotionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeBasedRootMotionComponent) \
	MOTIONWARPING_API virtual ~UAttributeBasedRootMotionComponent();


#define FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_55_PROLOG
#define FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttributeBasedRootMotionComponent;

// ********** End Class UAttributeBasedRootMotionComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h

// ********** Begin Enum EAttributeBasedRootMotionMode *********************************************
#define FOREACH_ENUM_EATTRIBUTEBASEDROOTMOTIONMODE(op) \
	op(EAttributeBasedRootMotionMode::ApplyDelta) \
	op(EAttributeBasedRootMotionMode::ApplyVelocity) 

enum class EAttributeBasedRootMotionMode;
template<> struct TIsUEnumClass<EAttributeBasedRootMotionMode> { enum { Value = true }; };
template<> UE_NODEBUG MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttributeBasedRootMotionMode>();
// ********** End Enum EAttributeBasedRootMotionMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
