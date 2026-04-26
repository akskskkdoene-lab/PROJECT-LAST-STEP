// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/SessionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionData() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FSessionData();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FSessionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FSessionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionData, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("SessionData"), sizeof(FSessionData), Get_Z_Construct_UScriptStruct_FSessionData_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FSessionData>()
{
	return FSessionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionData(FSessionData::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("SessionData"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSessionData
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSessionData()
	{
		UScriptStruct::DeferCppStructOps<FSessionData>(FName(TEXT("SessionData")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSessionData;
	struct Z_Construct_UScriptStruct_FSessionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFriendsOnly_MetaData[];
#endif
		static void NewProp_bFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFriendsOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SessionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionData" },
		{ "ModuleRelativePath", "SessionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly_SetBit(void* Obj)
	{
		((FSessionData*)Obj)->bFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly = { "bFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSessionData), &Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_bFriendsOnly,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"SessionData",
		sizeof(FSessionData),
		alignof(FSessionData),
		Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionData"), sizeof(FSessionData), Get_Z_Construct_UScriptStruct_FSessionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionData_Hash() { return 1483107277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
