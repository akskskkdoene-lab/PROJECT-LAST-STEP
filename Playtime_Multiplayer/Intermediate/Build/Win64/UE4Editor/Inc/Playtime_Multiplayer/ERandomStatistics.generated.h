// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ERandomStatistics_generated_h
#error "ERandomStatistics.generated.h already included, missing '#pragma once' in ERandomStatistics.h"
#endif
#define PLAYTIME_MULTIPLAYER_ERandomStatistics_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ERandomStatistics_h


#define FOREACH_ENUM_ERANDOMSTATISTICS(op) \
	op(ERandomStatistics::Emotes_Used) \
	op(ERandomStatistics::Time_Spent_Customizing) \
	op(ERandomStatistics::Last) 

enum class ERandomStatistics : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ERandomStatistics>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
