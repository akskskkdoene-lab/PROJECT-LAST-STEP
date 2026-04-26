// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EBoxyStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBoxyStatistics() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EBoxyStatistics();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EBoxyStatistics_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EBoxyStatistics, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EBoxyStatistics"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EBoxyStatistics>()
	{
		return EBoxyStatistics_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoxyStatistics(EBoxyStatistics_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EBoxyStatistics"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EBoxyStatistics_Hash() { return 1703275450U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EBoxyStatistics()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoxyStatistics"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EBoxyStatistics_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoxyStatistics::Wins", (int64)EBoxyStatistics::Wins },
				{ "EBoxyStatistics::Losses", (int64)EBoxyStatistics::Losses },
				{ "EBoxyStatistics::Win_Loss_Ratio", (int64)EBoxyStatistics::Win_Loss_Ratio },
				{ "EBoxyStatistics::Downs", (int64)EBoxyStatistics::Downs },
				{ "EBoxyStatistics::Attack_Accuracy", (int64)EBoxyStatistics::Attack_Accuracy },
				{ "EBoxyStatistics::Attacks_Hit", (int64)EBoxyStatistics::Attacks_Hit },
				{ "EBoxyStatistics::Punches", (int64)EBoxyStatistics::Punches },
				{ "EBoxyStatistics::Leaps", (int64)EBoxyStatistics::Leaps },
				{ "EBoxyStatistics::Distance_Leaped", (int64)EBoxyStatistics::Distance_Leaped },
				{ "EBoxyStatistics::Grab_Accuracy", (int64)EBoxyStatistics::Grab_Accuracy },
				{ "EBoxyStatistics::Successful_Grabs", (int64)EBoxyStatistics::Successful_Grabs },
				{ "EBoxyStatistics::Grab_Attempts", (int64)EBoxyStatistics::Grab_Attempts },
				{ "EBoxyStatistics::Time_Spent_In_Box", (int64)EBoxyStatistics::Time_Spent_In_Box },
				{ "EBoxyStatistics::Num_Times_Jumped", (int64)EBoxyStatistics::Num_Times_Jumped },
				{ "EBoxyStatistics::Players_Put_In_Wuggy_Holes", (int64)EBoxyStatistics::Players_Put_In_Wuggy_Holes },
				{ "EBoxyStatistics::Players_Killed_By_Your_Wuggies", (int64)EBoxyStatistics::Players_Killed_By_Your_Wuggies },
				{ "EBoxyStatistics::Last", (int64)EBoxyStatistics::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack_Accuracy.Name", "EBoxyStatistics::Attack_Accuracy" },
				{ "Attacks_Hit.Name", "EBoxyStatistics::Attacks_Hit" },
				{ "BlueprintType", "true" },
				{ "Distance_Leaped.Name", "EBoxyStatistics::Distance_Leaped" },
				{ "Downs.Name", "EBoxyStatistics::Downs" },
				{ "Grab_Accuracy.Name", "EBoxyStatistics::Grab_Accuracy" },
				{ "Grab_Attempts.Name", "EBoxyStatistics::Grab_Attempts" },
				{ "Last.Name", "EBoxyStatistics::Last" },
				{ "Leaps.Name", "EBoxyStatistics::Leaps" },
				{ "Losses.Name", "EBoxyStatistics::Losses" },
				{ "ModuleRelativePath", "EBoxyStatistics.h" },
				{ "Num_Times_Jumped.Name", "EBoxyStatistics::Num_Times_Jumped" },
				{ "Players_Killed_By_Your_Wuggies.Name", "EBoxyStatistics::Players_Killed_By_Your_Wuggies" },
				{ "Players_Put_In_Wuggy_Holes.Name", "EBoxyStatistics::Players_Put_In_Wuggy_Holes" },
				{ "Punches.Name", "EBoxyStatistics::Punches" },
				{ "Successful_Grabs.Name", "EBoxyStatistics::Successful_Grabs" },
				{ "Time_Spent_In_Box.Name", "EBoxyStatistics::Time_Spent_In_Box" },
				{ "Win_Loss_Ratio.Name", "EBoxyStatistics::Win_Loss_Ratio" },
				{ "Wins.Name", "EBoxyStatistics::Wins" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EBoxyStatistics",
				"EBoxyStatistics",
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
