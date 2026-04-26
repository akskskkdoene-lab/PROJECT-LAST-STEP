// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ECosmeticFilter_generated_h
#error "ECosmeticFilter.generated.h already included, missing '#pragma once' in ECosmeticFilter.h"
#endif
#define PLAYTIME_MULTIPLAYER_ECosmeticFilter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ECosmeticFilter_h


#define FOREACH_ENUM_ECOSMETICFILTER(op) \
	op(ECosmeticFilter::Default) \
	op(ECosmeticFilter::Rarity) \
	op(ECosmeticFilter::Alphabetical) \
	op(ECosmeticFilter::Newest) 

enum class ECosmeticFilter : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ECosmeticFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
