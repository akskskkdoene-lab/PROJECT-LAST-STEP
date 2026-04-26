// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ECosmeticOutfitSkinType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECosmeticOutfitSkinType() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ECosmeticOutfitSkinType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ECosmeticOutfitSkinType"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ECosmeticOutfitSkinType>()
	{
		return ECosmeticOutfitSkinType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECosmeticOutfitSkinType(ECosmeticOutfitSkinType_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ECosmeticOutfitSkinType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType_Hash() { return 2327611563U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECosmeticOutfitSkinType"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECosmeticOutfitSkinType::None", (int64)ECosmeticOutfitSkinType::None },
				{ "ECosmeticOutfitSkinType::HeadFull", (int64)ECosmeticOutfitSkinType::HeadFull },
				{ "ECosmeticOutfitSkinType::HeadSphereOnly", (int64)ECosmeticOutfitSkinType::HeadSphereOnly },
				{ "ECosmeticOutfitSkinType::HeadNeckOnly", (int64)ECosmeticOutfitSkinType::HeadNeckOnly },
				{ "ECosmeticOutfitSkinType::TorsoFull", (int64)ECosmeticOutfitSkinType::TorsoFull },
				{ "ECosmeticOutfitSkinType::TorsoEngineer", (int64)ECosmeticOutfitSkinType::TorsoEngineer },
				{ "ECosmeticOutfitSkinType::TorsoHandsOnly", (int64)ECosmeticOutfitSkinType::TorsoHandsOnly },
				{ "ECosmeticOutfitSkinType::TorsoHoodie", (int64)ECosmeticOutfitSkinType::TorsoHoodie },
				{ "ECosmeticOutfitSkinType::TorsoNeonPunk", (int64)ECosmeticOutfitSkinType::TorsoNeonPunk },
				{ "ECosmeticOutfitSkinType::TorsoShouldersElbows", (int64)ECosmeticOutfitSkinType::TorsoShouldersElbows },
				{ "ECosmeticOutfitSkinType::TorsoShouldersWrists", (int64)ECosmeticOutfitSkinType::TorsoShouldersWrists },
				{ "ECosmeticOutfitSkinType::TorsoSoldier", (int64)ECosmeticOutfitSkinType::TorsoSoldier },
				{ "ECosmeticOutfitSkinType::TorsoSwimGirl", (int64)ECosmeticOutfitSkinType::TorsoSwimGirl },
				{ "ECosmeticOutfitSkinType::TorsoAnimeGirl", (int64)ECosmeticOutfitSkinType::TorsoAnimeGirl },
				{ "ECosmeticOutfitSkinType::LegsFull", (int64)ECosmeticOutfitSkinType::LegsFull },
				{ "ECosmeticOutfitSkinType::LegsLower", (int64)ECosmeticOutfitSkinType::LegsLower },
				{ "ECosmeticOutfitSkinType::LegsShorts", (int64)ECosmeticOutfitSkinType::LegsShorts },
				{ "ECosmeticOutfitSkinType::LegsNeonPunk", (int64)ECosmeticOutfitSkinType::LegsNeonPunk },
				{ "ECosmeticOutfitSkinType::LegsSwimGirl", (int64)ECosmeticOutfitSkinType::LegsSwimGirl },
				{ "ECosmeticOutfitSkinType::LegsAnimeGirl", (int64)ECosmeticOutfitSkinType::LegsAnimeGirl },
				{ "ECosmeticOutfitSkinType::FeetFull", (int64)ECosmeticOutfitSkinType::FeetFull },
				{ "ECosmeticOutfitSkinType::FeetAnkleOnly", (int64)ECosmeticOutfitSkinType::FeetAnkleOnly },
				{ "ECosmeticOutfitSkinType::LAST", (int64)ECosmeticOutfitSkinType::LAST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FeetAnkleOnly.Name", "ECosmeticOutfitSkinType::FeetAnkleOnly" },
				{ "FeetFull.Name", "ECosmeticOutfitSkinType::FeetFull" },
				{ "HeadFull.Name", "ECosmeticOutfitSkinType::HeadFull" },
				{ "HeadNeckOnly.Name", "ECosmeticOutfitSkinType::HeadNeckOnly" },
				{ "HeadSphereOnly.Name", "ECosmeticOutfitSkinType::HeadSphereOnly" },
				{ "LAST.Name", "ECosmeticOutfitSkinType::LAST" },
				{ "LegsAnimeGirl.Name", "ECosmeticOutfitSkinType::LegsAnimeGirl" },
				{ "LegsFull.Name", "ECosmeticOutfitSkinType::LegsFull" },
				{ "LegsLower.Name", "ECosmeticOutfitSkinType::LegsLower" },
				{ "LegsNeonPunk.Name", "ECosmeticOutfitSkinType::LegsNeonPunk" },
				{ "LegsShorts.Name", "ECosmeticOutfitSkinType::LegsShorts" },
				{ "LegsSwimGirl.Name", "ECosmeticOutfitSkinType::LegsSwimGirl" },
				{ "ModuleRelativePath", "ECosmeticOutfitSkinType.h" },
				{ "None.Name", "ECosmeticOutfitSkinType::None" },
				{ "TorsoAnimeGirl.Name", "ECosmeticOutfitSkinType::TorsoAnimeGirl" },
				{ "TorsoEngineer.Name", "ECosmeticOutfitSkinType::TorsoEngineer" },
				{ "TorsoFull.Name", "ECosmeticOutfitSkinType::TorsoFull" },
				{ "TorsoHandsOnly.Name", "ECosmeticOutfitSkinType::TorsoHandsOnly" },
				{ "TorsoHoodie.Name", "ECosmeticOutfitSkinType::TorsoHoodie" },
				{ "TorsoNeonPunk.Name", "ECosmeticOutfitSkinType::TorsoNeonPunk" },
				{ "TorsoShouldersElbows.Name", "ECosmeticOutfitSkinType::TorsoShouldersElbows" },
				{ "TorsoShouldersWrists.Name", "ECosmeticOutfitSkinType::TorsoShouldersWrists" },
				{ "TorsoSoldier.Name", "ECosmeticOutfitSkinType::TorsoSoldier" },
				{ "TorsoSwimGirl.Name", "ECosmeticOutfitSkinType::TorsoSwimGirl" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ECosmeticOutfitSkinType",
				"ECosmeticOutfitSkinType",
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
