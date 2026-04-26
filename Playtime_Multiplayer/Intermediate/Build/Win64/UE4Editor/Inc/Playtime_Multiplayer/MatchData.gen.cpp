// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/MatchData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchData() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FMatchData();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMatchState();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStruct();
// End Cross Module References
class UScriptStruct* FMatchData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FMatchData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchData, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("MatchData"), sizeof(FMatchData), Get_Z_Construct_UScriptStruct_FMatchData_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FMatchData>()
{
	return FMatchData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchData(FMatchData::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("MatchData"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchData
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchData()
	{
		UScriptStruct::DeferCppStructOps<FMatchData>(FName(TEXT("MatchData")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchData;
	struct Z_Construct_UScriptStruct_FMatchData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevelStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextLevelStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_PlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchData" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchData, PlayerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_PlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_PlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_XP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchData" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchData, XP), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_XP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_XP_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchData" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState = { "MatchState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchData, MatchState), Z_Construct_UEnum_Playtime_Multiplayer_EMatchState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchData" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult = { "MatchResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchData, MatchResult), Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchData" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevel = { "NextLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchData, NextLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevelStruct_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchData" },
		{ "ModuleRelativePath", "MatchData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevelStruct = { "NextLevelStruct", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchData, NextLevelStruct), Z_Construct_UScriptStruct_FLevelStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevelStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevelStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_PlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_XP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_MatchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchData_Statics::NewProp_NextLevelStruct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"MatchData",
		sizeof(FMatchData),
		alignof(FMatchData),
		Z_Construct_UScriptStruct_FMatchData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchData"), sizeof(FMatchData), Get_Z_Construct_UScriptStruct_FMatchData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchData_Hash() { return 3453591695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
