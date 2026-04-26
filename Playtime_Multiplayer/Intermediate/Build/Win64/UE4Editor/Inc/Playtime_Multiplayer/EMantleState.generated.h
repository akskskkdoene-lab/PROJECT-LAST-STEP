// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMantleState_generated_h
#error "EMantleState.generated.h already included, missing '#pragma once' in EMantleState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMantleState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMantleState_h


#define FOREACH_ENUM_EMANTLESTATE(op) \
	op(EMantleState::Mantle_Enter) \
	op(EMantleState::Mantle_Idle) \
	op(EMantleState::Mantle_Exit) 

enum class EMantleState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMantleState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
