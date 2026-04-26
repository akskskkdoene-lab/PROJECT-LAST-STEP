// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EAttackType_generated_h
#error "EAttackType.generated.h already included, missing '#pragma once' in EAttackType.h"
#endif
#define PLAYTIME_MULTIPLAYER_EAttackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EAttackType_h


#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::None) \
	op(EAttackType::Basic) \
	op(EAttackType::Charge) 

enum class EAttackType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EAttackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
