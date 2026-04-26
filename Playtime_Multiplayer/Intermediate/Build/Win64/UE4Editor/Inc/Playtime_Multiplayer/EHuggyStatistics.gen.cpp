// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EHuggyStatistics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHuggyStatistics() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHuggyStatistics();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EHuggyStatistics_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EHuggyStatistics, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EHuggyStatistics"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHuggyStatistics>()
	{
		return EHuggyStatistics_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHuggyStatistics(EHuggyStatistics_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EHuggyStatistics"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EHuggyStatistics_Hash() { return 4062264032U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHuggyStatistics()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHuggyStatistics"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EHuggyStatistics_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHuggyStatistics::Wins", (int64)EHuggyStatistics::Wins },
				{ "EHuggyStatistics::Losses", (int64)EHuggyStatistics::Losses },
				{ "EHuggyStatistics::Win_Loss_Ratio", (int64)EHuggyStatistics::Win_Loss_Ratio },
				{ "EHuggyStatistics::Downs", (int64)EHuggyStatistics::Downs },
				{ "EHuggyStatistics::Attack_Accuracy", (int64)EHuggyStatistics::Attack_Accuracy },
				{ "EHuggyStatistics::Attacks_Hit", (int64)EHuggyStatistics::Attacks_Hit },
				{ "EHuggyStatistics::Distance_Charged", (int64)EHuggyStatistics::Distance_Charged },
				{ "EHuggyStatistics::Players_Hugged", (int64)EHuggyStatistics::Players_Hugged },
				{ "EHuggyStatistics::Baby_Huggies_Placed", (int64)EHuggyStatistics::Baby_Huggies_Placed },
				{ "EHuggyStatistics::Baby_Huggies_Triggered", (int64)EHuggyStatistics::Baby_Huggies_Triggered },
				{ "EHuggyStatistics::Left_Hand_Punches", (int64)EHuggyStatistics::Left_Hand_Punches },
				{ "EHuggyStatistics::Right_Hand_Punches", (int64)EHuggyStatistics::Right_Hand_Punches },
				{ "EHuggyStatistics::Num_Times_Jumped", (int64)EHuggyStatistics::Num_Times_Jumped },
				{ "EHuggyStatistics::Players_Put_In_Wuggy_Holes", (int64)EHuggyStatistics::Players_Put_In_Wuggy_Holes },
				{ "EHuggyStatistics::Players_Killed_By_Your_Wuggies", (int64)EHuggyStatistics::Players_Killed_By_Your_Wuggies },
				{ "EHuggyStatistics::Last", (int64)EHuggyStatistics::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack_Accuracy.Name", "EHuggyStatistics::Attack_Accuracy" },
				{ "Attacks_Hit.Name", "EHuggyStatistics::Attacks_Hit" },
				{ "Baby_Huggies_Placed.Name", "EHuggyStatistics::Baby_Huggies_Placed" },
				{ "Baby_Huggies_Triggered.Name", "EHuggyStatistics::Baby_Huggies_Triggered" },
				{ "BlueprintType", "true" },
				{ "Distance_Charged.Name", "EHuggyStatistics::Distance_Charged" },
				{ "Downs.Name", "EHuggyStatistics::Downs" },
				{ "Last.Name", "EHuggyStatistics::Last" },
				{ "Left_Hand_Punches.Name", "EHuggyStatistics::Left_Hand_Punches" },
				{ "Losses.Name", "EHuggyStatistics::Losses" },
				{ "ModuleRelativePath", "EHuggyStatistics.h" },
				{ "Num_Times_Jumped.Name", "EHuggyStatistics::Num_Times_Jumped" },
				{ "Players_Hugged.Name", "EHuggyStatistics::Players_Hugged" },
				{ "Players_Killed_By_Your_Wuggies.Name", "EHuggyStatistics::Players_Killed_By_Your_Wuggies" },
				{ "Players_Put_In_Wuggy_Holes.Name", "EHuggyStatistics::Players_Put_In_Wuggy_Holes" },
				{ "Right_Hand_Punches.Name", "EHuggyStatistics::Right_Hand_Punches" },
				{ "Win_Loss_Ratio.Name", "EHuggyStatistics::Win_Loss_Ratio" },
				{ "Wins.Name", "EHuggyStatistics::Wins" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EHuggyStatistics",
				"EHuggyStatistics",
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
