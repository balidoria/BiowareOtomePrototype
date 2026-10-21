// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingFunctionLibrary.h"

#ifdef MOTIONWARPING_MotionWarpingFunctionLibrary_generated_h
#error "MotionWarpingFunctionLibrary.generated.h already included, missing '#pragma once' in MotionWarpingFunctionLibrary.h"
#endif
#define MOTIONWARPING_MotionWarpingFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
enum class EWarpTargetLocationOffsetDirection : uint8;
struct FMotionWarpingTarget;

// ********** Begin Class UMotionWarpingFunctionLibrary ********************************************
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeMotionWarpingTarget);


struct Z_Construct_UClass_UMotionWarpingFunctionLibrary_Statics;
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingFunctionLibrary(ETypeConstructPhase);

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UMotionWarpingFunctionLibrary_Statics; \
	friend MOTIONWARPING_API UClass* ::Z_Construct_UClass_UMotionWarpingFunctionLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UMotionWarpingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), Z_Construct_UClass_UMotionWarpingFunctionLibrary) \
	DECLARE_SERIALIZER(UMotionWarpingFunctionLibrary)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOTIONWARPING_API UMotionWarpingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingFunctionLibrary(UMotionWarpingFunctionLibrary&&) = delete; \
	UMotionWarpingFunctionLibrary(const UMotionWarpingFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONWARPING_API, UMotionWarpingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingFunctionLibrary) \
	MOTIONWARPING_API virtual ~UMotionWarpingFunctionLibrary();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingFunctionLibrary;

// ********** End Class UMotionWarpingFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
