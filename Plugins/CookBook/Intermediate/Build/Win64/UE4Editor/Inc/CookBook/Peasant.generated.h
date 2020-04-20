// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AKing;
#ifdef COOKBOOK_Peasant_generated_h
#error "Peasant.generated.h already included, missing '#pragma once' in Peasant.h"
#endif
#define COOKBOOK_Peasant_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlee) \
	{ \
		P_GET_OBJECT(AKing,Z_Param_DeadKing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Flee(Z_Param_DeadKing); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlee) \
	{ \
		P_GET_OBJECT(AKing,Z_Param_DeadKing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Flee(Z_Param_DeadKing); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPeasant(); \
	friend struct Z_Construct_UClass_APeasant_Statics; \
public: \
	DECLARE_CLASS(APeasant, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(APeasant)


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPeasant(); \
	friend struct Z_Construct_UClass_APeasant_Statics; \
public: \
	DECLARE_CLASS(APeasant, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(APeasant)


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APeasant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APeasant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APeasant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APeasant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APeasant(APeasant&&); \
	NO_API APeasant(const APeasant&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APeasant(APeasant&&); \
	NO_API APeasant(const APeasant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APeasant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APeasant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APeasant)


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_13_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class APeasant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P605_Peasant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
