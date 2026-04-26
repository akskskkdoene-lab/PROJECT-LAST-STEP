// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/BoxySoundSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxySoundSet() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FBoxySoundSet();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FBoxySoundSet>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBoxySoundSet cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBoxySoundSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FBoxySoundSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxySoundSet, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("BoxySoundSet"), sizeof(FBoxySoundSet), Get_Z_Construct_UScriptStruct_FBoxySoundSet_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FBoxySoundSet>()
{
	return FBoxySoundSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoxySoundSet(FBoxySoundSet::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("BoxySoundSet"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFBoxySoundSet
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFBoxySoundSet()
	{
		UScriptStruct::DeferCppStructOps<FBoxySoundSet>(FName(TEXT("BoxySoundSet")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFBoxySoundSet;
	struct Z_Construct_UScriptStruct_FBoxySoundSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Footstep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Footstep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crouch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Crouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargingJump_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargingJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasedCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasedCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Land_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Land;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabShoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabGrab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jumpscare_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jumpscare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxySoundSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Footstep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Footstep = { "Footstep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Footstep), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Footstep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Footstep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Crouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Crouch = { "Crouch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Crouch), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Crouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Crouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Punch = { "Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Punch), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_PunchHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_PunchHit = { "PunchHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, PunchHit), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_PunchHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_PunchHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ChargingJump_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ChargingJump = { "ChargingJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, ChargingJump), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ChargingJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ChargingJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ReleasedCharge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ReleasedCharge = { "ReleasedCharge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, ReleasedCharge), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ReleasedCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ReleasedCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Land_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Land = { "Land", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Land), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Land_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Land_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jump_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jump = { "Jump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Jump), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabShoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabShoot = { "GrabShoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, GrabShoot), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabGrab_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabGrab = { "GrabGrab", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, GrabGrab), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jumpscare_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jumpscare = { "Jumpscare", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, Jumpscare), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jumpscare_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jumpscare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_SelectScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxySoundSet" },
		{ "ModuleRelativePath", "BoxySoundSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_SelectScreen = { "SelectScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoxySoundSet, SelectScreen), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_SelectScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_SelectScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxySoundSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Footstep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Crouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_PunchHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ChargingJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_ReleasedCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Land,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_GrabGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_Jumpscare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxySoundSet_Statics::NewProp_SelectScreen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxySoundSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BoxySoundSet",
		sizeof(FBoxySoundSet),
		alignof(FBoxySoundSet),
		Z_Construct_UScriptStruct_FBoxySoundSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxySoundSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxySoundSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoxySoundSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoxySoundSet"), sizeof(FBoxySoundSet), Get_Z_Construct_UScriptStruct_FBoxySoundSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoxySoundSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoxySoundSet_Hash() { return 3159357563U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
