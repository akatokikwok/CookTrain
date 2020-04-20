// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P590/SlidingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlidingDoor() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_ASlidingDoor_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_ASlidingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_ASlidingDoor_Open();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASlidingDoor::StaticRegisterNativesASlidingDoor()
	{
		UClass* Class = ASlidingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Open", &ASlidingDoor::execOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASlidingDoor_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASlidingDoor_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "P590/SlidingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlidingDoor_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlidingDoor, nullptr, "Open", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASlidingDoor_Open_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASlidingDoor_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASlidingDoor_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASlidingDoor_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASlidingDoor_NoRegister()
	{
		return ASlidingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASlidingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpen_MetaData[];
#endif
		static void NewProp_IsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlidingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASlidingDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASlidingDoor_Open, "Open" }, // 3085233759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P590/SlidingDoor.h" },
		{ "ModuleRelativePath", "P590/SlidingDoor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "P590/SlidingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASlidingDoor, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen_MetaData[] = {
		{ "ModuleRelativePath", "P590/SlidingDoor.h" },
	};
#endif
	void Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen_SetBit(void* Obj)
	{
		((ASlidingDoor*)Obj)->IsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen = { "IsOpen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASlidingDoor), &Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlidingDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlidingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlidingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlidingDoor_Statics::ClassParams = {
		&ASlidingDoor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASlidingDoor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlidingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlidingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlidingDoor, 571412002);
	template<> COOKBOOK_API UClass* StaticClass<ASlidingDoor>()
	{
		return ASlidingDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlidingDoor(Z_Construct_UClass_ASlidingDoor, &ASlidingDoor::StaticClass, TEXT("/Script/CookBook"), TEXT("ASlidingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlidingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
