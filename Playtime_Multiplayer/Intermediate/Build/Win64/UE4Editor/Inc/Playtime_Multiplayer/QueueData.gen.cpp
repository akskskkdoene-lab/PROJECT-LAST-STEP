// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/QueueData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueueData() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FQueueData();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FQueueData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FQueueData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueueData, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("QueueData"), sizeof(FQueueData), Get_Z_Construct_UScriptStruct_FQueueData_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FQueueData>()
{
	return FQueueData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueueData(FQueueData::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("QueueData"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFQueueData
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFQueueData()
	{
		UScriptStruct::DeferCppStructOps<FQueueData>(FName(TEXT("QueueData")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFQueueData;
	struct Z_Construct_UScriptStruct_FQueueData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsSinceLastMonster_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundsSinceLastMonster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToBeMonster_MetaData[];
#endif
		static void NewProp_bWantsToBeMonster_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToBeMonster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "QueueData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueueData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_RoundsSinceLastMonster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QueueData" },
		{ "ModuleRelativePath", "QueueData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_RoundsSinceLastMonster = { "RoundsSinceLastMonster", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueueData, RoundsSinceLastMonster), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_RoundsSinceLastMonster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_RoundsSinceLastMonster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QueueData" },
		{ "ModuleRelativePath", "QueueData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster_SetBit(void* Obj)
	{
		((FQueueData*)Obj)->bWantsToBeMonster = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster = { "bWantsToBeMonster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQueueData), &Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueueData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_RoundsSinceLastMonster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueueData_Statics::NewProp_bWantsToBeMonster,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"QueueData",
		sizeof(FQueueData),
		alignof(FQueueData),
		Z_Construct_UScriptStruct_FQueueData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueueData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueueData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueueData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueueData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueueData"), sizeof(FQueueData), Get_Z_Construct_UScriptStruct_FQueueData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueueData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueueData_Hash() { return 672340045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
