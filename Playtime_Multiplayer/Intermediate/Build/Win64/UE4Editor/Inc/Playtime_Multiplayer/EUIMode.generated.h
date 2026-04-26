// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EUIMode_generated_h
#error "EUIMode.generated.h already included, missing '#pragma once' in EUIMode.h"
#endif
#define PLAYTIME_MULTIPLAYER_EUIMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EUIMode_h


#define FOREACH_ENUM_EUIMODE(op) \
	op(EUIMode::UI_ONLY) \
	op(EUIMode::GAME_AND_UI) \
	op(EUIMode::GAME_ONLY) 

enum class EUIMode : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EUIMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
