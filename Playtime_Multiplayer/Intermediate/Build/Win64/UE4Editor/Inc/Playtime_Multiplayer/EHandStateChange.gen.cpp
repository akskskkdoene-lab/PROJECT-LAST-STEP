// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EHandStateChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHandStateChange() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHandStateChange();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EHandStateChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EHandStateChange, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EHandStateChange"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EHandStateChange>()
	{
		return EHandStateChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandStateChange(EHandStateChange_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EHandStateChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EHandStateChange_Hash() { return 4099254441U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EHandStateChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandStateChange"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EHandStateChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandStateChange::HSC_Undefined", (int64)EHandStateChange::HSC_Undefined },
				{ "EHandStateChange::HSC_Shot", (int64)EHandStateChange::HSC_Shot },
				{ "EHandStateChange::HSC_Returned", (int64)EHandStateChange::HSC_Returned },
				{ "EHandStateChange::HSC_Grabbed", (int64)EHandStateChange::HSC_Grabbed },
				{ "EHandStateChange::HSC_HitObject", (int64)EHandStateChange::HSC_HitObject },
				{ "EHandStateChange::HSC_StartedPulling", (int64)EHandStateChange::HSC_StartedPulling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HSC_Grabbed.Name", "EHandStateChange::HSC_Grabbed" },
				{ "HSC_HitObject.Name", "EHandStateChange::HSC_HitObject" },
				{ "HSC_Returned.Name", "EHandStateChange::HSC_Returned" },
				{ "HSC_Shot.Name", "EHandStateChange::HSC_Shot" },
				{ "HSC_StartedPulling.Name", "EHandStateChange::HSC_StartedPulling" },
				{ "HSC_Undefined.Name", "EHandStateChange::HSC_Undefined" },
				{ "ModuleRelativePath", "EHandStateChange.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EHandStateChange",
				"EHandStateChange",
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
