// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ItemDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDefinition() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FItemDefinition();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticRarity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FItemDefinition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemDefinition cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FItemDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FItemDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDefinition, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ItemDefinition"), sizeof(FItemDefinition), Get_Z_Construct_UScriptStruct_FItemDefinition_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FItemDefinition>()
{
	return FItemDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemDefinition(FItemDefinition::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("ItemDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFItemDefinition
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFItemDefinition()
	{
		UScriptStruct::DeferCppStructOps<FItemDefinition>(FName(TEXT("ItemDefinition")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFItemDefinition;
	struct Z_Construct_UScriptStruct_FItemDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BigThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnlockedByDefault_MetaData[];
#endif
		static void NewProp_bUnlockedByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlockedByDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_ItemFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_ItemFlags = { "ItemFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, ItemFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_ItemFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_ItemFlags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, Rarity), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_BigThumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_BigThumbnail = { "BigThumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, BigThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_BigThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_BigThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDefinition, Item), Z_Construct_UClass_UItemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault_SetBit(void* Obj)
	{
		((FItemDefinition*)Obj)->bUnlockedByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault = { "bUnlockedByDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemDefinition), &Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_ItemFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_BigThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDefinition_Statics::NewProp_bUnlockedByDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemDefinition",
		sizeof(FItemDefinition),
		alignof(FItemDefinition),
		Z_Construct_UScriptStruct_FItemDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemDefinition"), sizeof(FItemDefinition), Get_Z_Construct_UScriptStruct_FItemDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemDefinition_Hash() { return 975377650U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
