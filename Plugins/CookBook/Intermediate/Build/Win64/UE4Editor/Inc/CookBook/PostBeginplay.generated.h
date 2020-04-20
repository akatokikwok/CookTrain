// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKBOOK_PostBeginplay_generated_h
#error "PostBeginplay.generated.h already included, missing '#pragma once' in PostBeginplay.h"
#endif
#define COOKBOOK_PostBeginplay_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPostBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPostBeginPlay(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPostBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPostBeginPlay(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostBeginplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostBeginplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostBeginplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBeginplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostBeginplay(UPostBeginplay&&); \
	NO_API UPostBeginplay(const UPostBeginplay&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostBeginplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostBeginplay(UPostBeginplay&&); \
	NO_API UPostBeginplay(const UPostBeginplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostBeginplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBeginplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostBeginplay)


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPostBeginplay(); \
	friend struct Z_Construct_UClass_UPostBeginplay_Statics; \
public: \
	DECLARE_CLASS(UPostBeginplay, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(UPostBeginplay)


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPostBeginplay() {} \
public: \
	typedef UPostBeginplay UClassType; \
	typedef IPostBeginplay ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPostBeginplay() {} \
public: \
	typedef UPostBeginplay UClassType; \
	typedef IPostBeginplay ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_10_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class UPostBeginplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P533_PostBeginplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
