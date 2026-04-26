// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ESecondaryObjectives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESecondaryObjectives() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ESecondaryObjectives();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ESecondaryObjectives_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ESecondaryObjectives, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ESecondaryObjectives"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ESecondaryObjectives>()
	{
		return ESecondaryObjectives_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESecondaryObjectives(ESecondaryObjectives_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ESecondaryObjectives"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ESecondaryObjectives_Hash() { return 2765289568U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ESecondaryObjectives()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESecondaryObjectives"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ESecondaryObjectives_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FindPuzzlePillar", (int64)FindPuzzlePillar },
				{ "SolvePuzzlePillar", (int64)SolvePuzzlePillar },
				{ "PickupToyPart", (int64)PickupToyPart },
				{ "FindToyDeposit", (int64)FindToyDeposit },
				{ "FindDeliveryPipe", (int64)FindDeliveryPipe },
				{ "PullPipeIntoPlace", (int64)PullPipeIntoPlace },
				{ "FindTrainStation", (int64)FindTrainStation },
				{ "CallTheTrain", (int64)CallTheTrain },
				{ "WaitForTrain", (int64)WaitForTrain },
				{ "None", (int64)None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CallTheTrain.Name", "CallTheTrain" },
				{ "FindDeliveryPipe.Name", "FindDeliveryPipe" },
				{ "FindPuzzlePillar.Name", "FindPuzzlePillar" },
				{ "FindToyDeposit.Name", "FindToyDeposit" },
				{ "FindTrainStation.Name", "FindTrainStation" },
				{ "ModuleRelativePath", "ESecondaryObjectives.h" },
				{ "None.Name", "None" },
				{ "PickupToyPart.Name", "PickupToyPart" },
				{ "PullPipeIntoPlace.Name", "PullPipeIntoPlace" },
				{ "SolvePuzzlePillar.Name", "SolvePuzzlePillar" },
				{ "WaitForTrain.Name", "WaitForTrain" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ESecondaryObjectives",
				"ESecondaryObjectives",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
