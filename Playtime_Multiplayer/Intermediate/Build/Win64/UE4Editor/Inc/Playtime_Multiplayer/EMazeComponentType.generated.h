// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMazeComponentType_generated_h
#error "EMazeComponentType.generated.h already included, missing '#pragma once' in EMazeComponentType.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMazeComponentType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMazeComponentType_h


#define FOREACH_ENUM_EMAZECOMPONENTTYPE(op) \
	op(EMazeComponentType::FROM_UP) \
	op(EMazeComponentType::HORIZONTAL) \
	op(EMazeComponentType::TO_DOWN) \
	op(EMazeComponentType::TURN) \
	op(EMazeComponentType::VERTICAL) 

enum class EMazeComponentType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMazeComponentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
