// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ERewardableActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERewardableActions() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ERewardableActions();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ERewardableActions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ERewardableActions, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ERewardableActions"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ERewardableActions>()
	{
		return ERewardableActions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERewardableActions(ERewardableActions_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ERewardableActions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ERewardableActions_Hash() { return 2588453698U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ERewardableActions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERewardableActions"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ERewardableActions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERewardableActions::PuzzleCompleted", (int64)ERewardableActions::PuzzleCompleted },
				{ "ERewardableActions::PlayersRevived", (int64)ERewardableActions::PlayersRevived },
				{ "ERewardableActions::PlayersExtracted", (int64)ERewardableActions::PlayersExtracted },
				{ "ERewardableActions::ToyPartCarried", (int64)ERewardableActions::ToyPartCarried },
				{ "ERewardableActions::ToyPartDeposited", (int64)ERewardableActions::ToyPartDeposited },
				{ "ERewardableActions::TimeSurvived", (int64)ERewardableActions::TimeSurvived },
				{ "ERewardableActions::EscapedOnTrain", (int64)ERewardableActions::EscapedOnTrain },
				{ "ERewardableActions::TeamWinStatus_1", (int64)ERewardableActions::TeamWinStatus_1 },
				{ "ERewardableActions::TeamWinStatus_2", (int64)ERewardableActions::TeamWinStatus_2 },
				{ "ERewardableActions::TeamWinStatus_3", (int64)ERewardableActions::TeamWinStatus_3 },
				{ "ERewardableActions::PlayersDowned", (int64)ERewardableActions::PlayersDowned },
				{ "ERewardableActions::PlayersDeposited", (int64)ERewardableActions::PlayersDeposited },
				{ "ERewardableActions::KillsDCs", (int64)ERewardableActions::KillsDCs },
				{ "ERewardableActions::ToyPartsRemaining", (int64)ERewardableActions::ToyPartsRemaining },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EscapedOnTrain.Name", "ERewardableActions::EscapedOnTrain" },
				{ "KillsDCs.Name", "ERewardableActions::KillsDCs" },
				{ "ModuleRelativePath", "ERewardableActions.h" },
				{ "PlayersDeposited.Name", "ERewardableActions::PlayersDeposited" },
				{ "PlayersDowned.Name", "ERewardableActions::PlayersDowned" },
				{ "PlayersExtracted.Name", "ERewardableActions::PlayersExtracted" },
				{ "PlayersRevived.Name", "ERewardableActions::PlayersRevived" },
				{ "PuzzleCompleted.Name", "ERewardableActions::PuzzleCompleted" },
				{ "TeamWinStatus_1.Name", "ERewardableActions::TeamWinStatus_1" },
				{ "TeamWinStatus_2.Name", "ERewardableActions::TeamWinStatus_2" },
				{ "TeamWinStatus_3.Name", "ERewardableActions::TeamWinStatus_3" },
				{ "TimeSurvived.Name", "ERewardableActions::TimeSurvived" },
				{ "ToyPartCarried.Name", "ERewardableActions::ToyPartCarried" },
				{ "ToyPartDeposited.Name", "ERewardableActions::ToyPartDeposited" },
				{ "ToyPartsRemaining.Name", "ERewardableActions::ToyPartsRemaining" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ERewardableActions",
				"ERewardableActions",
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
