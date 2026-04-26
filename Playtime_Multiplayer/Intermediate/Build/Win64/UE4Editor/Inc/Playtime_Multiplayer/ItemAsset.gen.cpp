// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ItemAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAsset() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	void UItemAsset::StaticRegisterNativesUItemAsset()
	{
	}
	UClass* Z_Construct_UClass_UItemAsset_NoRegister()
	{
		return UItemAsset::StaticClass();
	}
	struct Z_Construct_UClass_UItemAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenLoaded_MetaData[];
#endif
		static void NewProp_bHasBeenLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemAsset" },
		{ "ModuleRelativePath", "ItemAsset.h" },
	};
#endif
	void Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded_SetBit(void* Obj)
	{
		((UItemAsset*)Obj)->bHasBeenLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded = { "bHasBeenLoaded", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItemAsset), &Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemAsset_Statics::NewProp_bHasBeenLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemAsset_Statics::ClassParams = {
		&UItemAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemAsset, 1098214468);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UItemAsset>()
	{
		return UItemAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemAsset(Z_Construct_UClass_UItemAsset, &UItemAsset::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UItemAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
