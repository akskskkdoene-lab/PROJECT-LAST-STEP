// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EGrabbableParameter_generated_h
#error "EGrabbableParameter.generated.h already included, missing '#pragma once' in EGrabbableParameter.h"
#endif
#define PLAYTIME_MULTIPLAYER_EGrabbableParameter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EGrabbableParameter_h


#define FOREACH_ENUM_EGRABBABLEPARAMETER(op) \
	op(EGrabbableParameter::None) \
	op(EGrabbableParameter::CanBePulled) \
	op(EGrabbableParameter::CanBePickedUp) 

enum class EGrabbableParameter : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EGrabbableParameter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
