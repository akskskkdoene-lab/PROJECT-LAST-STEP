// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EPuzzleType_generated_h
#error "EPuzzleType.generated.h already included, missing '#pragma once' in EPuzzleType.h"
#endif
#define PLAYTIME_MULTIPLAYER_EPuzzleType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EPuzzleType_h


#define FOREACH_ENUM_EPUZZLETYPE(op) \
	op(EPuzzleType::None) \
	op(EPuzzleType::Piano) \
	op(EPuzzleType::Reflex) \
	op(EPuzzleType::Memory) \
	op(EPuzzleType::Maze) \
	op(EPuzzleType::Claw) \
	op(EPuzzleType::Collage) 

enum class EPuzzleType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EPuzzleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
