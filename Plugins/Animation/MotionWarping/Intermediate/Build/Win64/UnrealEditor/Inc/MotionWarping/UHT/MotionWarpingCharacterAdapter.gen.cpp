// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingCharacterAdapter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMotionWarpingCharacterAdapter() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_MotionWarping(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingBaseAdapter(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingCharacterAdapter(ETypeConstructPhase);
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingCharacterAdapter(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UMotionWarpingCharacterAdapter *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMotionWarpingCharacterAdapter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adapter for Character / ChararacterMovementComponent actors to participate in motion warping\n" },
#endif
		{ "IncludePath", "MotionWarpingCharacterAdapter.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingCharacterAdapter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adapter for Character / ChararacterMovementComponent actors to participate in motion warping" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMotionWarpingCharacterAdapter constinit property declarations ***********
// ********** End Class UMotionWarpingCharacterAdapter constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingCharacterAdapter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UMotionWarpingBaseAdapter,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_MotionWarping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMotionWarpingCharacterAdapter,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter;
UClass* Z_Construct_UClass_UMotionWarpingCharacterAdapter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMotionWarpingCharacterAdapter;
		if (!Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MotionWarpingCharacterAdapter"),
				Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.OuterSingleton;
}
#undef UHT_STATICS
UMotionWarpingCharacterAdapter::UMotionWarpingCharacterAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMotionWarpingCharacterAdapter);
UMotionWarpingCharacterAdapter::~UMotionWarpingCharacterAdapter() {}
// ********** End Class UMotionWarpingCharacterAdapter *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingCharacterAdapter_h__Script_MotionWarping_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingCharacterAdapter, TEXT("UMotionWarpingCharacterAdapter"), &Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingCharacterAdapter), 1370465589U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingCharacterAdapter_h__Script_MotionWarping_016d864af3a5dd987959f015b44a82792f8113b1{
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
