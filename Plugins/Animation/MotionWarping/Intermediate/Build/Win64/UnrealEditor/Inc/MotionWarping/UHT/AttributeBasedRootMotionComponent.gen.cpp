// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AttributeBasedRootMotionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAttributeBasedRootMotionComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_ACharacter(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UAttributeBasedRootMotionComponent(ETypeConstructPhase);
MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction(ETypeConstructPhase);
MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UAttributeBasedRootMotionComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAttributeBasedRootMotionComponentPrePhysicsTickFunction **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttributeBasedRootMotionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAttributeBasedRootMotionComponentPrePhysicsTickFunction constinit property declarations 
// ********** End ScriptStruct FAttributeBasedRootMotionComponentPrePhysicsTickFunction constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FAttributeBasedRootMotionComponentPrePhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"AttributeBasedRootMotionComponentPrePhysicsTickFunction",
	nullptr,
	0,
	DataSizeOf<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>(),
	alignof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction;
UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("AttributeBasedRootMotionComponentPrePhysicsTickFunction"));
		}
		return Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAttributeBasedRootMotionComponentPrePhysicsTickFunction ************

// ********** Begin Enum EAttributeBasedRootMotionMode *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode_Statics
template<> MOTIONWARPING_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttributeBasedRootMotionMode>()
{
	return Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ApplyDelta.Name", "EAttributeBasedRootMotionMode::ApplyDelta" },
		{ "ApplyVelocity.Name", "EAttributeBasedRootMotionMode::ApplyVelocity" },
		{ "ModuleRelativePath", "Public/AttributeBasedRootMotionComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttributeBasedRootMotionMode::ApplyDelta", (int64)EAttributeBasedRootMotionMode::ApplyDelta },
		{ "EAttributeBasedRootMotionMode::ApplyVelocity", (int64)EAttributeBasedRootMotionMode::ApplyVelocity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
	nullptr,
	"EAttributeBasedRootMotionMode",
	"EAttributeBasedRootMotionMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAttributeBasedRootMotionMode;
UEnum* Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAttributeBasedRootMotionMode.OuterSingleton)
		{
			ZRIE_EAttributeBasedRootMotionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode, (UObject*)Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase::Outer), TEXT("EAttributeBasedRootMotionMode"));
		}
		return ZRIE_EAttributeBasedRootMotionMode.OuterSingleton;
	}
	if (!ZRIE_EAttributeBasedRootMotionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAttributeBasedRootMotionMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAttributeBasedRootMotionMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAttributeBasedRootMotionMode ***********************************************

// ********** Begin Class UAttributeBasedRootMotionComponent ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAttributeBasedRootMotionComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "AttributeBasedRootMotionComponent.h" },
		{ "ModuleRelativePath", "Public/AttributeBasedRootMotionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotion_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/AttributeBasedRootMotionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AttributeBasedRootMotionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character this component belongs to */" },
#endif
		{ "ModuleRelativePath", "Public/AttributeBasedRootMotionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character this component belongs to" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAttributeBasedRootMotionComponent constinit property declarations *******
	static void NewProp_bEnableRootMotion_SetBit(void* Obj)
	{
		((UAttributeBasedRootMotionComponent*)Obj)->bEnableRootMotion = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttributeBasedRootMotionComponent constinit property declarations *********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeBasedRootMotionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAttributeBasedRootMotionComponent Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRootMotion = { "bEnableRootMotion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAttributeBasedRootMotionComponent), &UHT_STATICS::NewProp_bEnableRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRootMotion_MetaData), NewProp_bEnableRootMotion_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeBasedRootMotionComponent, Mode), Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 088ded25cf795e22a73d4d25ad34a370003380ca
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeBasedRootMotionComponent, CharacterOwner), Z_Construct_UClass_ACharacter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CharacterOwner,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAttributeBasedRootMotionComponent Property Definitions ********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAttributeBasedRootMotionComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent;
UClass* Z_Construct_UClass_UAttributeBasedRootMotionComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAttributeBasedRootMotionComponent;
		if (!Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("AttributeBasedRootMotionComponent"),
				Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttributeBasedRootMotionComponent);
UAttributeBasedRootMotionComponent::~UAttributeBasedRootMotionComponent() {}
// ********** End Class UAttributeBasedRootMotionComponent *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_MotionWarping_EAttributeBasedRootMotionMode, TEXT("EAttributeBasedRootMotionMode"), &ZRIE_EAttributeBasedRootMotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 143519013U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction, Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction_Statics::NewStructOps, TEXT("AttributeBasedRootMotionComponentPrePhysicsTickFunction"),&Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction), 3017979690U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeBasedRootMotionComponent, TEXT("UAttributeBasedRootMotionComponent"), &Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeBasedRootMotionComponent), 3110713942U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AttributeBasedRootMotionComponent_h__Script_MotionWarping_65313c715079b8338d4cb6c3091c530ef9e2eb5e{
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
