// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P518/DoorBell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorBell() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_ADoorBell_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_ADoorBell();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void ADoorBell::StaticRegisterNativesADoorBell()
	{
	}
	UClass* Z_Construct_UClass_ADoorBell_NoRegister()
	{
		return ADoorBell::StaticClass();
	}
	struct Z_Construct_UClass_ADoorBell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorToOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorBell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBell_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P518/DoorBell.h" },
		{ "ModuleRelativePath", "P518/DoorBell.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorBell_Statics::NewProp_DoorToOpen_MetaData[] = {
		{ "Category", "which door?" },
		{ "ModuleRelativePath", "P518/DoorBell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorBell_Statics::NewProp_DoorToOpen = { "DoorToOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorBell, DoorToOpen), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorBell_Statics::NewProp_DoorToOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoorBell_Statics::NewProp_DoorToOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorBell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorBell_Statics::NewProp_DoorToOpen,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoorBell_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ADoorBell, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorBell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorBell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorBell_Statics::ClassParams = {
		&ADoorBell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorBell_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADoorBell_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorBell_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoorBell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorBell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorBell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorBell, 44077177);
	template<> COOKBOOK_API UClass* StaticClass<ADoorBell>()
	{
		return ADoorBell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorBell(Z_Construct_UClass_ADoorBell, &ADoorBell::StaticClass, TEXT("/Script/CookBook"), TEXT("ADoorBell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorBell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
