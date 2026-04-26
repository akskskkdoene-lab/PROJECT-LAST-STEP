// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/LoadingScreenAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenAsset() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_ULoadingScreenAsset_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_ULoadingScreenAsset();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ULoadingScreenAsset::StaticRegisterNativesULoadingScreenAsset()
	{
	}
	UClass* Z_Construct_UClass_ULoadingScreenAsset_NoRegister()
	{
		return ULoadingScreenAsset::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingScreenImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingScreenAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LoadingScreenAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenAsset_Statics::NewProp_LoadingScreenImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenAsset" },
		{ "ModuleRelativePath", "LoadingScreenAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULoadingScreenAsset_Statics::NewProp_LoadingScreenImage = { "LoadingScreenImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenAsset, LoadingScreenImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenAsset_Statics::NewProp_LoadingScreenImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenAsset_Statics::NewProp_LoadingScreenImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenAsset_Statics::NewProp_LoadingScreenImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenAsset_Statics::ClassParams = {
		&ULoadingScreenAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingScreenAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenAsset, 1432455937);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<ULoadingScreenAsset>()
	{
		return ULoadingScreenAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenAsset(Z_Construct_UClass_ULoadingScreenAsset, &ULoadingScreenAsset::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("ULoadingScreenAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
