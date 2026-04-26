// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EItemType_generated_h
#error "EItemType.generated.h already included, missing '#pragma once' in EItemType.h"
#endif
#define PLAYTIME_MULTIPLAYER_EItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EItemType_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::None) \
	op(EItemType::Cosmetic) \
	op(EItemType::Action) \
	op(EItemType::Bundle) \
	op(EItemType::SeasonPass) \
	op(EItemType::LoadingScreen) \
	op(EItemType::SoundPack) \
	op(EItemType::ALL) 

enum class EItemType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
