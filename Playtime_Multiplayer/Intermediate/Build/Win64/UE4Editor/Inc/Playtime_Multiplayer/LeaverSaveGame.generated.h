// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
#ifdef PLAYTIME_MULTIPLAYER_LeaverSaveGame_generated_h
#error "LeaverSaveGame.generated.h already included, missing '#pragma once' in LeaverSaveGame.h"
#endif
#define PLAYTIME_MULTIPLAYER_LeaverSaveGame_generated_h

#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_SPARSE_DATA
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComparePunishmentLevel); \
	DECLARE_FUNCTION(execDoes12HourPunishmentExist);


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComparePunishmentLevel); \
	DECLARE_FUNCTION(execDoes12HourPunishmentExist);


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeaverSaveGame(); \
	friend struct Z_Construct_UClass_ULeaverSaveGame_Statics; \
public: \
	DECLARE_CLASS(ULeaverSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playtime_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(ULeaverSaveGame)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_INCLASS \
private: \
	static void StaticRegisterNativesULeaverSaveGame(); \
	friend struct Z_Construct_UClass_ULeaverSaveGame_Statics; \
public: \
	DECLARE_CLASS(ULeaverSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playtime_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(ULeaverSaveGame)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeaverSaveGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaverSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeaverSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaverSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeaverSaveGame(ULeaverSaveGame&&); \
	NO_API ULeaverSaveGame(const ULeaverSaveGame&); \
public:


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeaverSaveGame(ULeaverSaveGame&&); \
	NO_API ULeaverSaveGame(const ULeaverSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeaverSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaverSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULeaverSaveGame)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_PRIVATE_PROPERTY_OFFSET
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_9_PROLOG
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_PRIVATE_PROPERTY_OFFSET \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_SPARSE_DATA \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_RPC_WRAPPERS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_INCLASS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_PRIVATE_PROPERTY_OFFSET \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_SPARSE_DATA \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_INCLASS_NO_PURE_DECLS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<class ULeaverSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_LeaverSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
