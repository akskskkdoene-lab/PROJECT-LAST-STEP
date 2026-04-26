// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EStatisticCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStatisticCategory() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EStatisticCategory();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EStatisticCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EStatisticCategory, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EStatisticCategory"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EStatisticCategory>()
	{
		return EStatisticCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticCategory(EStatisticCategory_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EStatisticCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EStatisticCategory_Hash() { return 2250177124U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EStatisticCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticCategory"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EStatisticCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticCategory::General", (int64)EStatisticCategory::General },
				{ "EStatisticCategory::Player", (int64)EStatisticCategory::Player },
				{ "EStatisticCategory::Monster", (int64)EStatisticCategory::Monster },
				{ "EStatisticCategory::Huggy", (int64)EStatisticCategory::Huggy },
				{ "EStatisticCategory::Mommy", (int64)EStatisticCategory::Mommy },
				{ "EStatisticCategory::Boxy", (int64)EStatisticCategory::Boxy },
				{ "EStatisticCategory::Random", (int64)EStatisticCategory::Random },
				{ "EStatisticCategory::Last", (int64)EStatisticCategory::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boxy.Name", "EStatisticCategory::Boxy" },
				{ "General.Name", "EStatisticCategory::General" },
				{ "Huggy.Name", "EStatisticCategory::Huggy" },
				{ "Last.Name", "EStatisticCategory::Last" },
				{ "ModuleRelativePath", "EStatisticCategory.h" },
				{ "Mommy.Name", "EStatisticCategory::Mommy" },
				{ "Monster.Name", "EStatisticCategory::Monster" },
				{ "Player.Name", "EStatisticCategory::Player" },
				{ "Random.Name", "EStatisticCategory::Random" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EStatisticCategory",
				"EStatisticCategory",
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
