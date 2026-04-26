// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/LevelStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStruct() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStruct();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FLevelStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLevelStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FLevelStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FLevelStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStruct, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("LevelStruct"), sizeof(FLevelStruct), Get_Z_Construct_UScriptStruct_FLevelStruct_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FLevelStruct>()
{
	return FLevelStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelStruct(FLevelStruct::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("LevelStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLevelStruct
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLevelStruct()
	{
		UScriptStruct::DeferCppStructOps<FLevelStruct>(FName(TEXT("LevelStruct")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLevelStruct;
	struct Z_Construct_UScriptStruct_FLevelStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CommonName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInHostScreen_MetaData[];
#endif
		static void NewProp_bShowInHostScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInHostScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevOnly_MetaData[];
#endif
		static void NewProp_bDevOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStruct, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_CommonName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_CommonName = { "CommonName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStruct, CommonName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_CommonName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_CommonName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStruct, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStruct, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelStruct, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen_SetBit(void* Obj)
	{
		((FLevelStruct*)Obj)->bShowInHostScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen = { "bShowInHostScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelStruct), &Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStruct" },
		{ "ModuleRelativePath", "LevelStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly_SetBit(void* Obj)
	{
		((FLevelStruct*)Obj)->bDevOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly = { "bDevOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelStruct), &Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_CommonName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bShowInHostScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelStruct_Statics::NewProp_bDevOnly,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LevelStruct",
		sizeof(FLevelStruct),
		alignof(FLevelStruct),
		Z_Construct_UScriptStruct_FLevelStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelStruct"), sizeof(FLevelStruct), Get_Z_Construct_UScriptStruct_FLevelStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelStruct_Hash() { return 238583544U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
