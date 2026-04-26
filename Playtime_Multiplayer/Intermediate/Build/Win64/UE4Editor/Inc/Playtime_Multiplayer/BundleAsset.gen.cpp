// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/BundleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBundleAsset() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBundleAsset_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBundleAsset();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBundleAsset::StaticRegisterNativesUBundleAsset()
	{
	}
	UClass* Z_Construct_UClass_UBundleAsset_NoRegister()
	{
		return UBundleAsset::StaticClass();
	}
	struct Z_Construct_UClass_UBundleAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutfit_MetaData[];
#endif
		static void NewProp_bOutfit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutfit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundlePreviewClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BundlePreviewClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BundleContent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BundleContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBundleAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBundleAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BundleAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BundleAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BundleAsset" },
		{ "ModuleRelativePath", "BundleAsset.h" },
	};
#endif
	void Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit_SetBit(void* Obj)
	{
		((UBundleAsset*)Obj)->bOutfit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit = { "bOutfit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBundleAsset), &Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundlePreviewClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BundleAsset" },
		{ "ModuleRelativePath", "BundleAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundlePreviewClass = { "BundlePreviewClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBundleAsset, BundlePreviewClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundlePreviewClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundlePreviewClass_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent_Inner = { "BundleContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BundleAsset" },
		{ "ModuleRelativePath", "BundleAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent = { "BundleContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBundleAsset, BundleContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBundleAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBundleAsset_Statics::NewProp_bOutfit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundlePreviewClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBundleAsset_Statics::NewProp_BundleContent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBundleAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBundleAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBundleAsset_Statics::ClassParams = {
		&UBundleAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBundleAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBundleAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBundleAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBundleAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBundleAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBundleAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBundleAsset, 4240385453);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UBundleAsset>()
	{
		return UBundleAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBundleAsset(Z_Construct_UClass_UBundleAsset, &UBundleAsset::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UBundleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBundleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
