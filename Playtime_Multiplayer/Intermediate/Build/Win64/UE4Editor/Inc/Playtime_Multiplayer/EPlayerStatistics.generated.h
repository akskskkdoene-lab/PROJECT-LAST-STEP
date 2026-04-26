// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EPlayerStatistics_generated_h
#error "EPlayerStatistics.generated.h already included, missing '#pragma once' in EPlayerStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_EPlayerStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EPlayerStatistics_h


#define FOREACH_ENUM_EPLAYERSTATISTICS(op) \
	op(EPlayerStatistics::Wins) \
	op(EPlayerStatistics::Losses) \
	op(EPlayerStatistics::Win_Loss_Ratio) \
	op(EPlayerStatistics::Total_Hand_Uses) \
	op(EPlayerStatistics::Left_Hand_Uses) \
	op(EPlayerStatistics::Right_Hand_Uses) \
	op(EPlayerStatistics::Distance_Travelled) \
	op(EPlayerStatistics::Distance_Carried_By_Monster) \
	op(EPlayerStatistics::Number_Rolls) \
	op(EPlayerStatistics::Toy_Parts_Picked_Up) \
	op(EPlayerStatistics::Toy_Parts_Deposited) \
	op(EPlayerStatistics::Toys_Loaded_On_Train) \
	op(EPlayerStatistics::Train_Call_Uses) \
	op(EPlayerStatistics::Hide_Boxes_Used) \
	op(EPlayerStatistics::Wuggies_Smacked) \
	op(EPlayerStatistics::Best_Puzzle) \
	op(EPlayerStatistics::Total_Puzzles_Solved) \
	op(EPlayerStatistics::Piano_Puzzles_Solved) \
	op(EPlayerStatistics::Memory_Puzzles_Solved) \
	op(EPlayerStatistics::Reaction_Puzzles_Solved) \
	op(EPlayerStatistics::Total_Puzzles_Failed) \
	op(EPlayerStatistics::Piano_Puzzles_Failed) \
	op(EPlayerStatistics::Memory_Puzzles_Failed) \
	op(EPlayerStatistics::Reaction_Puzzles_Failed) \
	op(EPlayerStatistics::Players_Rescued) \
	op(EPlayerStatistics::Times_Rescued) \
	op(EPlayerStatistics::Deaths_By_Wuggy) \
	op(EPlayerStatistics::Downs_By_Huggy) \
	op(EPlayerStatistics::Downs_By_Mommy) \
	op(EPlayerStatistics::Downs_By_Boxy) \
	op(EPlayerStatistics::Times_Spotted_By_Baby_Huggy) \
	op(EPlayerStatistics::Times_Grabbed_By_Boxy) \
	op(EPlayerStatistics::Number_Webs_From_Mommy) \
	op(EPlayerStatistics::Birds_Flipped) \
	op(EPlayerStatistics::Number_Times_Jumped) \
	op(EPlayerStatistics::Last) 

enum class EPlayerStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EPlayerStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
