// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMommyStatistics_generated_h
#error "EMommyStatistics.generated.h already included, missing '#pragma once' in EMommyStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMommyStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMommyStatistics_h


#define FOREACH_ENUM_EMOMMYSTATISTICS(op) \
	op(EMommyStatistics::Wins) \
	op(EMommyStatistics::Losses) \
	op(EMommyStatistics::Win_Loss_Ratio) \
	op(EMommyStatistics::Downs) \
	op(EMommyStatistics::Attack_Accuracy) \
	op(EMommyStatistics::Attacks_Hit) \
	op(EMommyStatistics::Punches) \
	op(EMommyStatistics::Spotter_Uses) \
	op(EMommyStatistics::Webs_Shot) \
	op(EMommyStatistics::Webs_Hit) \
	op(EMommyStatistics::Distance_Wall_Climbed) \
	op(EMommyStatistics::Num_Times_Jumped) \
	op(EMommyStatistics::Players_Put_In_Wuggy_Holes) \
	op(EMommyStatistics::Players_Killed_By_Your_Wuggies) \
	op(EMommyStatistics::Last) 

enum class EMommyStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMommyStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
