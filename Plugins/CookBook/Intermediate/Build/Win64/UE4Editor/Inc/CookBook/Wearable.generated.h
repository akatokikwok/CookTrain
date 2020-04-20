// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef COOKBOOK_Wearable_generated_h
#error "Wearable.generated.h already included, missing '#pragma once' in Wearable.h"
#endif
#define COOKBOOK_Wearable_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_RPC_WRAPPERS \
	virtual void OnEquip_Implementation(APawn* Wearer) {}; \
	virtual bool CanEquip_Implementation(APawn* Wearer) { return false; }; \
	virtual int32 GetStrengtRequirement_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStrengtRequirement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStrengtRequirement_Implementation(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEquip_Implementation(APawn* Wearer) {}; \
	virtual bool CanEquip_Implementation(APawn* Wearer) { return false; }; \
	virtual int32 GetStrengtRequirement_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStrengtRequirement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStrengtRequirement_Implementation(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_EVENT_PARMS \
	struct Wearable_eventCanEquip_Parms \
	{ \
		APawn* Wearer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Wearable_eventCanEquip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Wearable_eventGetStrengtRequirement_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Wearable_eventGetStrengtRequirement_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Wearable_eventOnEquip_Parms \
	{ \
		APawn* Wearer; \
	};


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_CALLBACK_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UWearable(UWearable&&); \
	COOKBOOK_API UWearable(const UWearable&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UWearable(UWearable&&); \
	COOKBOOK_API UWearable(const UWearable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearable)


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWearable(); \
	friend struct Z_Construct_UClass_UWearable_Statics; \
public: \
	DECLARE_CLASS(UWearable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CookBook"), COOKBOOK_API) \
	DECLARE_SERIALIZER(UWearable)


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWearable() {} \
public: \
	typedef UWearable UClassType; \
	typedef IWearable ThisClass; \
	static bool Execute_CanEquip(UObject* O, APawn* Wearer); \
	static int32 Execute_GetStrengtRequirement(UObject* O); \
	static void Execute_OnEquip(UObject* O, APawn* Wearer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IWearable() {} \
public: \
	typedef UWearable UClassType; \
	typedef IWearable ThisClass; \
	static bool Execute_CanEquip(UObject* O, APawn* Wearer); \
	static int32 Execute_GetStrengtRequirement(UObject* O); \
	static void Execute_OnEquip(UObject* O, APawn* Wearer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_10_PROLOG \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_EVENT_PARMS


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class UWearable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P549_Wearable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
