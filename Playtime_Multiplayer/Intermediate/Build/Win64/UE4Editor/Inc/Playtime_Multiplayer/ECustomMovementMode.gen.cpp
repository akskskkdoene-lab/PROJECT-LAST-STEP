// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ECustomMovementMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomMovementMode() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ECustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ECustomMovementMode, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ECustomMovementMode"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ECustomMovementMode>()
	{
		return ECustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMovementMode(ECustomMovementMode_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ECustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ECustomMovementMode_Hash() { return 3990724276U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMovementMode"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ECustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMOVE_Swinging", (int64)CMOVE_Swinging },
				{ "CMOVE_Spline", (int64)CMOVE_Spline },
				{ "CMOVE_Dashing", (int64)CMOVE_Dashing },
				{ "CMOVE_Prone", (int64)CMOVE_Prone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CMOVE_Dashing.Name", "CMOVE_Dashing" },
				{ "CMOVE_Prone.Name", "CMOVE_Prone" },
				{ "CMOVE_Spline.Name", "CMOVE_Spline" },
				{ "CMOVE_Swinging.Name", "CMOVE_Swinging" },
				{ "ModuleRelativePath", "ECustomMovementMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ECustomMovementMode",
				"ECustomMovementMode",
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
