// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/LoadingScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreen() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingScreen();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FLoadingScreen>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLoadingScreen cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FLoadingScreen::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FLoadingScreen_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadingScreen, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("LoadingScreen"), sizeof(FLoadingScreen), Get_Z_Construct_UScriptStruct_FLoadingScreen_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FLoadingScreen>()
{
	return FLoadingScreen::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoadingScreen(FLoadingScreen::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("LoadingScreen"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLoadingScreen
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLoadingScreen()
	{
		UScriptStruct::DeferCppStructOps<FLoadingScreen>(FName(TEXT("LoadingScreen")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFLoadingScreen;
	struct Z_Construct_UScriptStruct_FLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingScreenImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreen_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LoadingScreen.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadingScreen>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreen" },
		{ "ModuleRelativePath", "LoadingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreen, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_LoadingScreenImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreen" },
		{ "ModuleRelativePath", "LoadingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_LoadingScreenImage = { "LoadingScreenImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadingScreen, LoadingScreenImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_LoadingScreenImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_LoadingScreenImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadingScreen_Statics::NewProp_LoadingScreenImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadingScreen_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LoadingScreen",
		sizeof(FLoadingScreen),
		alignof(FLoadingScreen),
		Z_Construct_UScriptStruct_FLoadingScreen_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreen_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadingScreen_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadingScreen_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadingScreen()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoadingScreen_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoadingScreen"), sizeof(FLoadingScreen), Get_Z_Construct_UScriptStruct_FLoadingScreen_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoadingScreen_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoadingScreen_Hash() { return 895615149U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
