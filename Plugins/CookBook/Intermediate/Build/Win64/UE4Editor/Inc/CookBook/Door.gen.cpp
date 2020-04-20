// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P518/Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	COOKBOOK_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_ADoor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UFunction* Z_Construct_UFunction_ADoor_Can_Interact_Implementation();
	COOKBOOK_API UFunction* Z_Construct_UFunction_ADoor_Open_Implementation();
	COOKBOOK_API UFunction* Z_Construct_UFunction_ADoor_PerformInteract_Implementation();
	COOKBOOK_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_UOpenable_NoRegister();
// End Cross Module References
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Can_Interact_Implementation", &ADoor::execCan_Interact_Implementation },
			{ "Open_Implementation", &ADoor::execOpen_Implementation },
			{ "PerformInteract_Implementation", &ADoor::execPerformInteract_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics
	{
		struct Door_eventCan_Interact_Implementation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Door_eventCan_Interact_Implementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Door_eventCan_Interact_Implementation_Parms), &Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "P518/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "Can_Interact_Implementation", sizeof(Door_eventCan_Interact_Implementation_Parms), Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_Can_Interact_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_Can_Interact_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_Open_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_Open_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "P518/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_Open_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "Open_Implementation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_Open_Implementation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoor_Open_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_Open_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_Open_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_PerformInteract_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_PerformInteract_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "P518/Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_PerformInteract_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "PerformInteract_Implementation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_PerformInteract_Implementation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoor_PerformInteract_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_PerformInteract_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_PerformInteract_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_Can_Interact_Implementation, "Can_Interact_Implementation" }, // 1935455846
		{ &Z_Construct_UFunction_ADoor_Open_Implementation, "Open_Implementation" }, // 3700600022
		{ &Z_Construct_UFunction_ADoor_PerformInteract_Implementation, "PerformInteract_Implementation" }, // 2496661441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P518/Door.h" },
		{ "ModuleRelativePath", "P518/Door.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ADoor, IInteractable), false },
			{ Z_Construct_UClass_UOpenable_NoRegister, (int32)VTABLE_OFFSET(ADoor, IOpenable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoor, 2676768550);
	template<> COOKBOOK_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoor(Z_Construct_UClass_ADoor, &ADoor::StaticClass, TEXT("/Script/CookBook"), TEXT("ADoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
