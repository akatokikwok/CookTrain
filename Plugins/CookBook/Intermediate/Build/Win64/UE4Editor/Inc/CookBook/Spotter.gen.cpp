// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P597/Spotter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotter() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_ASpotter_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_ASpotter();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_ASpotter_OnPlayerSpotted();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_ASpotter_OnPlayerSpotted = FName(TEXT("OnPlayerSpotted"));
	void ASpotter::OnPlayerSpotted(APawn* Player)
	{
		Spotter_eventOnPlayerSpotted_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_ASpotter_OnPlayerSpotted),&Parms);
	}
	void ASpotter::StaticRegisterNativesASpotter()
	{
	}
	struct Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spotter_eventOnPlayerSpotted_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "P597/Spotter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotter, nullptr, "OnPlayerSpotted", sizeof(Spotter_eventOnPlayerSpotted_Parms), Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpotter_OnPlayerSpotted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpotter_OnPlayerSpotted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpotter_NoRegister()
	{
		return ASpotter::StaticClass();
	}
	struct Z_Construct_UClass_ASpotter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpotter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpotter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpotter_OnPlayerSpotted, "OnPlayerSpotted" }, // 2589722856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P597/Spotter.h" },
		{ "ModuleRelativePath", "P597/Spotter.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpotter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpotter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpotter_Statics::ClassParams = {
		&ASpotter::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpotter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpotter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpotter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpotter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpotter, 1956425385);
	template<> COOKBOOK_API UClass* StaticClass<ASpotter>()
	{
		return ASpotter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpotter(Z_Construct_UClass_ASpotter, &ASpotter::StaticClass, TEXT("/Script/CookBook"), TEXT("ASpotter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpotter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
