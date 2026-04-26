// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EHandState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHandState() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHandState();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EHandState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EHandState, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EHandState"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHandState>()
	{
		return EHandState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandState(EHandState_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EHandState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EHandState_Hash() { return 680013000U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHandState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandState"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EHandState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandState::Idle", (int64)EHandState::Idle },
				{ "EHandState::Extending", (int64)EHandState::Extending },
				{ "EHandState::Grabbed", (int64)EHandState::Grabbed },
				{ "EHandState::Pulling", (int64)EHandState::Pulling },
				{ "EHandState::Retracting", (int64)EHandState::Retracting },
				{ "EHandState::PausingBeforeRetraction", (int64)EHandState::PausingBeforeRetraction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Extending.Name", "EHandState::Extending" },
				{ "Grabbed.Name", "EHandState::Grabbed" },
				{ "Idle.Name", "EHandState::Idle" },
				{ "ModuleRelativePath", "EHandState.h" },
				{ "PausingBeforeRetraction.Name", "EHandState::PausingBeforeRetraction" },
				{ "Pulling.Name", "EHandState::Pulling" },
				{ "Retracting.Name", "EHandState::Retracting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EHandState",
				"EHandState",
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
