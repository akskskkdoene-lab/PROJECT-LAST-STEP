// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMommySoundSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMommySoundSet() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMommySoundSet();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMommySoundSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMommySoundSet, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMommySoundSet"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMommySoundSet>()
	{
		return EMommySoundSet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMommySoundSet(EMommySoundSet_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMommySoundSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMommySoundSet_Hash() { return 2983026695U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMommySoundSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMommySoundSet"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMommySoundSet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMommySoundSet::Footstep", (int64)EMommySoundSet::Footstep },
				{ "EMommySoundSet::Crouch", (int64)EMommySoundSet::Crouch },
				{ "EMommySoundSet::Punch", (int64)EMommySoundSet::Punch },
				{ "EMommySoundSet::PunchHit", (int64)EMommySoundSet::PunchHit },
				{ "EMommySoundSet::WebsShooting", (int64)EMommySoundSet::WebsShooting },
				{ "EMommySoundSet::GrappleShot", (int64)EMommySoundSet::GrappleShot },
				{ "EMommySoundSet::GrappleStretch", (int64)EMommySoundSet::GrappleStretch },
				{ "EMommySoundSet::GrappleGrab", (int64)EMommySoundSet::GrappleGrab },
				{ "EMommySoundSet::Jumpscare", (int64)EMommySoundSet::Jumpscare },
				{ "EMommySoundSet::Spotter", (int64)EMommySoundSet::Spotter },
				{ "EMommySoundSet::SelectScreen", (int64)EMommySoundSet::SelectScreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Crouch.Name", "EMommySoundSet::Crouch" },
				{ "Footstep.Name", "EMommySoundSet::Footstep" },
				{ "GrappleGrab.Name", "EMommySoundSet::GrappleGrab" },
				{ "GrappleShot.Name", "EMommySoundSet::GrappleShot" },
				{ "GrappleStretch.Name", "EMommySoundSet::GrappleStretch" },
				{ "Jumpscare.Name", "EMommySoundSet::Jumpscare" },
				{ "ModuleRelativePath", "EMommySoundSet.h" },
				{ "Punch.Name", "EMommySoundSet::Punch" },
				{ "PunchHit.Name", "EMommySoundSet::PunchHit" },
				{ "SelectScreen.Name", "EMommySoundSet::SelectScreen" },
				{ "Spotter.Name", "EMommySoundSet::Spotter" },
				{ "WebsShooting.Name", "EMommySoundSet::WebsShooting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMommySoundSet",
				"EMommySoundSet",
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
