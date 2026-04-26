// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ShoppyItemResponseSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShoppyItemResponseSet() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FShoppyItemResponseSet();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FShoppySaleResponse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FShoppyItemResponse();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FShoppyFeaturedItemResponse();
// End Cross Module References
class UScriptStruct* FShoppyItemResponseSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FShoppyItemResponseSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShoppyItemResponseSet, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ShoppyItemResponseSet"), sizeof(FShoppyItemResponseSet), Get_Z_Construct_UScriptStruct_FShoppyItemResponseSet_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FShoppyItemResponseSet>()
{
	return FShoppyItemResponseSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShoppyItemResponseSet(FShoppyItemResponseSet::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("ShoppyItemResponseSet"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFShoppyItemResponseSet
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFShoppyItemResponseSet()
	{
		UScriptStruct::DeferCppStructOps<FShoppyItemResponseSet>(FName(TEXT("ShoppyItemResponseSet")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFShoppyItemResponseSet;
	struct Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaleInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaleInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sale_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sale_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Featured_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Featured_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Featured;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bundles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShoppyItemResponseSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_SaleInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_SaleInfo = { "SaleInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, SaleInfo), Z_Construct_UScriptStruct_FShoppySaleResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_SaleInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_SaleInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_EndTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale_Inner = { "Sale", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShoppyItemResponse, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale = { "Sale", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, Sale), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured_Inner = { "Featured", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShoppyFeaturedItemResponse, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured = { "Featured", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, Featured), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles_Inner = { "Bundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShoppyFeaturedItemResponse, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShoppyItemResponseSet" },
		{ "ModuleRelativePath", "ShoppyItemResponseSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles = { "Bundles", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShoppyItemResponseSet, Bundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_SaleInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Sale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Featured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::NewProp_Bundles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"ShoppyItemResponseSet",
		sizeof(FShoppyItemResponseSet),
		alignof(FShoppyItemResponseSet),
		Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShoppyItemResponseSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShoppyItemResponseSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShoppyItemResponseSet"), sizeof(FShoppyItemResponseSet), Get_Z_Construct_UScriptStruct_FShoppyItemResponseSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShoppyItemResponseSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShoppyItemResponseSet_Hash() { return 3303283375U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
