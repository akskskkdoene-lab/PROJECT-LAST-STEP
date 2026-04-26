// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/TicketRewardableAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTicketRewardableAction() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FTicketRewardableAction();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FTicketRewardableAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FTicketRewardableAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTicketRewardableAction, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("TicketRewardableAction"), sizeof(FTicketRewardableAction), Get_Z_Construct_UScriptStruct_FTicketRewardableAction_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FTicketRewardableAction>()
{
	return FTicketRewardableAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTicketRewardableAction(FTicketRewardableAction::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("TicketRewardableAction"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFTicketRewardableAction
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFTicketRewardableAction()
	{
		UScriptStruct::DeferCppStructOps<FTicketRewardableAction>(FName(TEXT("TicketRewardableAction")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFTicketRewardableAction;
	struct Z_Construct_UScriptStruct_FTicketRewardableAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketRewardRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TicketRewardRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TicketRewardableAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTicketRewardableAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_TicketRewardRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TicketRewardableAction" },
		{ "ModuleRelativePath", "TicketRewardableAction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_TicketRewardRowName = { "TicketRewardRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTicketRewardableAction, TicketRewardRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_TicketRewardRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_TicketRewardRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_NumberOfEntries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TicketRewardableAction" },
		{ "ModuleRelativePath", "TicketRewardableAction.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_NumberOfEntries = { "NumberOfEntries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTicketRewardableAction, NumberOfEntries), METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_NumberOfEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_NumberOfEntries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_TicketRewardRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::NewProp_NumberOfEntries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"TicketRewardableAction",
		sizeof(FTicketRewardableAction),
		alignof(FTicketRewardableAction),
		Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTicketRewardableAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTicketRewardableAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TicketRewardableAction"), sizeof(FTicketRewardableAction), Get_Z_Construct_UScriptStruct_FTicketRewardableAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTicketRewardableAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTicketRewardableAction_Hash() { return 1469281236U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
