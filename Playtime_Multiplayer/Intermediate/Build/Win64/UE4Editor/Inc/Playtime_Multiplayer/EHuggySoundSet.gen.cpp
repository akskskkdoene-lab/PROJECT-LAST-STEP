// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EHuggySoundSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHuggySoundSet() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHuggySoundSet();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EHuggySoundSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EHuggySoundSet, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EHuggySoundSet"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHuggySoundSet>()
	{
		return EHuggySoundSet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHuggySoundSet(EHuggySoundSet_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EHuggySoundSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EHuggySoundSet_Hash() { return 3753413278U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHuggySoundSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHuggySoundSet"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EHuggySoundSet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHuggySoundSet::Footstep", (int64)EHuggySoundSet::Footstep },
				{ "EHuggySoundSet::Crouch", (int64)EHuggySoundSet::Crouch },
				{ "EHuggySoundSet::Punch", (int64)EHuggySoundSet::Punch },
				{ "EHuggySoundSet::PunchHit", (int64)EHuggySoundSet::PunchHit },
				{ "EHuggySoundSet::ChargeAttack", (int64)EHuggySoundSet::ChargeAttack },
				{ "EHuggySoundSet::ChargeAttackHit", (int64)EHuggySoundSet::ChargeAttackHit },
				{ "EHuggySoundSet::PlaceMiniHuggy", (int64)EHuggySoundSet::PlaceMiniHuggy },
				{ "EHuggySoundSet::Jumpscare", (int64)EHuggySoundSet::Jumpscare },
				{ "EHuggySoundSet::SelectScreen", (int64)EHuggySoundSet::SelectScreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChargeAttack.Name", "EHuggySoundSet::ChargeAttack" },
				{ "ChargeAttackHit.Name", "EHuggySoundSet::ChargeAttackHit" },
				{ "Crouch.Name", "EHuggySoundSet::Crouch" },
				{ "Footstep.Name", "EHuggySoundSet::Footstep" },
				{ "Jumpscare.Name", "EHuggySoundSet::Jumpscare" },
				{ "ModuleRelativePath", "EHuggySoundSet.h" },
				{ "PlaceMiniHuggy.Name", "EHuggySoundSet::PlaceMiniHuggy" },
				{ "Punch.Name", "EHuggySoundSet::Punch" },
				{ "PunchHit.Name", "EHuggySoundSet::PunchHit" },
				{ "SelectScreen.Name", "EHuggySoundSet::SelectScreen" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EHuggySoundSet",
				"EHuggySoundSet",
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
