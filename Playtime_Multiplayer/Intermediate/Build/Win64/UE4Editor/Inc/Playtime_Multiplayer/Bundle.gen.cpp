// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/Bundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBundle() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FBundle();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticRarity();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FBundle>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBundle cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FBundle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBundle, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("Bundle"), sizeof(FBundle), Get_Z_Construct_UScriptStruct_FBundle_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FBundle>()
{
	return FBundle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBundle(FBundle::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("Bundle"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFBundle
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFBundle()
	{
		UScriptStruct::DeferCppStructOps<FBundle>(FName(TEXT("Bundle")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFBundle;
	struct Z_Construct_UScriptStruct_FBundle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
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
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBundle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bundle" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBundle, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bundle" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBundle, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Price_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bundle" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBundle, Rarity), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bundle" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit_SetBit(void* Obj)
	{
		((FBundle*)Obj)->bOutfit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit = { "bOutfit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBundle), &Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundlePreviewClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bundle" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundlePreviewClass = { "BundlePreviewClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBundle, BundlePreviewClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundlePreviewClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundlePreviewClass_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent_Inner = { "BundleContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bundle" },
		{ "ModuleRelativePath", "Bundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent = { "BundleContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBundle, BundleContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_bOutfit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundlePreviewClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBundle_Statics::NewProp_BundleContent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Bundle",
		sizeof(FBundle),
		alignof(FBundle),
		Z_Construct_UScriptStruct_FBundle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBundle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Bundle"), sizeof(FBundle), Get_Z_Construct_UScriptStruct_FBundle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBundle_Hash() { return 1779002477U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
