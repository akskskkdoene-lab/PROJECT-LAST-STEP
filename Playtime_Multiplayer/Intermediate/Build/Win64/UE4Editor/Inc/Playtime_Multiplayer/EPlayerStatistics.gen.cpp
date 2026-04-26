// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EPlayerStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerStatistics() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPlayerStatistics();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EPlayerStatistics_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EPlayerStatistics, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EPlayerStatistics"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EPlayerStatistics>()
	{
		return EPlayerStatistics_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerStatistics(EPlayerStatistics_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EPlayerStatistics"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EPlayerStatistics_Hash() { return 3705133878U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPlayerStatistics()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerStatistics"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EPlayerStatistics_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerStatistics::Wins", (int64)EPlayerStatistics::Wins },
				{ "EPlayerStatistics::Losses", (int64)EPlayerStatistics::Losses },
				{ "EPlayerStatistics::Win_Loss_Ratio", (int64)EPlayerStatistics::Win_Loss_Ratio },
				{ "EPlayerStatistics::Total_Hand_Uses", (int64)EPlayerStatistics::Total_Hand_Uses },
				{ "EPlayerStatistics::Left_Hand_Uses", (int64)EPlayerStatistics::Left_Hand_Uses },
				{ "EPlayerStatistics::Right_Hand_Uses", (int64)EPlayerStatistics::Right_Hand_Uses },
				{ "EPlayerStatistics::Distance_Travelled", (int64)EPlayerStatistics::Distance_Travelled },
				{ "EPlayerStatistics::Distance_Carried_By_Monster", (int64)EPlayerStatistics::Distance_Carried_By_Monster },
				{ "EPlayerStatistics::Number_Rolls", (int64)EPlayerStatistics::Number_Rolls },
				{ "EPlayerStatistics::Toy_Parts_Picked_Up", (int64)EPlayerStatistics::Toy_Parts_Picked_Up },
				{ "EPlayerStatistics::Toy_Parts_Deposited", (int64)EPlayerStatistics::Toy_Parts_Deposited },
				{ "EPlayerStatistics::Toys_Loaded_On_Train", (int64)EPlayerStatistics::Toys_Loaded_On_Train },
				{ "EPlayerStatistics::Train_Call_Uses", (int64)EPlayerStatistics::Train_Call_Uses },
				{ "EPlayerStatistics::Hide_Boxes_Used", (int64)EPlayerStatistics::Hide_Boxes_Used },
				{ "EPlayerStatistics::Wuggies_Smacked", (int64)EPlayerStatistics::Wuggies_Smacked },
				{ "EPlayerStatistics::Best_Puzzle", (int64)EPlayerStatistics::Best_Puzzle },
				{ "EPlayerStatistics::Total_Puzzles_Solved", (int64)EPlayerStatistics::Total_Puzzles_Solved },
				{ "EPlayerStatistics::Piano_Puzzles_Solved", (int64)EPlayerStatistics::Piano_Puzzles_Solved },
				{ "EPlayerStatistics::Memory_Puzzles_Solved", (int64)EPlayerStatistics::Memory_Puzzles_Solved },
				{ "EPlayerStatistics::Reaction_Puzzles_Solved", (int64)EPlayerStatistics::Reaction_Puzzles_Solved },
				{ "EPlayerStatistics::Total_Puzzles_Failed", (int64)EPlayerStatistics::Total_Puzzles_Failed },
				{ "EPlayerStatistics::Piano_Puzzles_Failed", (int64)EPlayerStatistics::Piano_Puzzles_Failed },
				{ "EPlayerStatistics::Memory_Puzzles_Failed", (int64)EPlayerStatistics::Memory_Puzzles_Failed },
				{ "EPlayerStatistics::Reaction_Puzzles_Failed", (int64)EPlayerStatistics::Reaction_Puzzles_Failed },
				{ "EPlayerStatistics::Players_Rescued", (int64)EPlayerStatistics::Players_Rescued },
				{ "EPlayerStatistics::Times_Rescued", (int64)EPlayerStatistics::Times_Rescued },
				{ "EPlayerStatistics::Deaths_By_Wuggy", (int64)EPlayerStatistics::Deaths_By_Wuggy },
				{ "EPlayerStatistics::Downs_By_Huggy", (int64)EPlayerStatistics::Downs_By_Huggy },
				{ "EPlayerStatistics::Downs_By_Mommy", (int64)EPlayerStatistics::Downs_By_Mommy },
				{ "EPlayerStatistics::Downs_By_Boxy", (int64)EPlayerStatistics::Downs_By_Boxy },
				{ "EPlayerStatistics::Times_Spotted_By_Baby_Huggy", (int64)EPlayerStatistics::Times_Spotted_By_Baby_Huggy },
				{ "EPlayerStatistics::Times_Grabbed_By_Boxy", (int64)EPlayerStatistics::Times_Grabbed_By_Boxy },
				{ "EPlayerStatistics::Number_Webs_From_Mommy", (int64)EPlayerStatistics::Number_Webs_From_Mommy },
				{ "EPlayerStatistics::Birds_Flipped", (int64)EPlayerStatistics::Birds_Flipped },
				{ "EPlayerStatistics::Number_Times_Jumped", (int64)EPlayerStatistics::Number_Times_Jumped },
				{ "EPlayerStatistics::Last", (int64)EPlayerStatistics::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Best_Puzzle.Name", "EPlayerStatistics::Best_Puzzle" },
				{ "Birds_Flipped.Name", "EPlayerStatistics::Birds_Flipped" },
				{ "BlueprintType", "true" },
				{ "Deaths_By_Wuggy.Name", "EPlayerStatistics::Deaths_By_Wuggy" },
				{ "Distance_Carried_By_Monster.Name", "EPlayerStatistics::Distance_Carried_By_Monster" },
				{ "Distance_Travelled.Name", "EPlayerStatistics::Distance_Travelled" },
				{ "Downs_By_Boxy.Name", "EPlayerStatistics::Downs_By_Boxy" },
				{ "Downs_By_Huggy.Name", "EPlayerStatistics::Downs_By_Huggy" },
				{ "Downs_By_Mommy.Name", "EPlayerStatistics::Downs_By_Mommy" },
				{ "Hide_Boxes_Used.Name", "EPlayerStatistics::Hide_Boxes_Used" },
				{ "Last.Name", "EPlayerStatistics::Last" },
				{ "Left_Hand_Uses.Name", "EPlayerStatistics::Left_Hand_Uses" },
				{ "Losses.Name", "EPlayerStatistics::Losses" },
				{ "Memory_Puzzles_Failed.Name", "EPlayerStatistics::Memory_Puzzles_Failed" },
				{ "Memory_Puzzles_Solved.Name", "EPlayerStatistics::Memory_Puzzles_Solved" },
				{ "ModuleRelativePath", "EPlayerStatistics.h" },
				{ "Number_Rolls.Name", "EPlayerStatistics::Number_Rolls" },
				{ "Number_Times_Jumped.Name", "EPlayerStatistics::Number_Times_Jumped" },
				{ "Number_Webs_From_Mommy.Name", "EPlayerStatistics::Number_Webs_From_Mommy" },
				{ "Piano_Puzzles_Failed.Name", "EPlayerStatistics::Piano_Puzzles_Failed" },
				{ "Piano_Puzzles_Solved.Name", "EPlayerStatistics::Piano_Puzzles_Solved" },
				{ "Players_Rescued.Name", "EPlayerStatistics::Players_Rescued" },
				{ "Reaction_Puzzles_Failed.Name", "EPlayerStatistics::Reaction_Puzzles_Failed" },
				{ "Reaction_Puzzles_Solved.Name", "EPlayerStatistics::Reaction_Puzzles_Solved" },
				{ "Right_Hand_Uses.Name", "EPlayerStatistics::Right_Hand_Uses" },
				{ "Times_Grabbed_By_Boxy.Name", "EPlayerStatistics::Times_Grabbed_By_Boxy" },
				{ "Times_Rescued.Name", "EPlayerStatistics::Times_Rescued" },
				{ "Times_Spotted_By_Baby_Huggy.Name", "EPlayerStatistics::Times_Spotted_By_Baby_Huggy" },
				{ "Total_Hand_Uses.Name", "EPlayerStatistics::Total_Hand_Uses" },
				{ "Total_Puzzles_Failed.Name", "EPlayerStatistics::Total_Puzzles_Failed" },
				{ "Total_Puzzles_Solved.Name", "EPlayerStatistics::Total_Puzzles_Solved" },
				{ "Toy_Parts_Deposited.Name", "EPlayerStatistics::Toy_Parts_Deposited" },
				{ "Toy_Parts_Picked_Up.Name", "EPlayerStatistics::Toy_Parts_Picked_Up" },
				{ "Toys_Loaded_On_Train.Name", "EPlayerStatistics::Toys_Loaded_On_Train" },
				{ "Train_Call_Uses.Name", "EPlayerStatistics::Train_Call_Uses" },
				{ "Win_Loss_Ratio.Name", "EPlayerStatistics::Win_Loss_Ratio" },
				{ "Wins.Name", "EPlayerStatistics::Wins" },
				{ "Wuggies_Smacked.Name", "EPlayerStatistics::Wuggies_Smacked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EPlayerStatistics",
				"EPlayerStatistics",
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
