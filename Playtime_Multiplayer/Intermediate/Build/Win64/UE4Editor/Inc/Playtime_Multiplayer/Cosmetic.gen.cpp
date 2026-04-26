// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/Cosmetic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCosmetic() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FCosmetic();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticRarity();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticTypeEnum();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECharacterType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCosmetic>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCosmetic cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCosmetic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FCosmetic_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCosmetic, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("Cosmetic"), sizeof(FCosmetic), Get_Z_Construct_UScriptStruct_FCosmetic_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FCosmetic>()
{
	return FCosmetic::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCosmetic(FCosmetic::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("Cosmetic"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFCosmetic
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFCosmetic()
	{
		UScriptStruct::DeferCppStructOps<FCosmetic>(FName(TEXT("Cosmetic")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFCosmetic;
	struct Z_Construct_UScriptStruct_FCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CosmeticType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CosmeticType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPublic_MetaData[];
#endif
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPreReleaseOnly_MetaData[];
#endif
		static void NewProp_bIsPreReleaseOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPreReleaseOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshContainerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MeshContainerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsColorable_MetaData[];
#endif
		static void NewProp_bIsColorable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsColorable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorableLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorableLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AlternateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HighMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimationBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoesHatSupportMask_MetaData[];
#endif
		static void NewProp_bDoesHatSupportMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoesHatSupportMask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutfitSkinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitSkinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutfitSkinType;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkinMeshes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinMeshes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkinMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkinMeshes;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialOverrides_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandShootSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HandShootSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRetractSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HandRetractSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigThumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BigThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultSkinElements_MetaData[];
#endif
		static void NewProp_bUseDefaultSkinElements_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultSkinElements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCosmetic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCosmetic>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, Rarity), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType = { "CosmeticType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, CosmeticType), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, CharacterType), Z_Construct_UEnum_Playtime_Multiplayer_ECharacterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((FCosmetic*)Obj)->bIsPublic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCosmetic), &Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly_SetBit(void* Obj)
	{
		((FCosmetic*)Obj)->bIsPreReleaseOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly = { "bIsPreReleaseOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCosmetic), &Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MeshContainerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MeshContainerClass = { "MeshContainerClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, MeshContainerClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MeshContainerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MeshContainerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable_SetBit(void* Obj)
	{
		((FCosmetic*)Obj)->bIsColorable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable = { "bIsColorable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCosmetic), &Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorableLayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorableLayer = { "ColorableLayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, ColorableLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorableLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorableLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AlternateMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AlternateMesh = { "AlternateMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, AlternateMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AlternateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AlternateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HighMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HighMesh = { "HighMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, HighMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HighMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HighMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_LowMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_LowMesh = { "LowMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, LowMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_LowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_LowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AnimationBlueprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, AnimationBlueprint), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AnimationBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask_SetBit(void* Obj)
	{
		((FCosmetic*)Obj)->bDoesHatSupportMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask = { "bDoesHatSupportMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCosmetic), &Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType = { "OutfitSkinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, OutfitSkinType), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_ValueProp = { "SkinMeshes", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_Key_KeyProp = { "SkinMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes = { "SkinMeshes", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, SkinMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_ValueProp = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_Key_KeyProp = { "MaterialOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, MaterialOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandShootSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandShootSound = { "HandShootSound", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, HandShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandShootSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandShootSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandRetractSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandRetractSound = { "HandRetractSound", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, HandRetractSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandRetractSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandRetractSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_BigThumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_BigThumbnail = { "BigThumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmetic, BigThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_BigThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_BigThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Cosmetic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements_SetBit(void* Obj)
	{
		((FCosmetic*)Obj)->bUseDefaultSkinElements = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements = { "bUseDefaultSkinElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCosmetic), &Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CosmeticType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_CharacterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPublic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsPreReleaseOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MeshContainerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bIsColorable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_ColorableLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AlternateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HighMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_LowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_AnimationBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bDoesHatSupportMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_OutfitSkinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_SkinMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_MaterialOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandShootSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_HandRetractSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_BigThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmetic_Statics::NewProp_bUseDefaultSkinElements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCosmetic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Cosmetic",
		sizeof(FCosmetic),
		alignof(FCosmetic),
		Z_Construct_UScriptStruct_FCosmetic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmetic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmetic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCosmetic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCosmetic_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Cosmetic"), sizeof(FCosmetic), Get_Z_Construct_UScriptStruct_FCosmetic_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCosmetic_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCosmetic_Hash() { return 2151220884U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
