// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/SoundPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundPack() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_USoundPack_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_USoundPack();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	void USoundPack::StaticRegisterNativesUSoundPack()
	{
	}
	UClass* Z_Construct_UClass_USoundPack_NoRegister()
	{
		return USoundPack::StaticClass();
	}
	struct Z_Construct_UClass_USoundPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundPack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SoundPack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundPack_Statics::ClassParams = {
		&USoundPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundPack, 2121013756);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<USoundPack>()
	{
		return USoundPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundPack(Z_Construct_UClass_USoundPack, &USoundPack::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("USoundPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
