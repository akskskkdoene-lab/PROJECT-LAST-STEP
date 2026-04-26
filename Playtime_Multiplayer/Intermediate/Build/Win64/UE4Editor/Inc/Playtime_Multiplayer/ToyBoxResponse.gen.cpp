// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ToyBoxResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyBoxResponse() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FToyBoxResponse();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FToyBoxResponseItem();
// End Cross Module References
class UScriptStruct* FToyBoxResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FToyBoxResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToyBoxResponse, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ToyBoxResponse"), sizeof(FToyBoxResponse), Get_Z_Construct_UScriptStruct_FToyBoxResponse_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FToyBoxResponse>()
{
	return FToyBoxResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToyBoxResponse(FToyBoxResponse::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("ToyBoxResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyBoxResponse
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyBoxResponse()
	{
		UScriptStruct::DeferCppStructOps<FToyBoxResponse>(FName(TEXT("ToyBoxResponse")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyBoxResponse;
	struct Z_Construct_UScriptStruct_FToyBoxResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ToyBoxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToyBoxResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponse" },
		{ "ModuleRelativePath", "ToyBoxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponse, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponse" },
		{ "ModuleRelativePath", "ToyBoxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponse, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponse" },
		{ "ModuleRelativePath", "ToyBoxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponse, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponse" },
		{ "ModuleRelativePath", "ToyBoxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponse, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_EndTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FToyBoxResponseItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyBoxResponse" },
		{ "ModuleRelativePath", "ToyBoxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyBoxResponse, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToyBoxResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyBoxResponse_Statics::NewProp_Items,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToyBoxResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"ToyBoxResponse",
		sizeof(FToyBoxResponse),
		alignof(FToyBoxResponse),
		Z_Construct_UScriptStruct_FToyBoxResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyBoxResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToyBoxResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToyBoxResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToyBoxResponse"), sizeof(FToyBoxResponse), Get_Z_Construct_UScriptStruct_FToyBoxResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToyBoxResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToyBoxResponse_Hash() { return 3512369457U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
