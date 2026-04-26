// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ESabotageType_generated_h
#error "ESabotageType.generated.h already included, missing '#pragma once' in ESabotageType.h"
#endif
#define PLAYTIME_MULTIPLAYER_ESabotageType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ESabotageType_h


#define FOREACH_ENUM_ESABOTAGETYPE(op) \
	op(ESabotageType::ST_Undefined) \
	op(ESabotageType::ST_TotalLockdown) \
	op(ESabotageType::ST_Directionless) \
	op(ESabotageType::ST_NoPack) \
	op(ESabotageType::ST_Shutdown) \
	op(ESabotageType::ST_AutoCarry) \
	op(ESabotageType::ST_NoEscape) \
	op(ESabotageType::ST_BoobyTrap) \
	op(ESabotageType::ST_LivingNightmare) 

enum class ESabotageType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ESabotageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
