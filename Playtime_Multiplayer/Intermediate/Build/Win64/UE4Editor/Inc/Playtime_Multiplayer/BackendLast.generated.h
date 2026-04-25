// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestRequestJSON;
#ifdef PLAYTIME_MULTIPLAYER_BackendLast_generated_h
#error "BackendLast.generated.h already included, missing '#pragma once' in BackendLast.h"
#endif
#define PLAYTIME_MULTIPLAYER_BackendLast_generated_h

#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_10_DELEGATE \
struct _Script_Playtime_Multiplayer_eventOnSupabaseCallback_Parms \
{ \
	UVaRestJsonObject* JsonData; \
	FString Message; \
}; \
static inline void FOnSupabaseCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSupabaseCallback, UVaRestJsonObject* JsonData, const FString& Message) \
{ \
	_Script_Playtime_Multiplayer_eventOnSupabaseCallback_Parms Parms; \
	Parms.JsonData=JsonData; \
	Parms.Message=Message; \
	OnSupabaseCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_SPARSE_DATA
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWebRequestFailed); \
	DECLARE_FUNCTION(execOnWebRequestCompleted); \
	DECLARE_FUNCTION(execSendRequest);


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWebRequestFailed); \
	DECLARE_FUNCTION(execOnWebRequestCompleted); \
	DECLARE_FUNCTION(execSendRequest);


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackendLast(); \
	friend struct Z_Construct_UClass_UBackendLast_Statics; \
public: \
	DECLARE_CLASS(UBackendLast, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playtime_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(UBackendLast)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBackendLast(); \
	friend struct Z_Construct_UClass_UBackendLast_Statics; \
public: \
	DECLARE_CLASS(UBackendLast, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playtime_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(UBackendLast)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackendLast(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackendLast) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackendLast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackendLast); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackendLast(UBackendLast&&); \
	NO_API UBackendLast(const UBackendLast&); \
public:


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackendLast(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackendLast(UBackendLast&&); \
	NO_API UBackendLast(const UBackendLast&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackendLast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackendLast); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackendLast)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_PRIVATE_PROPERTY_OFFSET
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_12_PROLOG
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_PRIVATE_PROPERTY_OFFSET \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_SPARSE_DATA \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_RPC_WRAPPERS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_INCLASS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_PRIVATE_PROPERTY_OFFSET \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_SPARSE_DATA \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_INCLASS_NO_PURE_DECLS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<class UBackendLast>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
