// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMusicTag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMusicTag() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMusicTag();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMusicTag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMusicTag, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMusicTag"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMusicTag>()
	{
		return EMusicTag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMusicTag(EMusicTag_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMusicTag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMusicTag_Hash() { return 1195510387U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMusicTag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMusicTag"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMusicTag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMusicTag::MainMenu", (int64)EMusicTag::MainMenu },
				{ "EMusicTag::Ambient", (int64)EMusicTag::Ambient },
				{ "EMusicTag::Tense", (int64)EMusicTag::Tense },
				{ "EMusicTag::Chase", (int64)EMusicTag::Chase },
				{ "EMusicTag::Shop", (int64)EMusicTag::Shop },
				{ "EMusicTag::Lobby", (int64)EMusicTag::Lobby },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ambient.Name", "EMusicTag::Ambient" },
				{ "BlueprintType", "true" },
				{ "Chase.Name", "EMusicTag::Chase" },
				{ "Lobby.Name", "EMusicTag::Lobby" },
				{ "MainMenu.Name", "EMusicTag::MainMenu" },
				{ "ModuleRelativePath", "EMusicTag.h" },
				{ "Shop.Name", "EMusicTag::Shop" },
				{ "Tense.Name", "EMusicTag::Tense" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMusicTag",
				"EMusicTag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
