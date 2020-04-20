// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/UpdateDataFromFileRuntime/BPFL_FileIO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFL_FileIO() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_UBPFL_FileIO_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_UBPFL_FileIO();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString();
	COOKBOOK_API UFunction* Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray();
// End Cross Module References
	void UBPFL_FileIO::StaticRegisterNativesUBPFL_FileIO()
	{
		UClass* Class = UBPFL_FileIO::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileToString", &UBPFL_FileIO::execLoadFileToString },
			{ "LoadFileToStringArray", &UBPFL_FileIO::execLoadFileToStringArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics
	{
		struct BPFL_FileIO_eventLoadFileToString_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_FileIO_eventLoadFileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_FileIO_eventLoadFileToString_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "UpdateDataFromFileRuntime/BPFL_FileIO.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL_FileIO, nullptr, "LoadFileToString", sizeof(BPFL_FileIO_eventLoadFileToString_Parms), Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics
	{
		struct BPFL_FileIO_eventLoadFileToStringArray_Parms
		{
			FString Filename;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_FileIO_eventLoadFileToStringArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPFL_FileIO_eventLoadFileToStringArray_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "UpdateDataFromFileRuntime/BPFL_FileIO.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL_FileIO, nullptr, "LoadFileToStringArray", sizeof(BPFL_FileIO_eventLoadFileToStringArray_Parms), Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPFL_FileIO_NoRegister()
	{
		return UBPFL_FileIO::StaticClass();
	}
	struct Z_Construct_UClass_UBPFL_FileIO_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFL_FileIO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFL_FileIO_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFL_FileIO_LoadFileToString, "LoadFileToString" }, // 3400247818
		{ &Z_Construct_UFunction_UBPFL_FileIO_LoadFileToStringArray, "LoadFileToStringArray" }, // 1581604531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFL_FileIO_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UpdateDataFromFileRuntime/BPFL_FileIO.h" },
		{ "ModuleRelativePath", "UpdateDataFromFileRuntime/BPFL_FileIO.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFL_FileIO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFL_FileIO>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPFL_FileIO_Statics::ClassParams = {
		&UBPFL_FileIO::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPFL_FileIO_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBPFL_FileIO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFL_FileIO()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPFL_FileIO_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPFL_FileIO, 1053344763);
	template<> COOKBOOK_API UClass* StaticClass<UBPFL_FileIO>()
	{
		return UBPFL_FileIO::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPFL_FileIO(Z_Construct_UClass_UBPFL_FileIO, &UBPFL_FileIO::StaticClass, TEXT("/Script/CookBook"), TEXT("UBPFL_FileIO"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFL_FileIO);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
