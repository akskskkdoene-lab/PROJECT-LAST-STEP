// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMonsterSecondaryObjectives.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMonsterSecondaryObjectives() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMonsterSecondaryObjectives();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMonsterSecondaryObjectives_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMonsterSecondaryObjectives, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMonsterSecondaryObjectives"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMonsterSecondaryObjectives>()
	{
		return EMonsterSecondaryObjectives_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMonsterSecondaryObjectives(EMonsterSecondaryObjectives_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMonsterSecondaryObjectives"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMonsterSecondaryObjectives_Hash() { return 1163240036U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMonsterSecondaryObjectives()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMonsterSecondaryObjectives"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMonsterSecondaryObjectives_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FindSurvivor", (int64)FindSurvivor },
				{ "DepositSurvivor", (int64)DepositSurvivor },
				{ "NoneMonster", (int64)NoneMonster },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DepositSurvivor.Name", "DepositSurvivor" },
				{ "FindSurvivor.Name", "FindSurvivor" },
				{ "ModuleRelativePath", "EMonsterSecondaryObjectives.h" },
				{ "NoneMonster.Name", "NoneMonster" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMonsterSecondaryObjectives",
				"EMonsterSecondaryObjectives",
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
