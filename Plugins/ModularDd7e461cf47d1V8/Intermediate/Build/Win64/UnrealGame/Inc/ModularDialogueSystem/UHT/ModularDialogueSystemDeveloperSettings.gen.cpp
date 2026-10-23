// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueSystemDeveloperSettings.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueSystemDeveloperSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemDeveloperSettings(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemDeveloperSettings(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemInputAction(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueSystemDeveloperSettings **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueSystemDeveloperSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Modular Dialogue System" },
		{ "IncludePath", "ModularDialogueSystemDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// InputAction for handling Player inputs when Dialogue started and ended.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InputAction for handling Player inputs when Dialogue started and ended." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue widget added to viewport when Dialogue is started\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue widget added to viewport when Dialogue is started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction widget given to closest available NPC\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction widget given to closest available NPC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputEvents_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input event mapping for handling executing Dialogue\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input event mapping for handling executing Dialogue" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueSystemDeveloperSettings constinit property declarations **
	static const UECodeGen_Private::FClassPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputEvents_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputEvents_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueSystemDeveloperSettings constinit property declarations ****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueSystemDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueSystemDeveloperSettings Property Definitions *************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDeveloperSettings, InputAction), Z_Construct_UClass_UClass, Z_Construct_UClass_UModularDialogueSystemInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDeveloperSettings, DialogueWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidget_MetaData), NewProp_DialogueWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDeveloperSettings, InteractionWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidget_MetaData), NewProp_InteractionWidget_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InputEvents_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InputEvents_ValueProp = { "InputEvents", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 1, Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents, METADATA_PARAMS(0, nullptr) }; // 6e867ee5715943a0f02d7de6e5df3bd704a994e6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InputEvents_Key_KeyProp = { "InputEvents_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_InputEvents = { "InputEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDeveloperSettings, InputEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputEvents_MetaData), NewProp_InputEvents_MetaData) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0 6e867ee5715943a0f02d7de6e5df3bd704a994e6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputEvents_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputEvents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueSystemDeveloperSettings Property Definitions ***************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueSystemDeveloperSettings,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings;
UClass* Z_Construct_UClass_UModularDialogueSystemDeveloperSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueSystemDeveloperSettings;
		if (!Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueSystemDeveloperSettings"),
				Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueSystemDeveloperSettings);
UModularDialogueSystemDeveloperSettings::~UModularDialogueSystemDeveloperSettings() {}
// ********** End Class UModularDialogueSystemDeveloperSettings ************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_ModularDd7e461cf47d1V8_Source_ModularDialogueSystem_Public_ModularDialogueSystemDeveloperSettings_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueSystemDeveloperSettings, TEXT("UModularDialogueSystemDeveloperSettings"), &Z_Registration_Info_UClass_UModularDialogueSystemDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueSystemDeveloperSettings), 1883923800U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_ModularDd7e461cf47d1V8_Source_ModularDialogueSystem_Public_ModularDialogueSystemDeveloperSettings_h__Script_ModularDialogueSystem_3e8e7273a8f4c808d010a1943858a8df18357d6f{
	TEXT("/Script/ModularDialogueSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
