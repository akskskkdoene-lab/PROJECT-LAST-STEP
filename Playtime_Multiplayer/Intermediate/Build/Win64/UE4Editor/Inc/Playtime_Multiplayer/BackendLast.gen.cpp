// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/BackendLast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackendLast() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBackendLast_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UBackendLast();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
// End Cross Module References
	void UBackendLast::StaticRegisterNativesUBackendLast()
	{
	}
	UClass* Z_Construct_UClass_UBackendLast_NoRegister()
	{
		return UBackendLast::StaticClass();
	}
	struct Z_Construct_UClass_UBackendLast_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackendLast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BackendLast.h" },
		{ "ModuleRelativePath", "BackendLast.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackendLast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackendLast>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBackendLast_Statics::ClassParams = {
		&UBackendLast::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackendLast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackendLast()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBackendLast_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBackendLast, 2171148810);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UBackendLast>()
	{
		return UBackendLast::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBackendLast(Z_Construct_UClass_UBackendLast, &UBackendLast::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UBackendLast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackendLast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
