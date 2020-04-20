// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P605/King.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKing() {}
// Cross Module References
	COOKBOOK_API UFunction* Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UClass* Z_Construct_UClass_AKing_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_AKing();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	COOKBOOK_API UFunction* Z_Construct_UFunction_AKing_Die();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics
	{
		struct _Script_CookBook_eventOnKingDeathSignature_Parms
		{
			AKing* DeadKing;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadKing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::NewProp_DeadKing = { "DeadKing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CookBook_eventOnKingDeathSignature_Parms, DeadKing), Z_Construct_UClass_AKing_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::NewProp_DeadKing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "P605/King.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CookBook, nullptr, "OnKingDeathSignature__DelegateSignature", sizeof(_Script_CookBook_eventOnKingDeathSignature_Parms), Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AKing::StaticRegisterNativesAKing()
	{
		UClass* Class = AKing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &AKing::execDie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKing_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKing_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "King" },
		{ "ModuleRelativePath", "P605/King.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKing_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKing, nullptr, "Die", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKing_Die_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKing_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKing_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKing_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKing_NoRegister()
	{
		return AKing::StaticClass();
	}
	struct Z_Construct_UClass_AKing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKingDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKingDeath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKing_Die, "Die" }, // 1476792113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P605/King.h" },
		{ "ModuleRelativePath", "P605/King.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Statics::NewProp_OnKingDeath_MetaData[] = {
		{ "ModuleRelativePath", "P605/King.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AKing_Statics::NewProp_OnKingDeath = { "OnKingDeath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing, OnKingDeath), Z_Construct_UDelegateFunction_CookBook_OnKingDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AKing_Statics::NewProp_OnKingDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKing_Statics::NewProp_OnKingDeath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Statics::NewProp_OnKingDeath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKing_Statics::ClassParams = {
		&AKing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKing_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AKing_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AKing_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKing, 2922253783);
	template<> COOKBOOK_API UClass* StaticClass<AKing>()
	{
		return AKing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKing(Z_Construct_UClass_AKing, &AKing::StaticClass, TEXT("/Script/CookBook"), TEXT("AKing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
