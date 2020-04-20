// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P557/Talker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTalker() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_UTalker_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_UTalker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_UTalker_StartTalking();
// End Cross Module References
	void ITalker::StartTalking()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartTalking instead.");
	}
	void UTalker::StaticRegisterNativesUTalker()
	{
		UClass* Class = UTalker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTalking", &ITalker::execStartTalking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTalker_StartTalking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTalker_StartTalking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Talk" },
		{ "ModuleRelativePath", "P557/Talker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTalker_StartTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTalker, nullptr, "StartTalking", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTalker_StartTalking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTalker_StartTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTalker_StartTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTalker_StartTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTalker_NoRegister()
	{
		return UTalker::StaticClass();
	}
	struct Z_Construct_UClass_UTalker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTalker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTalker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTalker_StartTalking, "StartTalking" }, // 1195848461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTalker_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "P557/Talker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTalker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITalker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTalker_Statics::ClassParams = {
		&UTalker::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTalker_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTalker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTalker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTalker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTalker, 3040963405);
	template<> COOKBOOK_API UClass* StaticClass<UTalker>()
	{
		return UTalker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTalker(Z_Construct_UClass_UTalker, &UTalker::StaticClass, TEXT("/Script/CookBook"), TEXT("UTalker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTalker);
	static FName NAME_UTalker_StartTalking = FName(TEXT("StartTalking"));
	void ITalker::Execute_StartTalking(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTalker::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTalker_StartTalking);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITalker*)(O->GetNativeInterfaceAddress(UTalker::StaticClass())))
		{
			I->StartTalking_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
