// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/MatchResultStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchResultStat() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FMatchResultStat();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMatchResultState();
// End Cross Module References
class UScriptStruct* FMatchResultStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FMatchResultStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchResultStat, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("MatchResultStat"), sizeof(FMatchResultStat), Get_Z_Construct_UScriptStruct_FMatchResultStat_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FMatchResultStat>()
{
	return FMatchResultStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchResultStat(FMatchResultStat::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("MatchResultStat"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchResultStat
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchResultStat()
	{
		UScriptStruct::DeferCppStructOps<FMatchResultStat>(FName(TEXT("MatchResultStat")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchResultStat;
	struct Z_Construct_UScriptStruct_FMatchResultStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tickets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tickets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MatchResultStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchResultStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_PlayerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchResultStat" },
		{ "ModuleRelativePath", "MatchResultStat.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultStat, PlayerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_PlayerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchResultStat" },
		{ "ModuleRelativePath", "MatchResultStat.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultStat, Status), Z_Construct_UEnum_Playtime_Multiplayer_EMatchResultState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_XP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchResultStat" },
		{ "ModuleRelativePath", "MatchResultStat.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultStat, XP), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_XP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_XP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Tickets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchResultStat" },
		{ "ModuleRelativePath", "MatchResultStat.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Tickets = { "Tickets", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultStat, Tickets), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Tickets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Tickets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchResultStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_PlayerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_XP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultStat_Statics::NewProp_Tickets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchResultStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"MatchResultStat",
		sizeof(FMatchResultStat),
		alignof(FMatchResultStat),
		Z_Construct_UScriptStruct_FMatchResultStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchResultStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchResultStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchResultStat"), sizeof(FMatchResultStat), Get_Z_Construct_UScriptStruct_FMatchResultStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchResultStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchResultStat_Hash() { return 1099229291U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
