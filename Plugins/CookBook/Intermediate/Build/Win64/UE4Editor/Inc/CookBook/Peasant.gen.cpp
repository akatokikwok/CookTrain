// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P605/Peasant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeasant() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_APeasant_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_APeasant();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_APeasant_Flee();
	COOKBOOK_API UClass* Z_Construct_UClass_AKing_NoRegister();
// End Cross Module References
	void APeasant::StaticRegisterNativesAPeasant()
	{
		UClass* Class = APeasant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Flee", &APeasant::execFlee },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APeasant_Flee_Statics
	{
		struct Peasant_eventFlee_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APeasant_Flee_Statics::NewProp_DeadKing = { "DeadKing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Peasant_eventFlee_Parms, DeadKing), Z_Construct_UClass_AKing_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APeasant_Flee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APeasant_Flee_Statics::NewProp_DeadKing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APeasant_Flee_Statics::Function_MetaDataParams[] = {
		{ "Category", "Peasant" },
		{ "ModuleRelativePath", "P605/Peasant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APeasant_Flee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APeasant, nullptr, "Flee", sizeof(Peasant_eventFlee_Parms), Z_Construct_UFunction_APeasant_Flee_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APeasant_Flee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APeasant_Flee_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APeasant_Flee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APeasant_Flee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APeasant_Flee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APeasant_NoRegister()
	{
		return APeasant::StaticClass();
	}
	struct Z_Construct_UClass_APeasant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeasant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APeasant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APeasant_Flee, "Flee" }, // 2254897032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeasant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P605/Peasant.h" },
		{ "ModuleRelativePath", "P605/Peasant.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeasant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeasant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeasant_Statics::ClassParams = {
		&APeasant::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APeasant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APeasant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeasant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeasant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeasant, 2665423157);
	template<> COOKBOOK_API UClass* StaticClass<APeasant>()
	{
		return APeasant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeasant(Z_Construct_UClass_APeasant, &APeasant::StaticClass, TEXT("/Script/CookBook"), TEXT("APeasant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeasant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
