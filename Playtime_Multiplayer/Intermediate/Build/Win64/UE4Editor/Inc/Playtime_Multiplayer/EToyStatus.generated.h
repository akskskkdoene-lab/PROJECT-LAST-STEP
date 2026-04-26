// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EToyStatus_generated_h
#error "EToyStatus.generated.h already included, missing '#pragma once' in EToyStatus.h"
#endif
#define PLAYTIME_MULTIPLAYER_EToyStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EToyStatus_h


#define FOREACH_ENUM_ETOYSTATUS(op) \
	op(EToyStatus::Assembled) \
	op(EToyStatus::Carried) \
	op(EToyStatus::Grounded) 

enum class EToyStatus : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EToyStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
