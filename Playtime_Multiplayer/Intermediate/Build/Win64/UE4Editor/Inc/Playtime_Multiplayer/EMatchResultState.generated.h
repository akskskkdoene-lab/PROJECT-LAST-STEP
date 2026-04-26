// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EMatchResultState_generated_h
#error "EMatchResultState.generated.h already included, missing '#pragma once' in EMatchResultState.h"
#endif
#define PLAYTIME_MULTIPLAYER_EMatchResultState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EMatchResultState_h


#define FOREACH_ENUM_EMATCHRESULTSTATE(op) \
	op(EMatchResultState::MRS_Finished) \
	op(EMatchResultState::MRS_Timeout) \
	op(EMatchResultState::MRS_Disconnected) 

enum class EMatchResultState : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMatchResultState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
