// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EHuggySoundSet_generated_h
#error "EHuggySoundSet.generated.h already included, missing '#pragma once' in EHuggySoundSet.h"
#endif
#define PLAYTIME_MULTIPLAYER_EHuggySoundSet_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EHuggySoundSet_h


#define FOREACH_ENUM_EHUGGYSOUNDSET(op) \
	op(EHuggySoundSet::Footstep) \
	op(EHuggySoundSet::Crouch) \
	op(EHuggySoundSet::Punch) \
	op(EHuggySoundSet::PunchHit) \
	op(EHuggySoundSet::ChargeAttack) \
	op(EHuggySoundSet::ChargeAttackHit) \
	op(EHuggySoundSet::PlaceMiniHuggy) \
	op(EHuggySoundSet::Jumpscare) \
	op(EHuggySoundSet::SelectScreen) 

enum class EHuggySoundSet : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHuggySoundSet>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
