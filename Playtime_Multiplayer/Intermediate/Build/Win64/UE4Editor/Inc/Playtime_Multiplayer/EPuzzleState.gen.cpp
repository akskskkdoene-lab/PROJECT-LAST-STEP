// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EPuzzleState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPuzzleState() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPuzzleState();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EPuzzleState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EPuzzleState, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EPuzzleState"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EPuzzleState>()
	{
		return EPuzzleState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPuzzleState(EPuzzleState_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EPuzzleState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EPuzzleState_Hash() { return 2194987892U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPuzzleState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPuzzleState"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EPuzzleState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPuzzleState::Idle", (int64)EPuzzleState::Idle },
				{ "EPuzzleState::InProgress", (int64)EPuzzleState::InProgress },
				{ "EPuzzleState::IncrementProgress", (int64)EPuzzleState::IncrementProgress },
				{ "EPuzzleState::Failed", (int64)EPuzzleState::Failed },
				{ "EPuzzleState::BoobyTrapped", (int64)EPuzzleState::BoobyTrapped },
				{ "EPuzzleState::Shutdown", (int64)EPuzzleState::Shutdown },
				{ "EPuzzleState::Solved", (int64)EPuzzleState::Solved },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BoobyTrapped.Name", "EPuzzleState::BoobyTrapped" },
				{ "Failed.Name", "EPuzzleState::Failed" },
				{ "Idle.Name", "EPuzzleState::Idle" },
				{ "IncrementProgress.Name", "EPuzzleState::IncrementProgress" },
				{ "InProgress.Name", "EPuzzleState::InProgress" },
				{ "ModuleRelativePath", "EPuzzleState.h" },
				{ "Shutdown.Name", "EPuzzleState::Shutdown" },
				{ "Solved.Name", "EPuzzleState::Solved" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EPuzzleState",
				"EPuzzleState",
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
