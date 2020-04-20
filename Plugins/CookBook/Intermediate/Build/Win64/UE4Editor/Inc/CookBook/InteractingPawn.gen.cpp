// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P518/InteractingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractingPawn() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_AInteractingPawn_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_AInteractingPawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_CookBook();
// End Cross Module References
	void AInteractingPawn::StaticRegisterNativesAInteractingPawn()
	{
	}
	UClass* Z_Construct_UClass_AInteractingPawn_NoRegister()
	{
		return AInteractingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AInteractingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "P518/InteractingPawn.h" },
		{ "ModuleRelativePath", "P518/InteractingPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractingPawn_Statics::ClassParams = {
		&AInteractingPawn::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractingPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInteractingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractingPawn, 2348903563);
	template<> COOKBOOK_API UClass* StaticClass<AInteractingPawn>()
	{
		return AInteractingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractingPawn(Z_Construct_UClass_AInteractingPawn, &AInteractingPawn::StaticClass, TEXT("/Script/CookBook"), TEXT("AInteractingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
