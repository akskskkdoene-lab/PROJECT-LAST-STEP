// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMazeComponentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMazeComponentType() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMazeComponentType();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMazeComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMazeComponentType, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMazeComponentType"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMazeComponentType>()
	{
		return EMazeComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMazeComponentType(EMazeComponentType_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMazeComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMazeComponentType_Hash() { return 2454030261U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMazeComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMazeComponentType"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMazeComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMazeComponentType::FROM_UP", (int64)EMazeComponentType::FROM_UP },
				{ "EMazeComponentType::HORIZONTAL", (int64)EMazeComponentType::HORIZONTAL },
				{ "EMazeComponentType::TO_DOWN", (int64)EMazeComponentType::TO_DOWN },
				{ "EMazeComponentType::TURN", (int64)EMazeComponentType::TURN },
				{ "EMazeComponentType::VERTICAL", (int64)EMazeComponentType::VERTICAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FROM_UP.Name", "EMazeComponentType::FROM_UP" },
				{ "HORIZONTAL.Name", "EMazeComponentType::HORIZONTAL" },
				{ "ModuleRelativePath", "EMazeComponentType.h" },
				{ "TO_DOWN.Name", "EMazeComponentType::TO_DOWN" },
				{ "TURN.Name", "EMazeComponentType::TURN" },
				{ "VERTICAL.Name", "EMazeComponentType::VERTICAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMazeComponentType",
				"EMazeComponentType",
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
