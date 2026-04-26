// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_ERotatorAxis_generated_h
#error "ERotatorAxis.generated.h already included, missing '#pragma once' in ERotatorAxis.h"
#endif
#define PLAYTIME_MULTIPLAYER_ERotatorAxis_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_ERotatorAxis_h


#define FOREACH_ENUM_EROTATORAXIS(op) \
	op(ERotatorAxis::Pitch) \
	op(ERotatorAxis::Yaw) \
	op(ERotatorAxis::Roll) 

enum class ERotatorAxis : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ERotatorAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
