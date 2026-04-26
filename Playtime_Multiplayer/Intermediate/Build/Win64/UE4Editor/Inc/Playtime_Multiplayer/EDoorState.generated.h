// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EDoorState_generated_h
#error "EDoorState.generated.h already included, missing '#pragma once' in EDoorState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EDoorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EDoorState_h


#define FOREACH_ENUM_EDOORSTATE(op) \
	op(EDoorState::Open) \
	op(EDoorState::Closing) \
	op(EDoorState::Closed) \
	op(EDoorState::Opening) 

enum class EDoorState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EDoorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
