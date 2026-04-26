// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EProgressMilestone_generated_h
#error "EProgressMilestone.generated.h already included, missing '#pragma once' in EProgressMilestone.h"
#endif
#define PLAYTIME_MULTIPLAYER_EProgressMilestone_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EProgressMilestone_h


#define FOREACH_ENUM_EPROGRESSMILESTONE(op) \
	op(EProgressMilestone::PM_ReachedStart) \
	op(EProgressMilestone::PM_PassedThreshold) \
	op(EProgressMilestone::PM_ReachedEnd) 

enum class EProgressMilestone : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EProgressMilestone>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
