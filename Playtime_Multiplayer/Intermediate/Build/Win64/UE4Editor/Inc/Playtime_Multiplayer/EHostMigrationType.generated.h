// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYTIME_MULTIPLAYER_EHostMigrationType_generated_h
#error "EHostMigrationType.generated.h already included, missing '#pragma once' in EHostMigrationType.h"
#endif
#define PLAYTIME_MULTIPLAYER_EHostMigrationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_EHostMigrationType_h


#define FOREACH_ENUM_EHOSTMIGRATIONTYPE(op) \
	op(EHostMigrationType::None) \
	op(EHostMigrationType::Basic) \
	op(EHostMigrationType::Advanced) 

enum class EHostMigrationType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHostMigrationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
