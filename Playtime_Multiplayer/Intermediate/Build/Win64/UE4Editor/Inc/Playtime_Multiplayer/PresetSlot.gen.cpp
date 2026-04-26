// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/PresetSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresetSlot() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPresetSlot();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
class UScriptStruct* FPresetSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FPresetSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetSlot, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("PresetSlot"), sizeof(FPresetSlot), Get_Z_Construct_UScriptStruct_FPresetSlot_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FPresetSlot>()
{
	return FPresetSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresetSlot(FPresetSlot::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("PresetSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPresetSlot
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPresetSlot()
	{
		UScriptStruct::DeferCppStructOps<FPresetSlot>(FName(TEXT("PresetSlot")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFPresetSlot;
	struct Z_Construct_UScriptStruct_FPresetSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeftHandColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RightHandColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabpack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grabpack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabpackColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrabpackColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkinColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Face_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Face;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FaceColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shirt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shirt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShirtColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShirtColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pants_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pants;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PantsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PantsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shoes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoesColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShoesColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Emotes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emotes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emotes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, LeftHand), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHandColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHandColor = { "LeftHandColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, LeftHandColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHandColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHandColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, RightHand), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHandColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHandColor = { "RightHandColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, RightHandColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHandColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHandColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Grabpack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Grabpack = { "Grabpack", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Grabpack), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Grabpack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Grabpack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_GrabpackColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_GrabpackColor = { "GrabpackColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, GrabpackColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_GrabpackColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_GrabpackColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Skin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Skin = { "Skin", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Skin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Skin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Skin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_SkinColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_SkinColor = { "SkinColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, SkinColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_SkinColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_SkinColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Hat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Hat = { "Hat", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Hat), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Hat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Hat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_HatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_HatColor = { "HatColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, HatColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_HatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_HatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Face_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Face = { "Face", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Face), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Face_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Face_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_FaceColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_FaceColor = { "FaceColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, FaceColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_FaceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_FaceColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shirt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shirt = { "Shirt", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Shirt), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shirt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shirt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShirtColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShirtColor = { "ShirtColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, ShirtColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShirtColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShirtColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Pants_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Pants = { "Pants", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Pants), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Pants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Pants_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_PantsColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_PantsColor = { "PantsColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, PantsColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_PantsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_PantsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shoes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shoes = { "Shoes", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Shoes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shoes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shoes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShoesColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShoesColor = { "ShoesColor", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, ShoesColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShoesColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShoesColor_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes_Inner = { "Emotes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetSlot" },
		{ "ModuleRelativePath", "PresetSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes = { "Emotes", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetSlot, Emotes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_LeftHandColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_RightHandColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Grabpack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_GrabpackColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_SkinColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Hat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_HatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Face,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_FaceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shirt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShirtColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Pants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_PantsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Shoes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_ShoesColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetSlot_Statics::NewProp_Emotes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		nullptr,
		&NewStructOps,
		"PresetSlot",
		sizeof(FPresetSlot),
		alignof(FPresetSlot),
		Z_Construct_UScriptStruct_FPresetSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresetSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresetSlot"), sizeof(FPresetSlot), Get_Z_Construct_UScriptStruct_FPresetSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresetSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresetSlot_Hash() { return 750510447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
