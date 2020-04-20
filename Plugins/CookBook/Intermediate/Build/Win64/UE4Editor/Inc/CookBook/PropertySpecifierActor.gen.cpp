// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P630/PropertySpecifierActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertySpecifierActor() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_APropertySpecifierActor_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_APropertySpecifierActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
// End Cross Module References
	void APropertySpecifierActor::StaticRegisterNativesAPropertySpecifierActor()
	{
	}
	UClass* Z_Construct_UClass_APropertySpecifierActor_NoRegister()
	{
		return APropertySpecifierActor::StaticClass();
	}
	struct Z_Construct_UClass_APropertySpecifierActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhere_MetaData[];
#endif
		static void NewProp_VisibleAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnly_MetaData[];
#endif
		static void NewProp_VisibleInstanceOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnly_MetaData[];
#endif
		static void NewProp_VisibleDefaultsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditAnywhere_MetaData[];
#endif
		static void NewProp_EditAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EditAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnly_MetaData[];
#endif
		static void NewProp_EditInstanceOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EditInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnly_MetaData[];
#endif
		static void NewProp_EditDefaultsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EditDefaultsOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APropertySpecifierActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P630/PropertySpecifierActor.h" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->VisibleAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere = { "VisibleAnywhere", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->VisibleInstanceOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly = { "VisibleInstanceOnly", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->VisibleDefaultsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly = { "VisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->EditAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere = { "EditAnywhere", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->EditInstanceOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly = { "EditInstanceOnly", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "P630/PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->EditDefaultsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly = { "EditDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APropertySpecifierActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_VisibleDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_EditDefaultsOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APropertySpecifierActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APropertySpecifierActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APropertySpecifierActor_Statics::ClassParams = {
		&APropertySpecifierActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APropertySpecifierActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APropertySpecifierActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APropertySpecifierActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APropertySpecifierActor, 2531101276);
	template<> COOKBOOK_API UClass* StaticClass<APropertySpecifierActor>()
	{
		return APropertySpecifierActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APropertySpecifierActor(Z_Construct_UClass_APropertySpecifierActor, &APropertySpecifierActor::StaticClass, TEXT("/Script/CookBook"), TEXT("APropertySpecifierActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APropertySpecifierActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
