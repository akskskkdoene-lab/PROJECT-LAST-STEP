// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ECosmeticRarity_generated_h
#error "ECosmeticRarity.generated.h already included, missing '#pragma once' in ECosmeticRarity.h"
#endif
#define PLAYTIME_MULTIPLAYER_ECosmeticRarity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ECosmeticRarity_h


#define FOREACH_ENUM_ECOSMETICRARITY(op) \
	op(ECosmeticRarity::Basic) \
	op(ECosmeticRarity::Rare) \
	op(ECosmeticRarity::Epic) \
	op(ECosmeticRarity::Legendary) \
	op(ECosmeticRarity::ALL) 

enum class ECosmeticRarity : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ECosmeticRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
