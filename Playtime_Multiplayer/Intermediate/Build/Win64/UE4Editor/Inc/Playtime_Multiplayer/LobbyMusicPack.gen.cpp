// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/LobbyMusicPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyMusicPack() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_ULobbyMusicPack_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_ULobbyMusicPack();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_USoundPack();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void ULobbyMusicPack::StaticRegisterNativesULobbyMusicPack()
	{
	}
	UClass* Z_Construct_UClass_ULobbyMusicPack_NoRegister()
	{
		return ULobbyMusicPack::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyMusicPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyMusicPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundPack,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyMusicPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyMusicPack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LobbyMusicPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyMusicPack_Statics::NewProp_LobbyMusic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyMusicPack" },
		{ "ModuleRelativePath", "LobbyMusicPack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyMusicPack_Statics::NewProp_LobbyMusic = { "LobbyMusic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyMusicPack, LobbyMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULobbyMusicPack_Statics::NewProp_LobbyMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMusicPack_Statics::NewProp_LobbyMusic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyMusicPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyMusicPack_Statics::NewProp_LobbyMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyMusicPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyMusicPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyMusicPack_Statics::ClassParams = {
		&ULobbyMusicPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULobbyMusicPack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMusicPack_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyMusicPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyMusicPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyMusicPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyMusicPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyMusicPack, 3396622971);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<ULobbyMusicPack>()
	{
		return ULobbyMusicPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyMusicPack(Z_Construct_UClass_ULobbyMusicPack, &ULobbyMusicPack::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("ULobbyMusicPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyMusicPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
