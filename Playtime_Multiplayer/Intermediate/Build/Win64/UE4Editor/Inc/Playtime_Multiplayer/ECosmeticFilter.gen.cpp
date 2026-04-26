// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ECosmeticFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECosmeticFilter() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticFilter();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ECosmeticFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticFilter, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ECosmeticFilter"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ECosmeticFilter>()
	{
		return ECosmeticFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECosmeticFilter(ECosmeticFilter_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ECosmeticFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticFilter_Hash() { return 142641416U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECosmeticFilter"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECosmeticFilter::Default", (int64)ECosmeticFilter::Default },
				{ "ECosmeticFilter::Rarity", (int64)ECosmeticFilter::Rarity },
				{ "ECosmeticFilter::Alphabetical", (int64)ECosmeticFilter::Alphabetical },
				{ "ECosmeticFilter::Newest", (int64)ECosmeticFilter::Newest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alphabetical.Name", "ECosmeticFilter::Alphabetical" },
				{ "BlueprintType", "true" },
				{ "Default.Name", "ECosmeticFilter::Default" },
				{ "ModuleRelativePath", "ECosmeticFilter.h" },
				{ "Newest.Name", "ECosmeticFilter::Newest" },
				{ "Rarity.Name", "ECosmeticFilter::Rarity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ECosmeticFilter",
				"ECosmeticFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
