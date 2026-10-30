// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueObject.h"
#include "Node/ModularNodeStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodeNPC(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodePlayer(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueObject(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularOnDialogueFinished__DelegateSignature(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueObject(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FModularOnDialogueFinished ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularOnDialogueFinished__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FModularOnDialogueFinished constinit property declarations ************
// ********** End Delegate FModularOnDialogueFinished constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem, nullptr, "ModularOnDialogueFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularOnDialogueFinished__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FModularOnDialogueFinished **********************************************

// ********** Begin Class UModularDialogueObject ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueObject_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularDialogueObject.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Dialogue status\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Dialogue status" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskType_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently executing Dialogue Task type for Node animations\n//  NPC Node: Dialogue line animation\n//  Player Node: Dialogue responses appear animation \n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently executing Dialogue Task type for Node animations\n NPC Node: Dialogue line animation\n Player Node: Dialogue responses appear animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue's Player reference\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue's Player reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue's NPC reference\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue's NPC reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutingNodeName_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently executing NPC Node.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently executing NPC Node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue actions list\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue actions list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue's NPC Nodes list\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue's NPC Nodes list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dialogue's Player Nodes list\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue's Player Nodes list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[] = {
		{ "Category", "Modular Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event to be triggered when Dialogue is finished\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularDialogueObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event to be triggered when Dialogue is finished" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueObject constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutingNodeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCNodes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NPCNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerNodes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerNodes;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueObject constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueObject Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, Status), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 3b43d537a96a431b67f7b5a5cb2064be9d53f145
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, TaskType), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskType_MetaData), NewProp_TaskType_MetaData) }; // 4854e50b2cdb9a89bd04a79060cf4a56ee4dc901
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, Player), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, NPC), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_MetaData), NewProp_NPC_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ExecutingNodeName = { "ExecutingNodeName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, ExecutingNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutingNodeName_MetaData), NewProp_ExecutingNodeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularDialogueActionBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NPCNodes_ValueProp = { "NPCNodes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModularDialogueNodeNPC, METADATA_PARAMS(0, nullptr) }; // 107c5dd0d5615bf3f78a06963e4eddb5ffefca8b
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NPCNodes_Key_KeyProp = { "NPCNodes_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NPCNodes = { "NPCNodes", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, NPCNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCNodes_MetaData), NewProp_NPCNodes_MetaData) }; // 107c5dd0d5615bf3f78a06963e4eddb5ffefca8b
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerNodes_ValueProp = { "PlayerNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModularDialogueNodePlayer, METADATA_PARAMS(0, nullptr) }; // 5685cff3b2e7b905210d413b1b318e2520799a1c
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlayerNodes_Key_KeyProp = { "PlayerNodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_PlayerNodes = { "PlayerNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, PlayerNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNodes_MetaData), NewProp_PlayerNodes_MetaData) }; // 5685cff3b2e7b905210d413b1b318e2520799a1c
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueObject, OnDialogueFinished), Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularOnDialogueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueFinished_MetaData), NewProp_OnDialogueFinished_MetaData) }; // bfb606e66fe80761854115cde462e84651f006a3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TaskType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TaskType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExecutingNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDialogueFinished,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueObject Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueObject,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueObject;
UClass* Z_Construct_UClass_UModularDialogueObject(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueObject;
		if (!Z_Registration_Info_UClass_UModularDialogueObject.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueObject"),
				Z_Registration_Info_UClass_UModularDialogueObject.InnerSingleton,
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
		return Z_Registration_Info_UClass_UModularDialogueObject.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueObject.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueObject.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueObject::UModularDialogueObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueObject);
UModularDialogueObject::~UModularDialogueObject() {}
// ********** End Class UModularDialogueObject *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_ModularDd7e461cf47d1V8_Source_ModularDialogueSystem_Public_ModularDialogueObject_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueObject, TEXT("UModularDialogueObject"), &Z_Registration_Info_UClass_UModularDialogueObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueObject), 3230438542U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_A_A_m_Documents_Unreal_Projects_Prototype_Otome_Plugins_ModularDd7e461cf47d1V8_Source_ModularDialogueSystem_Public_ModularDialogueObject_h__Script_ModularDialogueSystem_fe2061d592d6ad94643917e9381d9d9b5885712e{
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
