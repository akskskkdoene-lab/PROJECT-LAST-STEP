// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/PerkPackage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkPackage() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPerkPackage();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPerkType();
// End Cross Module References
class UScriptStruct* FPerkPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FPerkPackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkPackage, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("PerkPackage"), sizeof(FPerkPackage), Get_Z_Construct_UScriptStruct_FPerkPackage_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FPerkPackage>()
{
	return FPerkPackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerkPackage(FPerkPackage::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("PerkPackage"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPerkPackage
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPerkPackage()
	{
		UScriptStruct::DeferCppStructOps<FPerkPackage>(FName(TEXT("PerkPackage")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPerkPackage;
	struct Z_Construct_UScriptStruct_FPerkPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPerk_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstPerkLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondPerk_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondPerkLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThirdPerk_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThirdPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThirdPerkLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerkPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkPackage>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PerkPackage" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk = { "FirstPerk", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkPackage, FirstPerk), Z_Construct_UEnum_Playtime_Multiplayer_EPerkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerkLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PerkPackage" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerkLevel = { "FirstPerkLevel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkPackage, FirstPerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerkLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PerkPackage" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk = { "SecondPerk", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkPackage, SecondPerk), Z_Construct_UEnum_Playtime_Multiplayer_EPerkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerkLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PerkPackage" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerkLevel = { "SecondPerkLevel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkPackage, SecondPerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerkLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PerkPackage" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk = { "ThirdPerk", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkPackage, ThirdPerk), Z_Construct_UEnum_Playtime_Multiplayer_EPerkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerkLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PerkPackage" },
		{ "ModuleRelativePath", "PerkPackage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerkLevel = { "ThirdPerkLevel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkPackage, ThirdPerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerkLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_FirstPerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_SecondPerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkPackage_Statics::NewProp_ThirdPerkLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"PerkPackage",
		sizeof(FPerkPackage),
		alignof(FPerkPackage),
		Z_Construct_UScriptStruct_FPerkPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerkPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerkPackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerkPackage"), sizeof(FPerkPackage), Get_Z_Construct_UScriptStruct_FPerkPackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerkPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerkPackage_Hash() { return 973223258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
