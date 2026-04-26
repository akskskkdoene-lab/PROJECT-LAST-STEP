// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EHandStateChange_generated_h
#error "EHandStateChange.generated.h already included, missing '#pragma once' in EHandStateChange.h"
#endif
#define PLAYTIME_MULTIPLAYER_EHandStateChange_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EHandStateChange_h


#define FOREACH_ENUM_EHANDSTATECHANGE(op) \
	op(EHandStateChange::HSC_Undefined) \
	op(EHandStateChange::HSC_Shot) \
	op(EHandStateChange::HSC_Returned) \
	op(EHandStateChange::HSC_Grabbed) \
	op(EHandStateChange::HSC_HitObject) \
	op(EHandStateChange::HSC_StartedPulling) 

enum class EHandStateChange : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHandStateChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
