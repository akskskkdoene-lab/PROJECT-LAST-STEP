// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMommyGrappleState_generated_h
#error "EMommyGrappleState.generated.h already included, missing '#pragma once' in EMommyGrappleState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMommyGrappleState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMommyGrappleState_h


#define FOREACH_ENUM_EMOMMYGRAPPLESTATE(op) \
	op(EMommyGrappleState::Idle) \
	op(EMommyGrappleState::Extending) \
	op(EMommyGrappleState::Pulling) \
	op(EMommyGrappleState::AttachedToWall) 

enum class EMommyGrappleState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMommyGrappleState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
