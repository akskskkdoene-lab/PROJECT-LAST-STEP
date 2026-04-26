// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EPerkType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPerkType() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPerkType();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EPerkType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EPerkType, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EPerkType"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EPerkType>()
	{
		return EPerkType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPerkType(EPerkType_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EPerkType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EPerkType_Hash() { return 4002474233U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EPerkType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPerkType"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EPerkType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPerkType::PT_Undefined", (int64)EPerkType::PT_Undefined },
				{ "EPerkType::PT_PowerWalker", (int64)EPerkType::PT_PowerWalker },
				{ "EPerkType::PT_ShadowWalker", (int64)EPerkType::PT_ShadowWalker },
				{ "EPerkType::PT_LeaveNoTrace", (int64)EPerkType::PT_LeaveNoTrace },
				{ "EPerkType::PT_DistantSavior", (int64)EPerkType::PT_DistantSavior },
				{ "EPerkType::PT_PunchingBag", (int64)EPerkType::PT_PunchingBag },
				{ "EPerkType::PT_Leadership", (int64)EPerkType::PT_Leadership },
				{ "EPerkType::PT_MasterPianist", (int64)EPerkType::PT_MasterPianist },
				{ "EPerkType::PT_ThinkFast", (int64)EPerkType::PT_ThinkFast },
				{ "EPerkType::PT_Genius", (int64)EPerkType::PT_Genius },
				{ "EPerkType::PT_Pathfinder", (int64)EPerkType::PT_Pathfinder },
				{ "EPerkType::PT_ClawCollector", (int64)EPerkType::PT_ClawCollector },
				{ "EPerkType::PT_PuzzlePicasso", (int64)EPerkType::PT_PuzzlePicasso },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "EPerkType.h" },
				{ "PT_ClawCollector.Name", "EPerkType::PT_ClawCollector" },
				{ "PT_DistantSavior.Name", "EPerkType::PT_DistantSavior" },
				{ "PT_Genius.Name", "EPerkType::PT_Genius" },
				{ "PT_Leadership.Name", "EPerkType::PT_Leadership" },
				{ "PT_LeaveNoTrace.Name", "EPerkType::PT_LeaveNoTrace" },
				{ "PT_MasterPianist.Name", "EPerkType::PT_MasterPianist" },
				{ "PT_Pathfinder.Name", "EPerkType::PT_Pathfinder" },
				{ "PT_PowerWalker.Name", "EPerkType::PT_PowerWalker" },
				{ "PT_PunchingBag.Name", "EPerkType::PT_PunchingBag" },
				{ "PT_PuzzlePicasso.Name", "EPerkType::PT_PuzzlePicasso" },
				{ "PT_ShadowWalker.Name", "EPerkType::PT_ShadowWalker" },
				{ "PT_ThinkFast.Name", "EPerkType::PT_ThinkFast" },
				{ "PT_Undefined.Name", "EPerkType::PT_Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EPerkType",
				"EPerkType",
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
