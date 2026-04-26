// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EBoxySoundSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBoxySoundSet() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EBoxySoundSet();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EBoxySoundSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EBoxySoundSet, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EBoxySoundSet"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EBoxySoundSet>()
	{
		return EBoxySoundSet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoxySoundSet(EBoxySoundSet_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EBoxySoundSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EBoxySoundSet_Hash() { return 1406979179U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EBoxySoundSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoxySoundSet"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EBoxySoundSet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoxySoundSet::Footstep", (int64)EBoxySoundSet::Footstep },
				{ "EBoxySoundSet::Crouch", (int64)EBoxySoundSet::Crouch },
				{ "EBoxySoundSet::Punch", (int64)EBoxySoundSet::Punch },
				{ "EBoxySoundSet::PunchHit", (int64)EBoxySoundSet::PunchHit },
				{ "EBoxySoundSet::ChargingJump", (int64)EBoxySoundSet::ChargingJump },
				{ "EBoxySoundSet::ReleasedCharge", (int64)EBoxySoundSet::ReleasedCharge },
				{ "EBoxySoundSet::Land", (int64)EBoxySoundSet::Land },
				{ "EBoxySoundSet::Jump", (int64)EBoxySoundSet::Jump },
				{ "EBoxySoundSet::GrabShoot", (int64)EBoxySoundSet::GrabShoot },
				{ "EBoxySoundSet::GrabGrab", (int64)EBoxySoundSet::GrabGrab },
				{ "EBoxySoundSet::Jumpscare", (int64)EBoxySoundSet::Jumpscare },
				{ "EBoxySoundSet::SelectScreen", (int64)EBoxySoundSet::SelectScreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChargingJump.Name", "EBoxySoundSet::ChargingJump" },
				{ "Crouch.Name", "EBoxySoundSet::Crouch" },
				{ "Footstep.Name", "EBoxySoundSet::Footstep" },
				{ "GrabGrab.Name", "EBoxySoundSet::GrabGrab" },
				{ "GrabShoot.Name", "EBoxySoundSet::GrabShoot" },
				{ "Jump.Name", "EBoxySoundSet::Jump" },
				{ "Jumpscare.Name", "EBoxySoundSet::Jumpscare" },
				{ "Land.Name", "EBoxySoundSet::Land" },
				{ "ModuleRelativePath", "EBoxySoundSet.h" },
				{ "Punch.Name", "EBoxySoundSet::Punch" },
				{ "PunchHit.Name", "EBoxySoundSet::PunchHit" },
				{ "ReleasedCharge.Name", "EBoxySoundSet::ReleasedCharge" },
				{ "SelectScreen.Name", "EBoxySoundSet::SelectScreen" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EBoxySoundSet",
				"EBoxySoundSet",
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
