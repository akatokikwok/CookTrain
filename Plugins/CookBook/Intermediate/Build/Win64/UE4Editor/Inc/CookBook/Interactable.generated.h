// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKBOOK_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define COOKBOOK_Interactable_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_RPC_WRAPPERS \
	virtual void PerformInteract_Implementation() {}; \
	virtual bool Can_Interact_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPerformInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCan_Interact) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Can_Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformInteract_Implementation() {}; \
	virtual bool Can_Interact_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPerformInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCan_Interact) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Can_Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_EVENT_PARMS \
	struct Interactable_eventCan_Interact_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventCan_Interact_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_CALLBACK_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UInteractable(UInteractable&&); \
	COOKBOOK_API UInteractable(const UInteractable&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UInteractable(UInteractable&&); \
	COOKBOOK_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CookBook"), COOKBOOK_API) \
	DECLARE_SERIALIZER(UInteractable)


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static bool Execute_Can_Interact(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static bool Execute_Can_Interact(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_10_PROLOG \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_EVENT_PARMS


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P518_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
