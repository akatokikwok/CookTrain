// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P533/PostBeginplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBeginplay() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_UPostBeginplay_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_UPostBeginplay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay();
// End Cross Module References
	void UPostBeginplay::StaticRegisterNativesUPostBeginplay()
	{
		UClass* Class = UPostBeginplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPostBeginPlay", &IPostBeginplay::execOnPostBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "P533/PostBeginplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostBeginplay, nullptr, "OnPostBeginPlay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPostBeginplay_NoRegister()
	{
		return UPostBeginplay::StaticClass();
	}
	struct Z_Construct_UClass_UPostBeginplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostBeginplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostBeginplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostBeginplay_OnPostBeginPlay, "OnPostBeginPlay" }, // 1169946627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostBeginplay_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "P533/PostBeginplay.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostBeginplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPostBeginplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPostBeginplay_Statics::ClassParams = {
		&UPostBeginplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPostBeginplay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPostBeginplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostBeginplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPostBeginplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostBeginplay, 2897845636);
	template<> COOKBOOK_API UClass* StaticClass<UPostBeginplay>()
	{
		return UPostBeginplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostBeginplay(Z_Construct_UClass_UPostBeginplay, &UPostBeginplay::StaticClass, TEXT("/Script/CookBook"), TEXT("UPostBeginplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostBeginplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
