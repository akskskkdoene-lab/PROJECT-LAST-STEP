// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/HostMigrationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostMigrationData() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UHostMigrationData_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UHostMigrationData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FSessionData();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FMatchData();
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
// End Cross Module References
	DEFINE_FUNCTION(UHostMigrationData::execClearSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHostMigrationData::execGetExpectedPlayerCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExpectedPlayerCount();
		P_NATIVE_END;
	}
	void UHostMigrationData::StaticRegisterNativesUHostMigrationData()
	{
		UClass* Class = UHostMigrationData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSaveData", &UHostMigrationData::execClearSaveData },
			{ "GetExpectedPlayerCount", &UHostMigrationData::execGetExpectedPlayerCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHostMigrationData_ClearSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHostMigrationData_ClearSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHostMigrationData_ClearSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHostMigrationData, nullptr, "ClearSaveData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHostMigrationData_ClearSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHostMigrationData_ClearSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHostMigrationData_ClearSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHostMigrationData_ClearSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics
	{
		struct HostMigrationData_eventGetExpectedPlayerCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HostMigrationData_eventGetExpectedPlayerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHostMigrationData, nullptr, "GetExpectedPlayerCount", nullptr, nullptr, sizeof(HostMigrationData_eventGetExpectedPlayerCount_Parms), Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHostMigrationData_NoRegister()
	{
		return UHostMigrationData::StaticClass();
	}
	struct Z_Construct_UClass_UHostMigrationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHostMigrationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHostMigrationData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHostMigrationData_ClearSaveData, "ClearSaveData" }, // 1622116843
		{ &Z_Construct_UFunction_UHostMigrationData_GetExpectedPlayerCount, "GetExpectedPlayerCount" }, // 347837463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHostMigrationData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HostMigrationData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MapName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationData" },
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHostMigrationData, MapName), METADATA_PARAMS(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationData" },
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHostMigrationData, PlayerCount), METADATA_PARAMS(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHostMigrationData_Statics::NewProp_SessionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationData" },
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHostMigrationData_Statics::NewProp_SessionData = { "SessionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHostMigrationData, SessionData), Z_Construct_UScriptStruct_FSessionData, METADATA_PARAMS(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_SessionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_SessionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MatchData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationData" },
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MatchData = { "MatchData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHostMigrationData, MatchData), Z_Construct_UScriptStruct_FMatchData, METADATA_PARAMS(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MatchData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MatchData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData_Inner = { "PlayerData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationData" },
		{ "ModuleRelativePath", "HostMigrationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHostMigrationData, PlayerData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHostMigrationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationData_Statics::NewProp_SessionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationData_Statics::NewProp_MatchData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHostMigrationData_Statics::NewProp_PlayerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHostMigrationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHostMigrationData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHostMigrationData_Statics::ClassParams = {
		&UHostMigrationData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHostMigrationData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHostMigrationData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHostMigrationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHostMigrationData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHostMigrationData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHostMigrationData, 891725282);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UHostMigrationData>()
	{
		return UHostMigrationData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHostMigrationData(Z_Construct_UClass_UHostMigrationData, &UHostMigrationData::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UHostMigrationData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHostMigrationData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
