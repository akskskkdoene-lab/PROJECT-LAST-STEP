// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Playtime_Multiplayer/CosmeticAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCosmeticAsset() {}
// Cross Module References
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UCosmeticAsset_NoRegister();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UCosmeticAsset();
	PLAYTIME_MULTIPLAYER_API UClass* Z_Construct_UClass_UItemAsset();
	UPackage* Z_Construct_UPackage__Script_Playtime_Multiplayer();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticTypeEnum();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECharacterType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	PLAYTIME_MULTIPLAYER_API UEnum* Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCosmeticAsset::execGetAlternateMesh)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetAlternateMesh(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCosmeticAsset::execGetHandRetractSound)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetHandRetractSound(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCosmeticAsset::execGetHandShootSound)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetHandShootSound(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCosmeticAsset::execGetHighMesh)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetHighMesh(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCosmeticAsset::execGetLowMesh)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetLowMesh(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCosmeticAsset::execGetMesh)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetMesh(Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	void UCosmeticAsset::StaticRegisterNativesUCosmeticAsset()
	{
		UClass* Class = UCosmeticAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlternateMesh", &UCosmeticAsset::execGetAlternateMesh },
			{ "GetHandRetractSound", &UCosmeticAsset::execGetHandRetractSound },
			{ "GetHandShootSound", &UCosmeticAsset::execGetHandShootSound },
			{ "GetHighMesh", &UCosmeticAsset::execGetHighMesh },
			{ "GetLowMesh", &UCosmeticAsset::execGetLowMesh },
			{ "GetMesh", &UCosmeticAsset::execGetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics
	{
		struct CosmeticAsset_eventGetAlternateMesh_Parms
		{
			bool Valid;
			USkeletalMesh* ReturnValue;
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
	void Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((CosmeticAsset_eventGetAlternateMesh_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CosmeticAsset_eventGetAlternateMesh_Parms), &Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CosmeticAsset_eventGetAlternateMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCosmeticAsset, nullptr, "GetAlternateMesh", nullptr, nullptr, sizeof(CosmeticAsset_eventGetAlternateMesh_Parms), Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics
	{
		struct CosmeticAsset_eventGetHandRetractSound_Parms
		{
			bool Valid;
			USoundBase* ReturnValue;
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
	void Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((CosmeticAsset_eventGetHandRetractSound_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CosmeticAsset_eventGetHandRetractSound_Parms), &Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CosmeticAsset_eventGetHandRetractSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCosmeticAsset, nullptr, "GetHandRetractSound", nullptr, nullptr, sizeof(CosmeticAsset_eventGetHandRetractSound_Parms), Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics
	{
		struct CosmeticAsset_eventGetHandShootSound_Parms
		{
			bool Valid;
			USoundBase* ReturnValue;
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
	void Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((CosmeticAsset_eventGetHandShootSound_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CosmeticAsset_eventGetHandShootSound_Parms), &Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CosmeticAsset_eventGetHandShootSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCosmeticAsset, nullptr, "GetHandShootSound", nullptr, nullptr, sizeof(CosmeticAsset_eventGetHandShootSound_Parms), Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics
	{
		struct CosmeticAsset_eventGetHighMesh_Parms
		{
			bool Valid;
			USkeletalMesh* ReturnValue;
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
	void Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((CosmeticAsset_eventGetHighMesh_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CosmeticAsset_eventGetHighMesh_Parms), &Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CosmeticAsset_eventGetHighMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCosmeticAsset, nullptr, "GetHighMesh", nullptr, nullptr, sizeof(CosmeticAsset_eventGetHighMesh_Parms), Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCosmeticAsset_GetHighMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCosmeticAsset_GetHighMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics
	{
		struct CosmeticAsset_eventGetLowMesh_Parms
		{
			bool Valid;
			USkeletalMesh* ReturnValue;
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
	void Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((CosmeticAsset_eventGetLowMesh_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CosmeticAsset_eventGetLowMesh_Parms), &Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CosmeticAsset_eventGetLowMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCosmeticAsset, nullptr, "GetLowMesh", nullptr, nullptr, sizeof(CosmeticAsset_eventGetLowMesh_Parms), Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCosmeticAsset_GetLowMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCosmeticAsset_GetLowMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics
	{
		struct CosmeticAsset_eventGetMesh_Parms
		{
			bool Valid;
			USkeletalMesh* ReturnValue;
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
	void Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((CosmeticAsset_eventGetMesh_Parms*)Obj)->Valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CosmeticAsset_eventGetMesh_Parms), &Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CosmeticAsset_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCosmeticAsset, nullptr, "GetMesh", nullptr, nullptr, sizeof(CosmeticAsset_eventGetMesh_Parms), Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCosmeticAsset_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCosmeticAsset_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCosmeticAsset_NoRegister()
	{
		return UCosmeticAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCosmeticAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshContainerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MeshContainerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsColorable_MetaData[];
#endif
		static void NewProp_bIsColorable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsColorable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorableLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorableLayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshes_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkeletalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinMeshes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinMeshes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkinMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkinMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverrides_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sounds_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Sounds_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Sounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultSkinElements_MetaData[];
#endif
		static void NewProp_bUseDefaultSkinElements_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultSkinElements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCosmeticAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Playtime_Multiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCosmeticAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCosmeticAsset_GetAlternateMesh, "GetAlternateMesh" }, // 3097847140
		{ &Z_Construct_UFunction_UCosmeticAsset_GetHandRetractSound, "GetHandRetractSound" }, // 731759083
		{ &Z_Construct_UFunction_UCosmeticAsset_GetHandShootSound, "GetHandShootSound" }, // 103662305
		{ &Z_Construct_UFunction_UCosmeticAsset_GetHighMesh, "GetHighMesh" }, // 4122289040
		{ &Z_Construct_UFunction_UCosmeticAsset_GetLowMesh, "GetLowMesh" }, // 2493237119
		{ &Z_Construct_UFunction_UCosmeticAsset_GetMesh, "GetMesh" }, // 703787663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CosmeticAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType = { "CosmeticType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, CosmeticType), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, CharacterType), Z_Construct_UEnum_Playtime_Multiplayer_ECharacterType, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MeshContainerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MeshContainerClass = { "MeshContainerClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, MeshContainerClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MeshContainerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MeshContainerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	void Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable_SetBit(void* Obj)
	{
		((UCosmeticAsset*)Obj)->bIsColorable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable = { "bIsColorable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCosmeticAsset), &Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_ColorableLayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_ColorableLayer = { "ColorableLayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, ColorableLayer), METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_ColorableLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_ColorableLayer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_ValueProp = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_Key_KeyProp = { "SkeletalMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, SkeletalMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_AnimationBlueprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, AnimationBlueprint), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_AnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_AnimationBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	void Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask_SetBit(void* Obj)
	{
		((UCosmeticAsset*)Obj)->bDoesHatSupportMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask = { "bDoesHatSupportMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCosmeticAsset), &Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType = { "OutfitSkinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, OutfitSkinType), Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_ValueProp = { "SkinMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_Key_KeyProp = { "SkinMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Playtime_Multiplayer_ECosmeticOutfitSkinType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes = { "SkinMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, SkinMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_ValueProp = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_Key_KeyProp = { "MaterialOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, MaterialOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_ValueProp = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_Key_KeyProp = { "Sounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCosmeticAsset, Sounds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmeticAsset" },
		{ "ModuleRelativePath", "CosmeticAsset.h" },
	};
#endif
	void Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements_SetBit(void* Obj)
	{
		((UCosmeticAsset*)Obj)->bUseDefaultSkinElements = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements = { "bUseDefaultSkinElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCosmeticAsset), &Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCosmeticAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CosmeticType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_CharacterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MeshContainerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bIsColorable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_ColorableLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_AnimationBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bDoesHatSupportMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_OutfitSkinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_SkinMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_MaterialOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_Sounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCosmeticAsset_Statics::NewProp_bUseDefaultSkinElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCosmeticAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCosmeticAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCosmeticAsset_Statics::ClassParams = {
		&UCosmeticAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCosmeticAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCosmeticAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCosmeticAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCosmeticAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCosmeticAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCosmeticAsset, 2208403013);
	template<> PLAYTIME_MULTIPLAYER_API UClass* StaticClass<UCosmeticAsset>()
	{
		return UCosmeticAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCosmeticAsset(Z_Construct_UClass_UCosmeticAsset, &UCosmeticAsset::StaticClass, TEXT("/Script/Playtime_Multiplayer"), TEXT("UCosmeticAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCosmeticAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
