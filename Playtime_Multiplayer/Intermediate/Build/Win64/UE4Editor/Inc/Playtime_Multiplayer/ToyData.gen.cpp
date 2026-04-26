// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ToyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToyData() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FToyData();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FToyData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FToyData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FToyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYTIME_MULTIPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FToyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToyData, Z_Construct_UPackage__Script_Playtime_Multiplayer(), TEXT("ToyData"), sizeof(FToyData), Get_Z_Construct_UScriptStruct_FToyData_Hash());
	}
	return Singleton;
}
template<> PLAYTIME_MULTIPLAYER_API UScriptStruct* StaticStruct<FToyData>()
{
	return FToyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToyData(FToyData::StaticStruct, TEXT("/Script/Playtime_Multiplayer"), TEXT("ToyData"), false, nullptr, nullptr);
static struct FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyData
{
	FScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyData()
	{
		UScriptStruct::DeferCppStructOps<FToyData>(FName(TEXT("ToyData")));
	}
} ScriptStruct_Playtime_Multiplayer_StaticRegisterNativesFToyData;
	struct Z_Construct_UScriptStruct_FToyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Assembled_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assembled_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assembled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Carried_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Carried_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Carried;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grounded_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grounded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grounded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ToyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToyData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled_Inner = { "Assembled", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyData" },
		{ "ModuleRelativePath", "ToyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled = { "Assembled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyData, Assembled), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried_Inner = { "Carried", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyData" },
		{ "ModuleRelativePath", "ToyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried = { "Carried", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyData, Carried), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded_Inner = { "Grounded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ToyData" },
		{ "ModuleRelativePath", "ToyData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded = { "Grounded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToyData, Grounded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Assembled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Carried,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToyData_Statics::NewProp_Grounded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ToyData",
		sizeof(FToyData),
		alignof(FToyData),
		Z_Construct_UScriptStruct_FToyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Playtime_Multiplayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToyData"), sizeof(FToyData), Get_Z_Construct_UScriptStruct_FToyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToyData_Hash() { return 1109262474U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
