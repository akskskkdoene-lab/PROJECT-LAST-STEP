// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EGeneralStatistics_generated_h
#error "EGeneralStatistics.generated.h already included, missing '#pragma once' in EGeneralStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_EGeneralStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EGeneralStatistics_h


#define FOREACH_ENUM_EGENERALSTATISTICS(op) \
	op(EGeneralStatistics::Games_Played) \
	op(EGeneralStatistics::Wins) \
	op(EGeneralStatistics::Losses) \
	op(EGeneralStatistics::Win_Loss_Ratio) \
	op(EGeneralStatistics::Number_Times_Jumped) \
	op(EGeneralStatistics::Last) 

enum class EGeneralStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EGeneralStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
