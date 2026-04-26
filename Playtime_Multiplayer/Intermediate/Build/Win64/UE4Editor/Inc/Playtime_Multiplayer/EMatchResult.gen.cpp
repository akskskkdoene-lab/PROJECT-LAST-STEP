// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMatchResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMatchResult() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMatchResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMatchResult"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMatchResult>()
	{
		return EMatchResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMatchResult(EMatchResult_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMatchResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult_Hash() { return 2318678886U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMatchResult"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMatchResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMatchResult::None", (int64)EMatchResult::None },
				{ "EMatchResult::HostLeft", (int64)EMatchResult::HostLeft },
				{ "EMatchResult::MonsterLeft", (int64)EMatchResult::MonsterLeft },
				{ "EMatchResult::PlayersWon", (int64)EMatchResult::PlayersWon },
				{ "EMatchResult::MonsterWon", (int64)EMatchResult::MonsterWon },
				{ "EMatchResult::TotalSurvival", (int64)EMatchResult::TotalSurvival },
				{ "EMatchResult::Survival", (int64)EMatchResult::Survival },
				{ "EMatchResult::Massacre", (int64)EMatchResult::Massacre },
				{ "EMatchResult::TotalMassacre", (int64)EMatchResult::TotalMassacre },
				{ "EMatchResult::TimeRanOut", (int64)EMatchResult::TimeRanOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HostLeft.Name", "EMatchResult::HostLeft" },
				{ "Massacre.Name", "EMatchResult::Massacre" },
				{ "ModuleRelativePath", "EMatchResult.h" },
				{ "MonsterLeft.Name", "EMatchResult::MonsterLeft" },
				{ "MonsterWon.Name", "EMatchResult::MonsterWon" },
				{ "None.Name", "EMatchResult::None" },
				{ "PlayersWon.Name", "EMatchResult::PlayersWon" },
				{ "Survival.Name", "EMatchResult::Survival" },
				{ "TimeRanOut.Name", "EMatchResult::TimeRanOut" },
				{ "TotalMassacre.Name", "EMatchResult::TotalMassacre" },
				{ "TotalSurvival.Name", "EMatchResult::TotalSurvival" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMatchResult",
				"EMatchResult",
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
