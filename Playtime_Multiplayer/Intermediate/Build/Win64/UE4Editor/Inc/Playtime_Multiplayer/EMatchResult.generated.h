// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMatchResult_generated_h
#error "EMatchResult.generated.h already included, missing '#pragma once' in EMatchResult.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMatchResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMatchResult_h


#define FOREACH_ENUM_EMATCHRESULT(op) \
	op(EMatchResult::None) \
	op(EMatchResult::HostLeft) \
	op(EMatchResult::MonsterLeft) \
	op(EMatchResult::PlayersWon) \
	op(EMatchResult::MonsterWon) \
	op(EMatchResult::TotalSurvival) \
	op(EMatchResult::Survival) \
	op(EMatchResult::Massacre) \
	op(EMatchResult::TotalMassacre) \
	op(EMatchResult::TimeRanOut) 

enum class EMatchResult : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMatchResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
