// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/TicketReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTicketReward() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FTicketReward();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FTicketReward>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTicketReward cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FTicketReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FTicketReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTicketReward, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("TicketReward"), sizeof(FTicketReward), Get_Z_Construct_UScriptStruct_FTicketReward_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FTicketReward>()
{
	return FTicketReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTicketReward(FTicketReward::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("TicketReward"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFTicketReward
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFTicketReward()
	{
		UScriptStruct::DeferCppStructOps<FTicketReward>(FName(TEXT("TicketReward")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFTicketReward;
	struct Z_Construct_UScriptStruct_FTicketReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreboardDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ScoreboardDisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameNotificationDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InGameNotificationDisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketsToReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TicketsToReward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TicketReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTicketReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTicketReward>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_ScoreboardDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TicketReward" },
		{ "ModuleRelativePath", "TicketReward.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_ScoreboardDisplayText = { "ScoreboardDisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTicketReward, ScoreboardDisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_ScoreboardDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_ScoreboardDisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_InGameNotificationDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TicketReward" },
		{ "ModuleRelativePath", "TicketReward.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_InGameNotificationDisplayText = { "InGameNotificationDisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTicketReward, InGameNotificationDisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_InGameNotificationDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_InGameNotificationDisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_TicketsToReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TicketReward" },
		{ "ModuleRelativePath", "TicketReward.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_TicketsToReward = { "TicketsToReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTicketReward, TicketsToReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_TicketsToReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_TicketsToReward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTicketReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_ScoreboardDisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_InGameNotificationDisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTicketReward_Statics::NewProp_TicketsToReward,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTicketReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TicketReward",
		sizeof(FTicketReward),
		alignof(FTicketReward),
		Z_Construct_UScriptStruct_FTicketReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTicketReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTicketReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTicketReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTicketReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TicketReward"), sizeof(FTicketReward), Get_Z_Construct_UScriptStruct_FTicketReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTicketReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTicketReward_Hash() { return 127541816U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
