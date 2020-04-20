// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P636/BlueprintPropertyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPropertyActor() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_ABlueprintPropertyActor_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_ABlueprintPropertyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
// End Cross Module References
	void ABlueprintPropertyActor::StaticRegisterNativesABlueprintPropertyActor()
	{
	}
	UClass* Z_Construct_UClass_ABlueprintPropertyActor_NoRegister()
	{
		return ABlueprintPropertyActor::StaticClass();
	}
	struct Z_Construct_UClass_ABlueprintPropertyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyProperty_MetaData[];
#endif
		static void NewProp_ReadOnlyProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReadOnlyProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadWriteProperty_MetaData[];
#endif
		static void NewProp_ReadWriteProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReadWriteProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlueprintPropertyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprintPropertyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P636/BlueprintPropertyActor.h" },
		{ "ModuleRelativePath", "P636/BlueprintPropertyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty_MetaData[] = {
		{ "Category", "Cookbook" },
		{ "ModuleRelativePath", "P636/BlueprintPropertyActor.h" },
	};
#endif
	void Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty_SetBit(void* Obj)
	{
		((ABlueprintPropertyActor*)Obj)->ReadOnlyProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty = { "ReadOnlyProperty", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlueprintPropertyActor), &Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty_MetaData[] = {
		{ "Category", "Cookbook" },
		{ "ModuleRelativePath", "P636/BlueprintPropertyActor.h" },
	};
#endif
	void Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty_SetBit(void* Obj)
	{
		((ABlueprintPropertyActor*)Obj)->ReadWriteProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty = { "ReadWriteProperty", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlueprintPropertyActor), &Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlueprintPropertyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadOnlyProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlueprintPropertyActor_Statics::NewProp_ReadWriteProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlueprintPropertyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlueprintPropertyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlueprintPropertyActor_Statics::ClassParams = {
		&ABlueprintPropertyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlueprintPropertyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABlueprintPropertyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABlueprintPropertyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlueprintPropertyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlueprintPropertyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlueprintPropertyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlueprintPropertyActor, 3098410263);
	template<> COOKBOOK_API UClass* StaticClass<ABlueprintPropertyActor>()
	{
		return ABlueprintPropertyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlueprintPropertyActor(Z_Construct_UClass_ABlueprintPropertyActor, &ABlueprintPropertyActor::StaticClass, TEXT("/Script/CookBook"), TEXT("ABlueprintPropertyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlueprintPropertyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
