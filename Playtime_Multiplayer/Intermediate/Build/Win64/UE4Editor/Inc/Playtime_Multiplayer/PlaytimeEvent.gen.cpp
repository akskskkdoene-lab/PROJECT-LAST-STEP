// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/PlaytimeEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaytimeEvent() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPlaytimeEvent();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FPlaytimeEvent>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlaytimeEvent cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlaytimeEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FPlaytimeEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaytimeEvent, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("PlaytimeEvent"), sizeof(FPlaytimeEvent), Get_Z_Construct_UScriptStruct_FPlaytimeEvent_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FPlaytimeEvent>()
{
	return FPlaytimeEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlaytimeEvent(FPlaytimeEvent::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("PlaytimeEvent"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPlaytimeEvent
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPlaytimeEvent()
	{
		UScriptStruct::DeferCppStructOps<FPlaytimeEvent>(FName(TEXT("PlaytimeEvent")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPlaytimeEvent;
	struct Z_Construct_UScriptStruct_FPlaytimeEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventSplash_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EventSplash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EventIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopItemOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ShopItemOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCinematicPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventCinematicPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaytimeEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_StartDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventSplash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventSplash = { "EventSplash", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, EventSplash), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventSplash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventIcon = { "EventIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, EventIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_ShopItemOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_ShopItemOverlay = { "ShopItemOverlay", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, ShopItemOverlay), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_ShopItemOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_ShopItemOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventMusic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventMusic = { "EventMusic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, EventMusic), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventCinematicPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlaytimeEvent" },
		{ "ModuleRelativePath", "PlaytimeEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventCinematicPath = { "EventCinematicPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlaytimeEvent, EventCinematicPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventCinematicPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventCinematicPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_ShopItemOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::NewProp_EventCinematicPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlaytimeEvent",
		sizeof(FPlaytimeEvent),
		alignof(FPlaytimeEvent),
		Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaytimeEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlaytimeEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlaytimeEvent"), sizeof(FPlaytimeEvent), Get_Z_Construct_UScriptStruct_FPlaytimeEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlaytimeEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlaytimeEvent_Hash() { return 2125787393U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
