// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMusicTag_generated_h
#error "EMusicTag.generated.h already included, missing '#pragma once' in EMusicTag.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMusicTag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMusicTag_h


#define FOREACH_ENUM_EMUSICTAG(op) \
	op(EMusicTag::MainMenu) \
	op(EMusicTag::Ambient) \
	op(EMusicTag::Tense) \
	op(EMusicTag::Chase) \
	op(EMusicTag::Shop) \
	op(EMusicTag::Lobby) 

enum class EMusicTag : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMusicTag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
