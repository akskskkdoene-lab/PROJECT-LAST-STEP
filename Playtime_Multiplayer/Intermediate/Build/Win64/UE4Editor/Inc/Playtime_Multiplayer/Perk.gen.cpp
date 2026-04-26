// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/Perk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerk() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPerk();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPerkType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPerk>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPerk cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPerk::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FPerk_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerk, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("Perk"), sizeof(FPerk), Get_Z_Construct_UScriptStruct_FPerk_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FPerk>()
{
	return FPerk::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerk(FPerk::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("Perk"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPerk
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPerk()
	{
		UScriptStruct::DeferCppStructOps<FPerk>(FName(TEXT("Perk")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPerk;
	struct Z_Construct_UScriptStruct_FPerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerkType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PerkType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOneDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LevelOneDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTwoDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LevelTwoDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelThreeDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LevelThreeDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOnePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelOnePrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTwoPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelTwoPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelThreePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelThreePrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerk>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType = { "PerkType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, PerkType), Z_Construct_UEnum_Playtime_Multiplayer_EPerkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOneDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOneDescription = { "LevelOneDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, LevelOneDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOneDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOneDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoDescription = { "LevelTwoDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, LevelTwoDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreeDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreeDescription = { "LevelThreeDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, LevelThreeDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreeDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOnePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOnePrice = { "LevelOnePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, LevelOnePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOnePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOnePrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoPrice = { "LevelTwoPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, LevelTwoPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Perk" },
		{ "ModuleRelativePath", "Perk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreePrice = { "LevelThreePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerk, LevelThreePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreePrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_PerkType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOneDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreeDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelOnePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelTwoPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerk_Statics::NewProp_LevelThreePrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Perk",
		sizeof(FPerk),
		alignof(FPerk),
		Z_Construct_UScriptStruct_FPerk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerk()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerk_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Perk"), sizeof(FPerk), Get_Z_Construct_UScriptStruct_FPerk_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerk_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerk_Hash() { return 205589395U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
