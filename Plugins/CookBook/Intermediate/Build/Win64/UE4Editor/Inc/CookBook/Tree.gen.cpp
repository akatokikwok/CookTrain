// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookBook/P620/Tree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree() {}
// Cross Module References
	COOKBOOK_API UEnum* Z_Construct_UEnum_CookBook_TreeEnum();
	UPackage* Z_Construct_UPackage__Script_CookBook();
	COOKBOOK_API UClass* Z_Construct_UClass_ATree_NoRegister();
	COOKBOOK_API UClass* Z_Construct_UClass_ATree();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
// End Cross Module References
	static UEnum* TreeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CookBook_TreeEnum, Z_Construct_UPackage__Script_CookBook(), TEXT("TreeEnum"));
		}
		return Singleton;
	}
	template<> COOKBOOK_API UEnum* StaticEnum<TreeEnum>()
	{
		return TreeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TreeEnum(TreeEnum_StaticEnum, TEXT("/Script/CookBook"), TEXT("TreeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CookBook_TreeEnum_Hash() { return 2174006182U; }
	UEnum* Z_Construct_UEnum_CookBook_TreeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CookBook();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TreeEnum"), 0, Get_Z_Construct_UEnum_CookBook_TreeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Tree_Poplar", (int64)Tree_Poplar },
				{ "Tree_Spruce", (int64)Tree_Spruce },
				{ "Tree_Eucalyptus", (int64)Tree_Eucalyptus },
				{ "Tree_Redwood", (int64)Tree_Redwood },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "P620/Tree.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CookBook,
				nullptr,
				"TreeEnum",
				"TreeEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATree::StaticRegisterNativesATree()
	{
	}
	UClass* Z_Construct_UClass_ATree_NoRegister()
	{
		return ATree::StaticClass();
	}
	struct Z_Construct_UClass_ATree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeEnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TreeEnumType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CookBook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "P620/Tree.h" },
		{ "ModuleRelativePath", "P620/Tree.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::NewProp_TreeEnumType_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "P620/Tree.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATree_Statics::NewProp_TreeEnumType = { "TreeEnumType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATree, TreeEnumType), Z_Construct_UEnum_CookBook_TreeEnum, METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::NewProp_TreeEnumType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::NewProp_TreeEnumType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATree_Statics::NewProp_TreeEnumType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATree_Statics::ClassParams = {
		&ATree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATree_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATree, 2274739631);
	template<> COOKBOOK_API UClass* StaticClass<ATree>()
	{
		return ATree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATree(Z_Construct_UClass_ATree, &ATree::StaticClass, TEXT("/Script/CookBook"), TEXT("ATree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
