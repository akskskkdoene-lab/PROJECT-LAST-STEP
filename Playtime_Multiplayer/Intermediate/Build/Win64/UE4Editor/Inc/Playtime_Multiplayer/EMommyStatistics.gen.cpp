// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMommyStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMommyStatistics() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMommyStatistics();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMommyStatistics_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMommyStatistics, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMommyStatistics"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMommyStatistics>()
	{
		return EMommyStatistics_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMommyStatistics(EMommyStatistics_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMommyStatistics"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMommyStatistics_Hash() { return 3904532709U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMommyStatistics()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMommyStatistics"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMommyStatistics_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMommyStatistics::Wins", (int64)EMommyStatistics::Wins },
				{ "EMommyStatistics::Losses", (int64)EMommyStatistics::Losses },
				{ "EMommyStatistics::Win_Loss_Ratio", (int64)EMommyStatistics::Win_Loss_Ratio },
				{ "EMommyStatistics::Downs", (int64)EMommyStatistics::Downs },
				{ "EMommyStatistics::Attack_Accuracy", (int64)EMommyStatistics::Attack_Accuracy },
				{ "EMommyStatistics::Attacks_Hit", (int64)EMommyStatistics::Attacks_Hit },
				{ "EMommyStatistics::Punches", (int64)EMommyStatistics::Punches },
				{ "EMommyStatistics::Spotter_Uses", (int64)EMommyStatistics::Spotter_Uses },
				{ "EMommyStatistics::Webs_Shot", (int64)EMommyStatistics::Webs_Shot },
				{ "EMommyStatistics::Webs_Hit", (int64)EMommyStatistics::Webs_Hit },
				{ "EMommyStatistics::Distance_Wall_Climbed", (int64)EMommyStatistics::Distance_Wall_Climbed },
				{ "EMommyStatistics::Num_Times_Jumped", (int64)EMommyStatistics::Num_Times_Jumped },
				{ "EMommyStatistics::Players_Put_In_Wuggy_Holes", (int64)EMommyStatistics::Players_Put_In_Wuggy_Holes },
				{ "EMommyStatistics::Players_Killed_By_Your_Wuggies", (int64)EMommyStatistics::Players_Killed_By_Your_Wuggies },
				{ "EMommyStatistics::Last", (int64)EMommyStatistics::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack_Accuracy.Name", "EMommyStatistics::Attack_Accuracy" },
				{ "Attacks_Hit.Name", "EMommyStatistics::Attacks_Hit" },
				{ "BlueprintType", "true" },
				{ "Distance_Wall_Climbed.Name", "EMommyStatistics::Distance_Wall_Climbed" },
				{ "Downs.Name", "EMommyStatistics::Downs" },
				{ "Last.Name", "EMommyStatistics::Last" },
				{ "Losses.Name", "EMommyStatistics::Losses" },
				{ "ModuleRelativePath", "EMommyStatistics.h" },
				{ "Num_Times_Jumped.Name", "EMommyStatistics::Num_Times_Jumped" },
				{ "Players_Killed_By_Your_Wuggies.Name", "EMommyStatistics::Players_Killed_By_Your_Wuggies" },
				{ "Players_Put_In_Wuggy_Holes.Name", "EMommyStatistics::Players_Put_In_Wuggy_Holes" },
				{ "Punches.Name", "EMommyStatistics::Punches" },
				{ "Spotter_Uses.Name", "EMommyStatistics::Spotter_Uses" },
				{ "Webs_Hit.Name", "EMommyStatistics::Webs_Hit" },
				{ "Webs_Shot.Name", "EMommyStatistics::Webs_Shot" },
				{ "Win_Loss_Ratio.Name", "EMommyStatistics::Win_Loss_Ratio" },
				{ "Wins.Name", "EMommyStatistics::Wins" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMommyStatistics",
				"EMommyStatistics",
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
