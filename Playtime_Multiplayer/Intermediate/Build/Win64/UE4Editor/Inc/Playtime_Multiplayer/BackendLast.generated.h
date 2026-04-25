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
class UObject;
class UBackendLast;
#ifdef PLAYTIME_MULTIPLAYER_BackendLast_generated_h
#error "BackendLast.generated.h already included, missing '#pragma once' in BackendLast.h"
#endif
#define PLAYTIME_MULTIPLAYER_BackendLast_generated_h

#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_13_DELEGATE \
struct _Script_Playtime_Multiplayer_eventOnSupabaseResponse_Parms \
{ \
	UVaRestJsonObject* Result; \
}; \
static inline void FOnSupabaseResponse_DelegateWrapper(const FMulticastScriptDelegate& OnSupabaseResponse, UVaRestJsonObject* Result) \
{ \
	_Script_Playtime_Multiplayer_eventOnSupabaseResponse_Parms Parms; \
	Parms.Result=Result; \
	OnSupabaseResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_SPARSE_DATA
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleRequestFail); \
	DECLARE_FUNCTION(execHandleRequestComplete); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execGetPlayerData);


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleRequestFail); \
	DECLARE_FUNCTION(execHandleRequestComplete); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execGetPlayerData);


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackendLast(); \
	friend struct Z_Construct_UClass_UBackendLast_Statics; \
public: \
	DECLARE_CLASS(UBackendLast, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playtime_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(UBackendLast)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBackendLast(); \
	friend struct Z_Construct_UClass_UBackendLast_Statics; \
public: \
	DECLARE_CLASS(UBackendLast, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Playtime_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(UBackendLast)


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_STANDARD_CONSTRUCTORS \
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


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_ENHANCED_CONSTRUCTORS \
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


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldContextObject() { return STRUCT_OFFSET(UBackendLast, WorldContextObject); } \
	FORCEINLINE static uint32 __PPO__ActiveRequest() { return STRUCT_OFFSET(UBackendLast, ActiveRequest); }


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_22_PROLOG
#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_PRIVATE_PROPERTY_OFFSET \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_SPARSE_DATA \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_RPC_WRAPPERS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_INCLASS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_PRIVATE_PROPERTY_OFFSET \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_SPARSE_DATA \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_INCLASS_NO_PURE_DECLS \
	Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<class UBackendLast>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Playtime_Multiplayer_Source_Playtime_Multiplayer_BackendLast_h


#define FOREACH_ENUM_EBACKENDLASTREQUESTTYPE(op) \
	op(EBackendLastRequestType::GetPlayerData) \
	op(EBackendLastRequestType::PurchaseItem) 

enum class EBackendLastRequestType : uint8;
template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EBackendLastRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
