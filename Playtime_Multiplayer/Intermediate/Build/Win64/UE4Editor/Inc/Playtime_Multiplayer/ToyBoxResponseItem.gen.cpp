// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ToyBoxResponseItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyBoxResponseItem() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FToyBoxResponseItem();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FToyBoxResponseItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FToyBoxResponseItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToyBoxResponseItem, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ToyBoxResponseItem"), sizeof(FToyBoxResponseItem), Get_Z_Construct_UScriptStruct_FToyBoxResponseItem_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FToyBoxResponseItem>()
{
	return FToyBoxResponseItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToyBoxResponseItem(FToyBoxResponseItem::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("ToyBoxResponseItem"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyBoxResponseItem
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyBoxResponseItem()
	{
		UScriptStruct::DeferCppStructOps<FToyBoxResponseItem>(FName(TEXT("ToyBoxResponseItem")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyBoxResponseItem;
	struct Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFree_MetaData[];
#endif
		static void NewProp_bFree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ToyBoxResponseItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToyBoxResponseItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponseItem" },
		{ "ModuleRelativePath", "ToyBoxResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponseItem, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponseItem" },
		{ "ModuleRelativePath", "ToyBoxResponseItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree_SetBit(void* Obj)
	{
		((FToyBoxResponseItem*)Obj)->bFree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree = { "bFree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FToyBoxResponseItem), &Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponseItem" },
		{ "ModuleRelativePath", "ToyBoxResponseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponseItem, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_bFree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"ToyBoxResponseItem",
		sizeof(FToyBoxResponseItem),
		alignof(FToyBoxResponseItem),
		Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToyBoxResponseItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToyBoxResponseItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToyBoxResponseItem"), sizeof(FToyBoxResponseItem), Get_Z_Construct_UScriptStruct_FToyBoxResponseItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToyBoxResponseItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToyBoxResponseItem_Hash() { return 153129891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
