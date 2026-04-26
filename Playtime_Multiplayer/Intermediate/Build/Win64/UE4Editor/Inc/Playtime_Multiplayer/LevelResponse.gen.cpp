// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/LevelResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelResponse() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelResponse();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FLevelResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FLevelResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelResponse, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("LevelResponse"), sizeof(FLevelResponse), Get_Z_Construct_UScriptStruct_FLevelResponse_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FLevelResponse>()
{
	return FLevelResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelResponse(FLevelResponse::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("LevelResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLevelResponse
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLevelResponse()
	{
		UScriptStruct::DeferCppStructOps<FLevelResponse>(FName(TEXT("LevelResponse")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLevelResponse;
	struct Z_Construct_UScriptStruct_FLevelResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPremiumToyBox_MetaData[];
#endif
		static void NewProp_bHasPremiumToyBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPremiumToyBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginningOfLevelInXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeginningOfLevelInXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginningOfNextLevelInXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeginningOfNextLevelInXP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LevelResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_XP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelResponse" },
		{ "ModuleRelativePath", "LevelResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelResponse, XP), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_XP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_XP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelResponse" },
		{ "ModuleRelativePath", "LevelResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelResponse, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelResponse" },
		{ "ModuleRelativePath", "LevelResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox_SetBit(void* Obj)
	{
		((FLevelResponse*)Obj)->bHasPremiumToyBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox = { "bHasPremiumToyBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelResponse), &Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfLevelInXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelResponse" },
		{ "ModuleRelativePath", "LevelResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfLevelInXP = { "BeginningOfLevelInXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelResponse, BeginningOfLevelInXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfLevelInXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfLevelInXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfNextLevelInXP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelResponse" },
		{ "ModuleRelativePath", "LevelResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfNextLevelInXP = { "BeginningOfNextLevelInXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelResponse, BeginningOfNextLevelInXP), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfNextLevelInXP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfNextLevelInXP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_XP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_bHasPremiumToyBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfLevelInXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelResponse_Statics::NewProp_BeginningOfNextLevelInXP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"LevelResponse",
		sizeof(FLevelResponse),
		alignof(FLevelResponse),
		Z_Construct_UScriptStruct_FLevelResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelResponse"), sizeof(FLevelResponse), Get_Z_Construct_UScriptStruct_FLevelResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelResponse_Hash() { return 2104747086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
