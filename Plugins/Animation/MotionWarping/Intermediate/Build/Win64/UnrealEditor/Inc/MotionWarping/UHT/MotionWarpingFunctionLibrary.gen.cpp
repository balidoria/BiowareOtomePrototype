// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingFunctionLibrary.h"
#include "RootMotionModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMotionWarpingFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingFunctionLibrary(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMotionWarpingFunctionLibrary Function MakeMotionWarpingTarget ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget_Statics
struct UHT_STATICS
{
	struct MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms
	{
		FName Name;
		FVector Location;
		FRotator Rotation;
		const USceneComponent* Component;
		FName BoneName;
		bool bFollowComponent;
		EWarpTargetLocationOffsetDirection LocationOffsetDirection;
		const AActor* AvatarActor;
		FVector LocationOffset;
		FRotator RotationOffset;
		FMotionWarpingTarget ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/MotionWarpingFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeMotionWarpingTarget constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bFollowComponent_SetBit(void* Obj)
	{
		((MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms*)Obj)->bFollowComponent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationOffsetDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationOffsetDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeMotionWarpingTarget constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeMotionWarpingTarget Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, Component), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFollowComponent = { "bFollowComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms), &UHT_STATICS::NewProp_bFollowComponent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LocationOffsetDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LocationOffsetDirection = { "LocationOffsetDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, LocationOffsetDirection), Z_Construct_UEnum_MotionWarping_EWarpTargetLocationOffsetDirection, METADATA_PARAMS(0, nullptr) }; // 261a57dd4fe3ef95924911b480eca7641bc9ba01
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, AvatarActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarActor_MetaData), NewProp_AvatarActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(0, nullptr) }; // f7df2d60740eed1d657c7312a71c325e3ad7dd39
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFollowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffsetDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffsetDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeMotionWarpingTarget Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingFunctionLibrary, nullptr, "MakeMotionWarpingTarget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MotionWarpingFunctionLibrary_eventMakeMotionWarpingTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMotionWarpingFunctionLibrary::execMakeMotionWarpingTarget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bFollowComponent);
	P_GET_ENUM(EWarpTargetLocationOffsetDirection,Z_Param_LocationOffsetDirection);
	P_GET_OBJECT(AActor,Z_Param_AvatarActor);
	P_GET_STRUCT(FVector,Z_Param_LocationOffset);
	P_GET_STRUCT(FRotator,Z_Param_RotationOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMotionWarpingTarget*)Z_Param__Result=UMotionWarpingFunctionLibrary::MakeMotionWarpingTarget(Z_Param_Name,Z_Param_Location,Z_Param_Rotation,Z_Param_Component,Z_Param_BoneName,Z_Param_bFollowComponent,EWarpTargetLocationOffsetDirection(Z_Param_LocationOffsetDirection),Z_Param_AvatarActor,Z_Param_LocationOffset,Z_Param_RotationOffset);
	P_NATIVE_END;
}
// ********** End Class UMotionWarpingFunctionLibrary Function MakeMotionWarpingTarget *************

// ********** Begin Class UMotionWarpingFunctionLibrary ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Motion Warping Function Library\n */" },
#endif
		{ "IncludePath", "MotionWarpingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingFunctionLibrary.h" },
		{ "ScriptName", "MotionWarpingLibrary" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Warping Function Library" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingFunctionLibrary constinit property declarations ************
// ********** End Class UMotionWarpingFunctionLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("MakeMotionWarpingTarget"), .Pointer = &UMotionWarpingFunctionLibrary::execMakeMotionWarpingTarget },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingFunctionLibrary_MakeMotionWarpingTarget, "MakeMotionWarpingTarget" }, // c5f0e4f67f183a88ca7ea8ea657d3983a441f4d3
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingFunctionLibrary,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMotionWarpingFunctionLibrary_StaticRegisterNativesUMotionWarpingFunctionLibrary()
{
	UClass* Class = UMotionWarpingFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary;
UClass* Z_Construct_UClass_UMotionWarpingFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingFunctionLibrary;
		if (!Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingFunctionLibrary"),
				Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton,
				UMotionWarpingFunctionLibrary_StaticRegisterNativesUMotionWarpingFunctionLibrary,
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
		return Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingFunctionLibrary::UMotionWarpingFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingFunctionLibrary);
UMotionWarpingFunctionLibrary::~UMotionWarpingFunctionLibrary() {}
// ********** End Class UMotionWarpingFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingFunctionLibrary, TEXT("UMotionWarpingFunctionLibrary"), &Z_Registration_Info_UClass_UMotionWarpingFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingFunctionLibrary), 633223131U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingFunctionLibrary_h__Script_MotionWarping_54a74ce71e5e455db0dc8ee171e00a09d92bfa0c{
	TEXT("/Script/MotionWarping"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
