// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EGeneralStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGeneralStatistics() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EGeneralStatistics();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EGeneralStatistics_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EGeneralStatistics, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EGeneralStatistics"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EGeneralStatistics>()
	{
		return EGeneralStatistics_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGeneralStatistics(EGeneralStatistics_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EGeneralStatistics"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EGeneralStatistics_Hash() { return 2268390820U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EGeneralStatistics()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGeneralStatistics"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EGeneralStatistics_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGeneralStatistics::Games_Played", (int64)EGeneralStatistics::Games_Played },
				{ "EGeneralStatistics::Wins", (int64)EGeneralStatistics::Wins },
				{ "EGeneralStatistics::Losses", (int64)EGeneralStatistics::Losses },
				{ "EGeneralStatistics::Win_Loss_Ratio", (int64)EGeneralStatistics::Win_Loss_Ratio },
				{ "EGeneralStatistics::Number_Times_Jumped", (int64)EGeneralStatistics::Number_Times_Jumped },
				{ "EGeneralStatistics::Last", (int64)EGeneralStatistics::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Games_Played.Name", "EGeneralStatistics::Games_Played" },
				{ "Last.Name", "EGeneralStatistics::Last" },
				{ "Losses.Name", "EGeneralStatistics::Losses" },
				{ "ModuleRelativePath", "EGeneralStatistics.h" },
				{ "Number_Times_Jumped.Name", "EGeneralStatistics::Number_Times_Jumped" },
				{ "Win_Loss_Ratio.Name", "EGeneralStatistics::Win_Loss_Ratio" },
				{ "Wins.Name", "EGeneralStatistics::Wins" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EGeneralStatistics",
				"EGeneralStatistics",
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
