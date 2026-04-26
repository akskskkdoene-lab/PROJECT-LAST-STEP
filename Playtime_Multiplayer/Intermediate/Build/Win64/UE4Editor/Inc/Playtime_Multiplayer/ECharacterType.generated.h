// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ECharacterType_generated_h
#error "ECharacterType.generated.h already included, missing '#pragma once' in ECharacterType.h"
#endif
#define PLAYTIME_MULTIPLAYER_ECharacterType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ECharacterType_h


#define FOREACH_ENUM_ECHARACTERTYPE(op) \
	op(ECharacterType::NONE) \
	op(ECharacterType::Survivor) \
	op(ECharacterType::Boxy) \
	op(ECharacterType::Huggy) \
	op(ECharacterType::Mommy) \
	op(ECharacterType::ALL) 

enum class ECharacterType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ECharacterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
