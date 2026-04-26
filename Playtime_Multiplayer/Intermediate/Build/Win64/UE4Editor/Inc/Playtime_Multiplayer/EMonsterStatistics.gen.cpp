// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMonsterStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMonsterStatistics() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMonsterStatistics();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMonsterStatistics_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMonsterStatistics, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMonsterStatistics"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMonsterStatistics>()
	{
		return EMonsterStatistics_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMonsterStatistics(EMonsterStatistics_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMonsterStatistics"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMonsterStatistics_Hash() { return 158447172U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMonsterStatistics()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMonsterStatistics"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMonsterStatistics_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMonsterStatistics::Wins", (int64)EMonsterStatistics::Wins },
				{ "EMonsterStatistics::Losses", (int64)EMonsterStatistics::Losses },
				{ "EMonsterStatistics::Win_Loss_Ratio", (int64)EMonsterStatistics::Win_Loss_Ratio },
				{ "EMonsterStatistics::Downs", (int64)EMonsterStatistics::Downs },
				{ "EMonsterStatistics::Attack_Accuracy", (int64)EMonsterStatistics::Attack_Accuracy },
				{ "EMonsterStatistics::Attacks_Hit", (int64)EMonsterStatistics::Attacks_Hit },
				{ "EMonsterStatistics::Players_Put_In_Wuggy_Holes", (int64)EMonsterStatistics::Players_Put_In_Wuggy_Holes },
				{ "EMonsterStatistics::Players_Killed_By_Your_Wuggies", (int64)EMonsterStatistics::Players_Killed_By_Your_Wuggies },
				{ "EMonsterStatistics::Last", (int64)EMonsterStatistics::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack_Accuracy.Name", "EMonsterStatistics::Attack_Accuracy" },
				{ "Attacks_Hit.Name", "EMonsterStatistics::Attacks_Hit" },
				{ "BlueprintType", "true" },
				{ "Downs.Name", "EMonsterStatistics::Downs" },
				{ "Last.Name", "EMonsterStatistics::Last" },
				{ "Losses.Name", "EMonsterStatistics::Losses" },
				{ "ModuleRelativePath", "EMonsterStatistics.h" },
				{ "Players_Killed_By_Your_Wuggies.Name", "EMonsterStatistics::Players_Killed_By_Your_Wuggies" },
				{ "Players_Put_In_Wuggy_Holes.Name", "EMonsterStatistics::Players_Put_In_Wuggy_Holes" },
				{ "Win_Loss_Ratio.Name", "EMonsterStatistics::Win_Loss_Ratio" },
				{ "Wins.Name", "EMonsterStatistics::Wins" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMonsterStatistics",
				"EMonsterStatistics",
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
