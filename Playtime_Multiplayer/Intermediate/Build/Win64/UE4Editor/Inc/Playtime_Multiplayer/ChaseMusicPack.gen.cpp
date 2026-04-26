// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ChaseMusicPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaseMusicPack() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UChaseMusicPack_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UChaseMusicPack();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_USoundPack();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UChaseMusicPack::StaticRegisterNativesUChaseMusicPack()
	{
	}
	UClass* Z_Construct_UClass_UChaseMusicPack_NoRegister()
	{
		return UChaseMusicPack::StaticClass();
	}
	struct Z_Construct_UClass_UChaseMusicPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaseMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaseMusicPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundPack,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseMusicPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaseMusicPack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ChaseMusicPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseMusicPack_Statics::NewProp_ChaseMusic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChaseMusicPack" },
		{ "ModuleRelativePath", "ChaseMusicPack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaseMusicPack_Statics::NewProp_ChaseMusic = { "ChaseMusic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaseMusicPack, ChaseMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaseMusicPack_Statics::NewProp_ChaseMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaseMusicPack_Statics::NewProp_ChaseMusic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaseMusicPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaseMusicPack_Statics::NewProp_ChaseMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaseMusicPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaseMusicPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaseMusicPack_Statics::ClassParams = {
		&UChaseMusicPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaseMusicPack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaseMusicPack_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaseMusicPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaseMusicPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaseMusicPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaseMusicPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaseMusicPack, 2792622739);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UChaseMusicPack>()
	{
		return UChaseMusicPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaseMusicPack(Z_Construct_UClass_UChaseMusicPack, &UChaseMusicPack::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UChaseMusicPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaseMusicPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
