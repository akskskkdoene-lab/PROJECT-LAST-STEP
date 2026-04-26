// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/EMommyGrappleState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMommyGrappleState() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMommyGrappleState();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	static UEnum* EMommyGrappleState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Playtime_Multiplayer_EMommyGrappleState, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("EMommyGrappleState"));
		}
		return Singleton;
	}
	template<> PLAYTIME_MULTIPLAYER_API UEnum* StaticEnum<EMommyGrappleState>()
	{
		return EMommyGrappleState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMommyGrappleState(EMommyGrappleState_StaticEnum, TEXT("/Script/Playtime_Multiplayer"), TEXT("EMommyGrappleState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Playtime_Multiplayer_EMommyGrappleState_Hash() { return 2854481347U; }
	UEnum* Z_Construct_UEnum_Playtime_Multiplayer_EMommyGrappleState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMommyGrappleState"), 0, Get_Z_Construct_UEnum_Playtime_Multiplayer_EMommyGrappleState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMommyGrappleState::Idle", (int64)EMommyGrappleState::Idle },
				{ "EMommyGrappleState::Extending", (int64)EMommyGrappleState::Extending },
				{ "EMommyGrappleState::Pulling", (int64)EMommyGrappleState::Pulling },
				{ "EMommyGrappleState::AttachedToWall", (int64)EMommyGrappleState::AttachedToWall },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttachedToWall.Name", "EMommyGrappleState::AttachedToWall" },
				{ "BlueprintType", "true" },
				{ "Extending.Name", "EMommyGrappleState::Extending" },
				{ "Idle.Name", "EMommyGrappleState::Idle" },
				{ "ModuleRelativePath", "EMommyGrappleState.h" },
				{ "Pulling.Name", "EMommyGrappleState::Pulling" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
				nullptr,
				"EMommyGrappleState",
				"EMommyGrappleState",
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
