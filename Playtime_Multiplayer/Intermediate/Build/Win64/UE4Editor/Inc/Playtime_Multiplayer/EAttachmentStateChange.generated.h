// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EAttachmentStateChange_generated_h
#error "EAttachmentStateChange.generated.h already included, missing '#pragma once' in EAttachmentStateChange.h"
#endif
#define PLAYTIME_MULTIPLAYER_EAttachmentStateChange_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EAttachmentStateChange_h


#define FOREACH_ENUM_EATTACHMENTSTATECHANGE(op) \
	op(EAttachmentStateChange::ASC_Attached) \
	op(EAttachmentStateChange::ASC_Detached) \
	op(EAttachmentStateChange::ASC_StartedPulling) 

enum class EAttachmentStateChange : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EAttachmentStateChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
