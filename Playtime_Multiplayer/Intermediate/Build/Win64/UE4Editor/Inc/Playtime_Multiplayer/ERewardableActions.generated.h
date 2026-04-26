// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ERewardableActions_generated_h
#error "ERewardableActions.generated.h already included, missing '#pragma once' in ERewardableActions.h"
#endif
#define PLAYTIME_MULTIPLAYER_ERewardableActions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ERewardableActions_h


#define FOREACH_ENUM_EREWARDABLEACTIONS(op) \
	op(ERewardableActions::PuzzleCompleted) \
	op(ERewardableActions::PlayersRevived) \
	op(ERewardableActions::PlayersExtracted) \
	op(ERewardableActions::ToyPartCarried) \
	op(ERewardableActions::ToyPartDeposited) \
	op(ERewardableActions::TimeSurvived) \
	op(ERewardableActions::EscapedOnTrain) \
	op(ERewardableActions::TeamWinStatus_1) \
	op(ERewardableActions::TeamWinStatus_2) \
	op(ERewardableActions::TeamWinStatus_3) \
	op(ERewardableActions::PlayersDowned) \
	op(ERewardableActions::PlayersDeposited) \
	op(ERewardableActions::KillsDCs) \
	op(ERewardableActions::ToyPartsRemaining) 

enum class ERewardableActions : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ERewardableActions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
