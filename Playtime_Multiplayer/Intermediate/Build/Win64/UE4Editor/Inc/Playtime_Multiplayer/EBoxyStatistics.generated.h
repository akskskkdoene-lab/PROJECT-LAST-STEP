// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EBoxyStatistics_generated_h
#error "EBoxyStatistics.generated.h already included, missing '#pragma once' in EBoxyStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_EBoxyStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EBoxyStatistics_h


#define FOREACH_ENUM_EBOXYSTATISTICS(op) \
	op(EBoxyStatistics::Wins) \
	op(EBoxyStatistics::Losses) \
	op(EBoxyStatistics::Win_Loss_Ratio) \
	op(EBoxyStatistics::Downs) \
	op(EBoxyStatistics::Attack_Accuracy) \
	op(EBoxyStatistics::Attacks_Hit) \
	op(EBoxyStatistics::Punches) \
	op(EBoxyStatistics::Leaps) \
	op(EBoxyStatistics::Distance_Leaped) \
	op(EBoxyStatistics::Grab_Accuracy) \
	op(EBoxyStatistics::Successful_Grabs) \
	op(EBoxyStatistics::Grab_Attempts) \
	op(EBoxyStatistics::Time_Spent_In_Box) \
	op(EBoxyStatistics::Num_Times_Jumped) \
	op(EBoxyStatistics::Players_Put_In_Wuggy_Holes) \
	op(EBoxyStatistics::Players_Killed_By_Your_Wuggies) \
	op(EBoxyStatistics::Last) 

enum class EBoxyStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EBoxyStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
