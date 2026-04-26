// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/SabotageDef.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSabotageDef() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FSabotageDef();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FSabotageDef>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSabotageDef cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSabotageDef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FSabotageDef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSabotageDef, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("SabotageDef"), sizeof(FSabotageDef), Get_Z_Construct_UScriptStruct_FSabotageDef_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FSabotageDef>()
{
	return FSabotageDef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSabotageDef(FSabotageDef::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("SabotageDef"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSabotageDef
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSabotageDef()
	{
		UScriptStruct::DeferCppStructOps<FSabotageDef>(FName(TEXT("SabotageDef")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFSabotageDef;
	struct Z_Construct_UScriptStruct_FSabotageDef_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SplashDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivationSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSabotage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSabotage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceToSabotage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceToSabotage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldMulticast_MetaData[];
#endif
		static void NewProp_bShouldMulticast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldMulticast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDuration_MetaData[];
#endif
		static void NewProp_bUseDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLevelIsCount_MetaData[];
#endif
		static void NewProp_bLevelIsCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLevelIsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOneDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelOneDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTwoDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelTwoDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelThreeDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelThreeDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOnePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelOnePrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTwoPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelTwoPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelThreePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelThreePrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSabotageDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSabotageDef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_SplashDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_SplashDescription = { "SplashDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, SplashDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_SplashDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_SplashDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_FunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActivationSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActivationSound = { "ActivationSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, ActivationSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActivationSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActivationSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActorToSabotage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActorToSabotage = { "ActorToSabotage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, ActorToSabotage), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActorToSabotage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActorToSabotage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_InterfaceToSabotage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_InterfaceToSabotage = { "InterfaceToSabotage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, InterfaceToSabotage), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_InterfaceToSabotage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_InterfaceToSabotage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast_SetBit(void* Obj)
	{
		((FSabotageDef*)Obj)->bShouldMulticast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast = { "bShouldMulticast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSabotageDef), &Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration_SetBit(void* Obj)
	{
		((FSabotageDef*)Obj)->bUseDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration = { "bUseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSabotageDef), &Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOne = { "LevelOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelOne), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwo = { "LevelTwo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelTwo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThree = { "LevelThree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelThree), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount_SetBit(void* Obj)
	{
		((FSabotageDef*)Obj)->bLevelIsCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount = { "bLevelIsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSabotageDef), &Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOneDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOneDescription = { "LevelOneDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelOneDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOneDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOneDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoDescription = { "LevelTwoDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelTwoDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreeDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreeDescription = { "LevelThreeDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelThreeDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreeDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOnePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOnePrice = { "LevelOnePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelOnePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOnePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOnePrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoPrice = { "LevelTwoPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelTwoPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SabotageDef" },
		{ "ModuleRelativePath", "SabotageDef.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreePrice = { "LevelThreePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSabotageDef, LevelThreePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreePrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSabotageDef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_SplashDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActivationSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_ActorToSabotage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_InterfaceToSabotage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bShouldMulticast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bUseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_bLevelIsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOneDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreeDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelOnePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelTwoPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSabotageDef_Statics::NewProp_LevelThreePrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSabotageDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SabotageDef",
		sizeof(FSabotageDef),
		alignof(FSabotageDef),
		Z_Construct_UScriptStruct_FSabotageDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSabotageDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSabotageDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSabotageDef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSabotageDef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SabotageDef"), sizeof(FSabotageDef), Get_Z_Construct_UScriptStruct_FSabotageDef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSabotageDef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSabotageDef_Hash() { return 2667566969U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
