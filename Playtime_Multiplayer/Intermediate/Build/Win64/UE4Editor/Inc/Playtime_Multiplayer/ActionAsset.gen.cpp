// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/ActionAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionAsset() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UActionAsset_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UActionAsset();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECharacterType();
// End Cross Module References
	DEFINE_FUNCTION(UActionAsset::execGetFirstPersonEmote)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetFirstPersonEmote(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionAsset::execGetLeftHandGesture)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetLeftHandGesture(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionAsset::execGetRightHandGesture)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetRightHandGesture(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActionAsset::execGetThirdPersonEmote)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetThirdPersonEmote(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	void UActionAsset::StaticRegisterNativesUActionAsset()
	{
		UClass* Class = UActionAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstPersonEmote", &UActionAsset::execGetFirstPersonEmote },
			{ "GetLeftHandGesture", &UActionAsset::execGetLeftHandGesture },
			{ "GetRightHandGesture", &UActionAsset::execGetRightHandGesture },
			{ "GetThirdPersonEmote", &UActionAsset::execGetThirdPersonEmote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics
	{
		struct ActionAsset_eventGetFirstPersonEmote_Parms
		{
			bool Valid;
			UAnimSequence* ReturnValue;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((ActionAsset_eventGetFirstPersonEmote_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionAsset_eventGetFirstPersonEmote_Parms), &Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionAsset_eventGetFirstPersonEmote_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAsset, nullptr, "GetFirstPersonEmote", nullptr, nullptr, sizeof(ActionAsset_eventGetFirstPersonEmote_Parms), Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics
	{
		struct ActionAsset_eventGetLeftHandGesture_Parms
		{
			bool Valid;
			UAnimSequence* ReturnValue;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((ActionAsset_eventGetLeftHandGesture_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionAsset_eventGetLeftHandGesture_Parms), &Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionAsset_eventGetLeftHandGesture_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAsset, nullptr, "GetLeftHandGesture", nullptr, nullptr, sizeof(ActionAsset_eventGetLeftHandGesture_Parms), Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionAsset_GetLeftHandGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionAsset_GetLeftHandGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics
	{
		struct ActionAsset_eventGetRightHandGesture_Parms
		{
			bool Valid;
			UAnimSequence* ReturnValue;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((ActionAsset_eventGetRightHandGesture_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionAsset_eventGetRightHandGesture_Parms), &Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionAsset_eventGetRightHandGesture_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAsset, nullptr, "GetRightHandGesture", nullptr, nullptr, sizeof(ActionAsset_eventGetRightHandGesture_Parms), Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionAsset_GetRightHandGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionAsset_GetRightHandGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics
	{
		struct ActionAsset_eventGetThirdPersonEmote_Parms
		{
			bool Valid;
			UAnimSequence* ReturnValue;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((ActionAsset_eventGetThirdPersonEmote_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionAsset_eventGetThirdPersonEmote_Parms), &Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionAsset_eventGetThirdPersonEmote_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionAsset, nullptr, "GetThirdPersonEmote", nullptr, nullptr, sizeof(ActionAsset_eventGetThirdPersonEmote_Parms), Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionAsset_NoRegister()
	{
		return UActionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UActionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGesture_MetaData[];
#endif
		static void NewProp_bIsGesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGesture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anims_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Anims_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anims_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Anims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionAsset_GetFirstPersonEmote, "GetFirstPersonEmote" }, // 3744318571
		{ &Z_Construct_UFunction_UActionAsset_GetLeftHandGesture, "GetLeftHandGesture" }, // 2520315045
		{ &Z_Construct_UFunction_UActionAsset_GetRightHandGesture, "GetRightHandGesture" }, // 2743879250
		{ &Z_Construct_UFunction_UActionAsset_GetThirdPersonEmote, "GetThirdPersonEmote" }, // 1336320726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionAsset" },
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	void Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture_SetBit(void* Obj)
	{
		((UActionAsset*)Obj)->bIsGesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture = { "bIsGesture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActionAsset), &Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionAsset" },
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionAsset, CharacterType), Z_Construct_UEnum_Playtime_Multiplayer_ECharacterType, METADATA_PARAMS(Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_ValueProp = { "Anims", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_Key_KeyProp = { "Anims_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionAsset" },
		{ "ModuleRelativePath", "ActionAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims = { "Anims", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionAsset, Anims), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAsset_Statics::NewProp_bIsGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAsset_Statics::NewProp_CharacterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAsset_Statics::NewProp_Anims,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionAsset_Statics::ClassParams = {
		&UActionAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionAsset, 3293948387);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UActionAsset>()
	{
		return UActionAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionAsset(Z_Construct_UClass_UActionAsset, &UActionAsset::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UActionAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
