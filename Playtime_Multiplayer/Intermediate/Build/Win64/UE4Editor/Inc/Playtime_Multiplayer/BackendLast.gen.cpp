// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/BackendLast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackendLast() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EBackendLastRequestType();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBackendLast_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBackendLast();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics
	{
		struct _Script_Playtime_Multiplayer_eventOnSupabaseResponse_Parms
		{
			UVaRestJsonObject* Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Playtime_Multiplayer_eventOnSupabaseResponse_Parms, Result), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer, nullptr, "OnSupabaseResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_Playtime_Multiplayer_eventOnSupabaseResponse_Parms), Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EBackendLastRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EBackendLastRequestType, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EBackendLastRequestType"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EBackendLastRequestType>()
	{
		return EBackendLastRequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBackendLastRequestType(EBackendLastRequestType_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EBackendLastRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EBackendLastRequestType_Hash() { return 1383697167U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EBackendLastRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBackendLastRequestType"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EBackendLastRequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBackendLastRequestType::GetPlayerData", (int64)EBackendLastRequestType::GetPlayerData },
				{ "EBackendLastRequestType::PurchaseItem", (int64)EBackendLastRequestType::PurchaseItem },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GetPlayerData.Name", "EBackendLastRequestType::GetPlayerData" },
				{ "ModuleRelativePath", "BackendLast.h" },
				{ "PurchaseItem.Name", "EBackendLastRequestType::PurchaseItem" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EBackendLastRequestType",
				"EBackendLastRequestType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UBackendLast::execHandleRequestFail)
	{
		P_GET_OBJECT(UVaRestRequestJSON,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRequestFail(Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackendLast::execHandleRequestComplete)
	{
		P_GET_OBJECT(UVaRestRequestJSON,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRequestComplete(Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackendLast::execPurchaseItem)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Price);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBackendLast**)Z_Param__Result=UBackendLast::PurchaseItem(Z_Param_WorldContextObject,Z_Param_InSteamID,Z_Param_CurrencyType,Z_Param_ItemID,Z_Param_ItemName,Z_Param_Price);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackendLast::execGetPlayerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBackendLast**)Z_Param__Result=UBackendLast::GetPlayerData(Z_Param_WorldContextObject,Z_Param_InSteamID);
		P_NATIVE_END;
	}
	void UBackendLast::StaticRegisterNativesUBackendLast()
	{
		UClass* Class = UBackendLast::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerData", &UBackendLast::execGetPlayerData },
			{ "HandleRequestComplete", &UBackendLast::execHandleRequestComplete },
			{ "HandleRequestFail", &UBackendLast::execHandleRequestFail },
			{ "PurchaseItem", &UBackendLast::execPurchaseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics
	{
		struct BackendLast_eventGetPlayerData_Parms
		{
			UObject* WorldContextObject;
			FString InSteamID;
			UBackendLast* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSteamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventGetPlayerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::NewProp_InSteamID = { "InSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventGetPlayerData_Parms, InSteamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UClass_UBackendLast_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::NewProp_InSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BackendLast|Supabase" },
		{ "Comment", "// ??????? ??????? ???????? SteamID ???????? ? ????\n" },
		{ "ModuleRelativePath", "BackendLast.h" },
		{ "ToolTip", "??????? ??????? ???????? SteamID ???????? ? ????" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "GetPlayerData", nullptr, nullptr, sizeof(BackendLast_eventGetPlayerData_Parms), Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics
	{
		struct BackendLast_eventHandleRequestComplete_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventHandleRequestComplete_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "HandleRequestComplete", nullptr, nullptr, sizeof(BackendLast_eventHandleRequestComplete_Parms), Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_HandleRequestComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_HandleRequestComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics
	{
		struct BackendLast_eventHandleRequestFail_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventHandleRequestFail_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "HandleRequestFail", nullptr, nullptr, sizeof(BackendLast_eventHandleRequestFail_Parms), Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_HandleRequestFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_HandleRequestFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics
	{
		struct BackendLast_eventPurchaseItem_Parms
		{
			UObject* WorldContextObject;
			FString InSteamID;
			FString CurrencyType;
			int32 ItemID;
			FString ItemName;
			int32 Price;
			UBackendLast* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSteamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_InSteamID = { "InSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, InSteamID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, CurrencyType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, Price), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventPurchaseItem_Parms, ReturnValue), Z_Construct_UClass_UBackendLast_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_InSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "BackendLast|Supabase" },
		{ "ModuleRelativePath", "BackendLast.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "PurchaseItem", nullptr, nullptr, sizeof(BackendLast_eventPurchaseItem_Parms), Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_PurchaseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_PurchaseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBackendLast_NoRegister()
	{
		return UBackendLast::StaticClass();
	}
	struct Z_Construct_UClass_UBackendLast_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackendLast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackendLast_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackendLast_GetPlayerData, "GetPlayerData" }, // 1619121674
		{ &Z_Construct_UFunction_UBackendLast_HandleRequestComplete, "HandleRequestComplete" }, // 576450911
		{ &Z_Construct_UFunction_UBackendLast_HandleRequestFail, "HandleRequestFail" }, // 3096118125
		{ &Z_Construct_UFunction_UBackendLast_PurchaseItem, "PurchaseItem" }, // 3086584733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BackendLast.h" },
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackendLast, OnSuccess), Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackendLast, OnFailure), Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackendLast_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackendLast, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::NewProp_ActiveRequest_MetaData[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackendLast_Statics::NewProp_ActiveRequest = { "ActiveRequest", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackendLast, ActiveRequest), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::NewProp_ActiveRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::NewProp_ActiveRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackendLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackendLast_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackendLast_Statics::NewProp_ActiveRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackendLast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackendLast>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBackendLast_Statics::ClassParams = {
		&UBackendLast::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBackendLast_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackendLast()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBackendLast_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBackendLast, 866329396);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UBackendLast>()
	{
		return UBackendLast::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBackendLast(Z_Construct_UClass_UBackendLast, &UBackendLast::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UBackendLast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackendLast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
