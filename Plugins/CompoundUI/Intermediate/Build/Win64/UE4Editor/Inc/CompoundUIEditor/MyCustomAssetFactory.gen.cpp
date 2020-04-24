// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompoundUIEditor/MyCustomAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomAssetFactory() {}
// Cross Module References
	COMPOUNDUIEDITOR_API UClass* Z_Construct_UClass_UMyCustomAssetFactory_NoRegister();
	COMPOUNDUIEDITOR_API UClass* Z_Construct_UClass_UMyCustomAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CompoundUIEditor();
// End Cross Module References
	void UMyCustomAssetFactory::StaticRegisterNativesUMyCustomAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UMyCustomAssetFactory_NoRegister()
	{
		return UMyCustomAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMyCustomAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCustomAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CompoundUIEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCustomAssetFactory.h" },
		{ "ModuleRelativePath", "MyCustomAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCustomAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCustomAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCustomAssetFactory_Statics::ClassParams = {
		&UMyCustomAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCustomAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyCustomAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCustomAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCustomAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCustomAssetFactory, 3948694053);
	template<> COMPOUNDUIEDITOR_API UClass* StaticClass<UMyCustomAssetFactory>()
	{
		return UMyCustomAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCustomAssetFactory(Z_Construct_UClass_UMyCustomAssetFactory, &UMyCustomAssetFactory::StaticClass, TEXT("/Script/CompoundUIEditor"), TEXT("UMyCustomAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCustomAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
