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
	PLAYTIME_MULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBackendLast_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBackendLast();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics
	{
		struct _Script_Playtime_Multiplayer_eventOnSupabaseCallback_Parms
		{
			UVaRestJsonObject* JsonData;
			FString Message;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Playtime_Multiplayer_eventOnSupabaseCallback_Parms, JsonData), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Playtime_Multiplayer_eventOnSupabaseCallback_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_JsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???????? ? ???????????: ?????????? ??? JSON ?????? ? ?????? ????????? (???? ?????)\n" },
		{ "ModuleRelativePath", "BackendLast.h" },
		{ "ToolTip", "???????? ? ???????????: ?????????? ??? JSON ?????? ? ?????? ????????? (???? ?????)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer, nullptr, "OnSupabaseCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_Playtime_Multiplayer_eventOnSupabaseCallback_Parms), Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBackendLast::execOnWebRequestFailed)
	{
		P_GET_OBJECT(UVaRestRequestJSON,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWebRequestFailed(Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackendLast::execOnWebRequestCompleted)
	{
		P_GET_OBJECT(UVaRestRequestJSON,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWebRequestCompleted(Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackendLast::execSendRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRequest(Z_Param_FunctionName,Z_Param_Parameters);
		P_NATIVE_END;
	}
	void UBackendLast::StaticRegisterNativesUBackendLast()
	{
		UClass* Class = UBackendLast::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWebRequestCompleted", &UBackendLast::execOnWebRequestCompleted },
			{ "OnWebRequestFailed", &UBackendLast::execOnWebRequestFailed },
			{ "SendRequest", &UBackendLast::execSendRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics
	{
		struct BackendLast_eventOnWebRequestCompleted_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventOnWebRequestCompleted_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ??????????? ?????? VaRest\n" },
		{ "ModuleRelativePath", "BackendLast.h" },
		{ "ToolTip", "??????????? ?????? VaRest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "OnWebRequestCompleted", nullptr, nullptr, sizeof(BackendLast_eventOnWebRequestCompleted_Parms), Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics
	{
		struct BackendLast_eventOnWebRequestFailed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventOnWebRequestFailed_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "OnWebRequestFailed", nullptr, nullptr, sizeof(BackendLast_eventOnWebRequestFailed_Parms), Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_OnWebRequestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_OnWebRequestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackendLast_SendRequest_Statics
	{
		struct BackendLast_eventSendRequest_Parms
		{
			FString FunctionName;
			UVaRestJsonObject* Parameters;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBackendLast_SendRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventSendRequest_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackendLast_SendRequest_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BackendLast_eventSendRequest_Parms, Parameters), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackendLast_SendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_SendRequest_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackendLast_SendRequest_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackendLast_SendRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Supabase|Actions" },
		{ "Comment", "// ???????? ??????? ???????\n" },
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackendLast_SendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackendLast, nullptr, "SendRequest", nullptr, nullptr, sizeof(BackendLast_eventSendRequest_Parms), Z_Construct_UFunction_UBackendLast_SendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_SendRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackendLast_SendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackendLast_SendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackendLast_SendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBackendLast_SendRequest_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackendLast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackendLast_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackendLast_OnWebRequestCompleted, "OnWebRequestCompleted" }, // 3571409367
		{ &Z_Construct_UFunction_UBackendLast_OnWebRequestFailed, "OnWebRequestFailed" }, // 3843783790
		{ &Z_Construct_UFunction_UBackendLast_SendRequest, "SendRequest" }, // 2110863607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BackendLast.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "Supabase|Events" },
		{ "Comment", "// ??????? ??? ?????????\n" },
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackendLast, OnSuccess), Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Category", "Supabase|Events" },
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBackendLast, OnFailure), Z_Construct_UDelegateFunction_Playtime_Multiplayer_OnSupabaseCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackendLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackendLast_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackendLast_Statics::NewProp_OnFailure,
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
	IMPLEMENT_CLASS(UBackendLast, 196638066);
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
