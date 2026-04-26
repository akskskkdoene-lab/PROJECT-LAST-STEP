// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EPuzzleState_generated_h
#error "EPuzzleState.generated.h already included, missing '#pragma once' in EPuzzleState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EPuzzleState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EPuzzleState_h


#define FOREACH_ENUM_EPUZZLESTATE(op) \
	op(EPuzzleState::Idle) \
	op(EPuzzleState::InProgress) \
	op(EPuzzleState::IncrementProgress) \
	op(EPuzzleState::Failed) \
	op(EPuzzleState::BoobyTrapped) \
	op(EPuzzleState::Shutdown) \
	op(EPuzzleState::Solved) 

enum class EPuzzleState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EPuzzleState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
