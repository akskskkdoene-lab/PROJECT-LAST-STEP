// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EHuggyStatistics_generated_h
#error "EHuggyStatistics.generated.h already included, missing '#pragma once' in EHuggyStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_EHuggyStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EHuggyStatistics_h


#define FOREACH_ENUM_EHUGGYSTATISTICS(op) \
	op(EHuggyStatistics::Wins) \
	op(EHuggyStatistics::Losses) \
	op(EHuggyStatistics::Win_Loss_Ratio) \
	op(EHuggyStatistics::Downs) \
	op(EHuggyStatistics::Attack_Accuracy) \
	op(EHuggyStatistics::Attacks_Hit) \
	op(EHuggyStatistics::Distance_Charged) \
	op(EHuggyStatistics::Players_Hugged) \
	op(EHuggyStatistics::Baby_Huggies_Placed) \
	op(EHuggyStatistics::Baby_Huggies_Triggered) \
	op(EHuggyStatistics::Left_Hand_Punches) \
	op(EHuggyStatistics::Right_Hand_Punches) \
	op(EHuggyStatistics::Num_Times_Jumped) \
	op(EHuggyStatistics::Players_Put_In_Wuggy_Holes) \
	op(EHuggyStatistics::Players_Killed_By_Your_Wuggies) \
	op(EHuggyStatistics::Last) 

enum class EHuggyStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHuggyStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
