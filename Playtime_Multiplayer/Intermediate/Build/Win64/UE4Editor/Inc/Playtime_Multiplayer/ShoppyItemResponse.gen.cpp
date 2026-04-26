// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ShoppyItemResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShoppyItemResponse() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FShoppyItemResponse();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FShoppyItemResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FShoppyItemResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShoppyItemResponse, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ShoppyItemResponse"), sizeof(FShoppyItemResponse), Get_Z_Construct_UScriptStruct_FShoppyItemResponse_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FShoppyItemResponse>()
{
	return FShoppyItemResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShoppyItemResponse(FShoppyItemResponse::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("ShoppyItemResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFShoppyItemResponse
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFShoppyItemResponse()
	{
		UScriptStruct::DeferCppStructOps<FShoppyItemResponse>(FName(TEXT("ShoppyItemResponse")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFShoppyItemResponse;
	struct Z_Construct_UScriptStruct_FShoppyItemResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceInCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriceInCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceInTickets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriceInTickets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SalePriceInCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SalePriceInCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ShoppyItemResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShoppyItemResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponse" },
		{ "ModuleRelativePath", "ShoppyItemResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponse, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInCoins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponse" },
		{ "ModuleRelativePath", "ShoppyItemResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInCoins = { "PriceInCoins", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponse, PriceInCoins), METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInTickets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponse" },
		{ "ModuleRelativePath", "ShoppyItemResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInTickets = { "PriceInTickets", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponse, PriceInTickets), METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInTickets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInTickets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_SalePriceInCoins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponse" },
		{ "ModuleRelativePath", "ShoppyItemResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_SalePriceInCoins = { "SalePriceInCoins", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponse, SalePriceInCoins), METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_SalePriceInCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_SalePriceInCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponse" },
		{ "ModuleRelativePath", "ShoppyItemResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponse, Rarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_PriceInTickets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_SalePriceInCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::NewProp_Rarity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"ShoppyItemResponse",
		sizeof(FShoppyItemResponse),
		alignof(FShoppyItemResponse),
		Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShoppyItemResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShoppyItemResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShoppyItemResponse"), sizeof(FShoppyItemResponse), Get_Z_Construct_UScriptStruct_FShoppyItemResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShoppyItemResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShoppyItemResponse_Hash() { return 671291528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
