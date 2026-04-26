// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMonsterStatistics_generated_h
#error "EMonsterStatistics.generated.h already included, missing '#pragma once' in EMonsterStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMonsterStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMonsterStatistics_h


#define FOREACH_ENUM_EMONSTERSTATISTICS(op) \
	op(EMonsterStatistics::Wins) \
	op(EMonsterStatistics::Losses) \
	op(EMonsterStatistics::Win_Loss_Ratio) \
	op(EMonsterStatistics::Downs) \
	op(EMonsterStatistics::Attack_Accuracy) \
	op(EMonsterStatistics::Attacks_Hit) \
	op(EMonsterStatistics::Players_Put_In_Wuggy_Holes) \
	op(EMonsterStatistics::Players_Killed_By_Your_Wuggies) \
	op(EMonsterStatistics::Last) 

enum class EMonsterStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMonsterStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
