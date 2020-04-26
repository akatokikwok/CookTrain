// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompoundUIEditor/MyCustomAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomAsset() {}
// Cross Module References
	COMPOUNDUIEDITOR_API UClass* Z_Construct_UClass_UMyCustomAsset_NoRegister();
	COMPOUNDUIEDITOR_API UClass* Z_Construct_UClass_UMyCustomAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CompoundUIEditor();
// End Cross Module References
	void UMyCustomAsset::StaticRegisterNativesUMyCustomAsset()
	{
	}
	UClass* Z_Construct_UClass_UMyCustomAsset_NoRegister()
	{
		return UMyCustomAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMyCustomAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCustomAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompoundUIEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MyCustomAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyCustomAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_ColorName_MetaData[] = {
		{ "Category", "Custom Asset" },
		{ "ModuleRelativePath", "MyCustomAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_ColorName = { "ColorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCustomAsset, ColorName), METADATA_PARAMS(Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_ColorName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_ColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Custom Asset" },
		{ "ModuleRelativePath", "MyCustomAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyCustomAsset, Name), METADATA_PARAMS(Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyCustomAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_ColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyCustomAsset_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCustomAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCustomAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCustomAsset_Statics::ClassParams = {
		&UMyCustomAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyCustomAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyCustomAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyCustomAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCustomAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCustomAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCustomAsset, 1561417477);
	template<> COMPOUNDUIEDITOR_API UClass* StaticClass<UMyCustomAsset>()
	{
		return UMyCustomAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCustomAsset(Z_Construct_UClass_UMyCustomAsset, &UMyCustomAsset::StaticClass, TEXT("/Script/CompoundUIEditor"), TEXT("UMyCustomAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCustomAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
