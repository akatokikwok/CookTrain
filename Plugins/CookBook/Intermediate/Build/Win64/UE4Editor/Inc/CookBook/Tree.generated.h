// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKBOOK_Tree_generated_h
#error "Tree.generated.h already included, missing '#pragma once' in Tree.h"
#endif
#define COOKBOOK_Tree_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_RPC_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATree)


#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_21_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class ATree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P620_Tree_h


#define FOREACH_ENUM_TREEENUM(op) \
	op(Tree_Poplar) \
	op(Tree_Spruce) \
	op(Tree_Eucalyptus) \
	op(Tree_Redwood) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
