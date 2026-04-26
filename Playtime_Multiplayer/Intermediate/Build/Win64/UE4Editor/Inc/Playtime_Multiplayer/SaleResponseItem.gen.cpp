// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/SaleResponseItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaleResponseItem() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FSaleResponseItem();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FSaleResponseItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FSaleResponseItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaleResponseItem, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("SaleResponseItem"), sizeof(FSaleResponseItem), Get_Z_Construct_UScriptStruct_FSaleResponseItem_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FSaleResponseItem>()
{
	return FSaleResponseItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaleResponseItem(FSaleResponseItem::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("SaleResponseItem"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSaleResponseItem
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSaleResponseItem()
	{
		UScriptStruct::DeferCppStructOps<FSaleResponseItem>(FName(TEXT("SaleResponseItem")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSaleResponseItem;
	struct Z_Construct_UScriptStruct_FSaleResponseItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SalePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SalePrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OriginalPrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaleResponseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SaleResponseItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaleResponseItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaleResponseItem" },
		{ "ModuleRelativePath", "SaleResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaleResponseItem, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_SalePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaleResponseItem" },
		{ "ModuleRelativePath", "SaleResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_SalePrice = { "SalePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaleResponseItem, SalePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_SalePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_SalePrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_OriginalPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaleResponseItem" },
		{ "ModuleRelativePath", "SaleResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_OriginalPrice = { "OriginalPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaleResponseItem, OriginalPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_OriginalPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_OriginalPrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaleResponseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_SalePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaleResponseItem_Statics::NewProp_OriginalPrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaleResponseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"SaleResponseItem",
		sizeof(FSaleResponseItem),
		alignof(FSaleResponseItem),
		Z_Construct_UScriptStruct_FSaleResponseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaleResponseItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaleResponseItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaleResponseItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaleResponseItem"), sizeof(FSaleResponseItem), Get_Z_Construct_UScriptStruct_FSaleResponseItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaleResponseItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaleResponseItem_Hash() { return 2160460663U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
