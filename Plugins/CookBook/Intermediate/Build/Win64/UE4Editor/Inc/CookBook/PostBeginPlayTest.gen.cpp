// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P533/PostBeginPlayTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostBeginPlayTest() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_APostBeginPlayTest_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_APostBeginPlayTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UClass* Z_Construct_UClass_UPostBeginplay_NoRegister();
// End Cross Module References
	void APostBeginPlayTest::StaticRegisterNativesAPostBeginPlayTest()
	{
	}
	UClass* Z_Construct_UClass_APostBeginPlayTest_NoRegister()
	{
		return APostBeginPlayTest::StaticClass();
	}
	struct Z_Construct_UClass_APostBeginPlayTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostBeginPlayTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostBeginPlayTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P533/PostBeginPlayTest.h" },
		{ "ModuleRelativePath", "P533/PostBeginPlayTest.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APostBeginPlayTest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPostBeginplay_NoRegister, (int32)VTABLE_OFFSET(APostBeginPlayTest, IPostBeginplay), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostBeginPlayTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostBeginPlayTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostBeginPlayTest_Statics::ClassParams = {
		&APostBeginPlayTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APostBeginPlayTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APostBeginPlayTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostBeginPlayTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostBeginPlayTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostBeginPlayTest, 1979111411);
	template<> COOKBOOK_API UClass* StaticClass<APostBeginPlayTest>()
	{
		return APostBeginPlayTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostBeginPlayTest(Z_Construct_UClass_APostBeginPlayTest, &APostBeginPlayTest::StaticClass, TEXT("/Script/CookBook"), TEXT("APostBeginPlayTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostBeginPlayTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
