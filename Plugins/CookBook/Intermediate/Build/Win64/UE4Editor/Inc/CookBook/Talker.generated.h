// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKBOOK_Talker_generated_h
#error "Talker.generated.h already included, missing '#pragma once' in Talker.h"
#endif
#define COOKBOOK_Talker_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_RPC_WRAPPERS \
	virtual void StartTalking_Implementation() {}; \
 \
	DECLARE_FUNCTION(execStartTalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTalking_Implementation(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartTalking_Implementation() {}; \
 \
	DECLARE_FUNCTION(execStartTalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTalking_Implementation(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_EVENT_PARMS
#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_CALLBACK_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTalker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UTalker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTalker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UTalker(UTalker&&); \
	COOKBOOK_API UTalker(const UTalker&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UTalker(UTalker&&); \
	COOKBOOK_API UTalker(const UTalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UTalker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTalker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTalker)


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTalker(); \
	friend struct Z_Construct_UClass_UTalker_Statics; \
public: \
	DECLARE_CLASS(UTalker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CookBook"), COOKBOOK_API) \
	DECLARE_SERIALIZER(UTalker)


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITalker() {} \
public: \
	typedef UTalker UClassType; \
	typedef ITalker ThisClass; \
	static void Execute_StartTalking(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITalker() {} \
public: \
	typedef UTalker UClassType; \
	typedef ITalker ThisClass; \
	static void Execute_StartTalking(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_10_PROLOG \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_EVENT_PARMS


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class UTalker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P557_Talker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
