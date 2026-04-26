// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ESoundPackType_generated_h
#error "ESoundPackType.generated.h already included, missing '#pragma once' in ESoundPackType.h"
#endif
#define PLAYTIME_MULTIPLAYER_ESoundPackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ESoundPackType_h


#define FOREACH_ENUM_ESOUNDPACKTYPE(op) \
	op(ESoundPackType::SP_None) \
	op(ESoundPackType::SP_Puzzle) \
	op(ESoundPackType::SP_Survivor) \
	op(ESoundPackType::SP_Lobby) \
	op(ESoundPackType::SP_Ambient) \
	op(ESoundPackType::SP_Chase) \
	op(ESoundPackType::ALL) 

enum class ESoundPackType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ESoundPackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
