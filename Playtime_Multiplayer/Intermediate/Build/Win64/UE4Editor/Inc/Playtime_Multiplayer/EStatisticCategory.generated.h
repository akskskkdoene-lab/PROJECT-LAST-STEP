// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EStatisticCategory_generated_h
#error "EStatisticCategory.generated.h already included, missing '#pragma once' in EStatisticCategory.h"
#endif
#define PLAYTIME_MULTIPLAYER_EStatisticCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EStatisticCategory_h


#define FOREACH_ENUM_ESTATISTICCATEGORY(op) \
	op(EStatisticCategory::General) \
	op(EStatisticCategory::Player) \
	op(EStatisticCategory::Monster) \
	op(EStatisticCategory::Huggy) \
	op(EStatisticCategory::Mommy) \
	op(EStatisticCategory::Boxy) \
	op(EStatisticCategory::Random) \
	op(EStatisticCategory::Last) 

enum class EStatisticCategory : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EStatisticCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
