// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ETransition_generated_h
#error "ETransition.generated.h already included, missing '#pragma once' in ETransition.h"
#endif
#define PLAYTIME_MULTIPLAYER_ETransition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ETransition_h


#define FOREACH_ENUM_ETRANSITION(op) \
	op(ETransition::MainMenu) \
	op(ETransition::HostMigration) \
	op(ETransition::AttemptingQuickplay) 

enum class ETransition : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ETransition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
