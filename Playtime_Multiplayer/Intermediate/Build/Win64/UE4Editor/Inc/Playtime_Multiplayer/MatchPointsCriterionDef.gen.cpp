// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/MatchPointsCriterionDef.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchPointsCriterionDef() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FMatchPointsCriterionDef();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchPointsCriterionDef>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMatchPointsCriterionDef cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMatchPointsCriterionDef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchPointsCriterionDef, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("MatchPointsCriterionDef"), sizeof(FMatchPointsCriterionDef), Get_Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FMatchPointsCriterionDef>()
{
	return FMatchPointsCriterionDef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchPointsCriterionDef(FMatchPointsCriterionDef::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("MatchPointsCriterionDef"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchPointsCriterionDef
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchPointsCriterionDef()
	{
		UScriptStruct::DeferCppStructOps<FMatchPointsCriterionDef>(FName(TEXT("MatchPointsCriterionDef")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFMatchPointsCriterionDef;
	struct Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriteriaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CriteriaName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NotificationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPointEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPointEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tickets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tickets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MatchPointsCriterionDef.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchPointsCriterionDef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_CriteriaName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPointsCriterionDef" },
		{ "ModuleRelativePath", "MatchPointsCriterionDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_CriteriaName = { "CriteriaName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPointsCriterionDef, CriteriaName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_CriteriaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_CriteriaName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_NotificationText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPointsCriterionDef" },
		{ "ModuleRelativePath", "MatchPointsCriterionDef.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPointsCriterionDef, NotificationText), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_NotificationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_NotificationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_PointWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPointsCriterionDef" },
		{ "ModuleRelativePath", "MatchPointsCriterionDef.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_PointWeight = { "PointWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPointsCriterionDef, PointWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_PointWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_PointWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_MaxPointEntries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPointsCriterionDef" },
		{ "ModuleRelativePath", "MatchPointsCriterionDef.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_MaxPointEntries = { "MaxPointEntries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPointsCriterionDef, MaxPointEntries), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_MaxPointEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_MaxPointEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_Tickets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchPointsCriterionDef" },
		{ "ModuleRelativePath", "MatchPointsCriterionDef.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_Tickets = { "Tickets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchPointsCriterionDef, Tickets), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_Tickets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_Tickets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_CriteriaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_NotificationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_PointWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_MaxPointEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::NewProp_Tickets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MatchPointsCriterionDef",
		sizeof(FMatchPointsCriterionDef),
		alignof(FMatchPointsCriterionDef),
		Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchPointsCriterionDef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchPointsCriterionDef"), sizeof(FMatchPointsCriterionDef), Get_Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchPointsCriterionDef_Hash() { return 2432349872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
