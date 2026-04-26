// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMatchState_generated_h
#error "EMatchState.generated.h already included, missing '#pragma once' in EMatchState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMatchState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMatchState_h


#define FOREACH_ENUM_EMATCHSTATE(op) \
	op(EMatchState::Lobby) \
	op(EMatchState::InProgress) \
	op(EMatchState::Ended) 

enum class EMatchState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMatchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
