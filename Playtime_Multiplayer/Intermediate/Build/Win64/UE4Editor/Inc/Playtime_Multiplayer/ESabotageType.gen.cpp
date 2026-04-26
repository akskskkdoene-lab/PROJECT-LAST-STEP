// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ESabotageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESabotageType() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ESabotageType();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ESabotageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ESabotageType, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ESabotageType"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ESabotageType>()
	{
		return ESabotageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESabotageType(ESabotageType_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ESabotageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ESabotageType_Hash() { return 2425237632U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ESabotageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESabotageType"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ESabotageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESabotageType::ST_Undefined", (int64)ESabotageType::ST_Undefined },
				{ "ESabotageType::ST_TotalLockdown", (int64)ESabotageType::ST_TotalLockdown },
				{ "ESabotageType::ST_Directionless", (int64)ESabotageType::ST_Directionless },
				{ "ESabotageType::ST_NoPack", (int64)ESabotageType::ST_NoPack },
				{ "ESabotageType::ST_Shutdown", (int64)ESabotageType::ST_Shutdown },
				{ "ESabotageType::ST_AutoCarry", (int64)ESabotageType::ST_AutoCarry },
				{ "ESabotageType::ST_NoEscape", (int64)ESabotageType::ST_NoEscape },
				{ "ESabotageType::ST_BoobyTrap", (int64)ESabotageType::ST_BoobyTrap },
				{ "ESabotageType::ST_LivingNightmare", (int64)ESabotageType::ST_LivingNightmare },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ESabotageType.h" },
				{ "ST_AutoCarry.Name", "ESabotageType::ST_AutoCarry" },
				{ "ST_BoobyTrap.Name", "ESabotageType::ST_BoobyTrap" },
				{ "ST_Directionless.Name", "ESabotageType::ST_Directionless" },
				{ "ST_LivingNightmare.Name", "ESabotageType::ST_LivingNightmare" },
				{ "ST_NoEscape.Name", "ESabotageType::ST_NoEscape" },
				{ "ST_NoPack.Name", "ESabotageType::ST_NoPack" },
				{ "ST_Shutdown.Name", "ESabotageType::ST_Shutdown" },
				{ "ST_TotalLockdown.Name", "ESabotageType::ST_TotalLockdown" },
				{ "ST_Undefined.Name", "ESabotageType::ST_Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ESabotageType",
				"ESabotageType",
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
