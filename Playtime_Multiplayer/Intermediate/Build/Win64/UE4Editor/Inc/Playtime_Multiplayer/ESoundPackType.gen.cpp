// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ESoundPackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESoundPackType() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ESoundPackType();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* ESoundPackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_ESoundPackType, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ESoundPackType"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<ESoundPackType>()
	{
		return ESoundPackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundPackType(ESoundPackType_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("ESoundPackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_ESoundPackType_Hash() { return 1365937792U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ESoundPackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundPackType"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_ESoundPackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESoundPackType::SP_None", (int64)ESoundPackType::SP_None },
				{ "ESoundPackType::SP_Puzzle", (int64)ESoundPackType::SP_Puzzle },
				{ "ESoundPackType::SP_Survivor", (int64)ESoundPackType::SP_Survivor },
				{ "ESoundPackType::SP_Lobby", (int64)ESoundPackType::SP_Lobby },
				{ "ESoundPackType::SP_Ambient", (int64)ESoundPackType::SP_Ambient },
				{ "ESoundPackType::SP_Chase", (int64)ESoundPackType::SP_Chase },
				{ "ESoundPackType::ALL", (int64)ESoundPackType::ALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL.Name", "ESoundPackType::ALL" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ESoundPackType.h" },
				{ "SP_Ambient.Name", "ESoundPackType::SP_Ambient" },
				{ "SP_Chase.Name", "ESoundPackType::SP_Chase" },
				{ "SP_Lobby.Name", "ESoundPackType::SP_Lobby" },
				{ "SP_None.Name", "ESoundPackType::SP_None" },
				{ "SP_Puzzle.Name", "ESoundPackType::SP_Puzzle" },
				{ "SP_Survivor.Name", "ESoundPackType::SP_Survivor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"ESoundPackType",
				"ESoundPackType",
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
