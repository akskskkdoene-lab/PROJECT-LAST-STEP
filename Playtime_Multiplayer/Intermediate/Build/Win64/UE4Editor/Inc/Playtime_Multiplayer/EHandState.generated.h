// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EHandState_generated_h
#error "EHandState.generated.h already included, missing '#pragma once' in EHandState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EHandState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EHandState_h


#define FOREACH_ENUM_EHANDSTATE(op) \
	op(EHandState::Idle) \
	op(EHandState::Extending) \
	op(EHandState::Grabbed) \
	op(EHandState::Pulling) \
	op(EHandState::Retracting) \
	op(EHandState::PausingBeforeRetraction) 

enum class EHandState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHandState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
