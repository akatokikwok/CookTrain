// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AKing;
#ifdef COOKBOOK_King_generated_h
#error "King.generated.h already included, missing '#pragma once' in King.h"
#endif
#define COOKBOOK_King_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_12_DELEGATE \
struct _Script_CookBook_eventOnKingDeathSignature_Parms \
{ \
	AKing* DeadKing; \
}; \
static inline void FOnKingDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnKingDeathSignature, AKing* DeadKing) \
{ \
	_Script_CookBook_eventOnKingDeathSignature_Parms Parms; \
	Parms.DeadKing=DeadKing; \
	OnKingDeathSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Die(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Die(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKing(); \
	friend struct Z_Construct_UClass_AKing_Statics; \
public: \
	DECLARE_CLASS(AKing, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(AKing)


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAKing(); \
	friend struct Z_Construct_UClass_AKing_Statics; \
public: \
	DECLARE_CLASS(AKing, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(AKing)


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKing(AKing&&); \
	NO_API AKing(const AKing&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKing(AKing&&); \
	NO_API AKing(const AKing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKing)


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_15_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class AKing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P605_King_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
