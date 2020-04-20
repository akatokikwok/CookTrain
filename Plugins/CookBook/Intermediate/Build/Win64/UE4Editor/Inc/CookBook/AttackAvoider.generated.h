// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COOKBOOK_AttackAvoider_generated_h
#error "AttackAvoider.generated.h already included, missing '#pragma once' in AttackAvoider.h"
#endif
#define COOKBOOK_AttackAvoider_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_RPC_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_EVENT_PARMS \
	struct AttackAvoider_eventAttackInComing_Parms \
	{ \
		AActor* AttackActor; \
	};


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_CALLBACK_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UAttackAvoider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackAvoider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UAttackAvoider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackAvoider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UAttackAvoider(UAttackAvoider&&); \
	COOKBOOK_API UAttackAvoider(const UAttackAvoider&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COOKBOOK_API UAttackAvoider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COOKBOOK_API UAttackAvoider(UAttackAvoider&&); \
	COOKBOOK_API UAttackAvoider(const UAttackAvoider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COOKBOOK_API, UAttackAvoider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackAvoider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackAvoider)


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAttackAvoider(); \
	friend struct Z_Construct_UClass_UAttackAvoider_Statics; \
public: \
	DECLARE_CLASS(UAttackAvoider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CookBook"), COOKBOOK_API) \
	DECLARE_SERIALIZER(UAttackAvoider)


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_GENERATED_UINTERFACE_BODY() \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAttackAvoider() {} \
public: \
	typedef UAttackAvoider UClassType; \
	typedef IAttackAvoider ThisClass; \
	static void Execute_AttackInComing(UObject* O, AActor* AttackActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAttackAvoider() {} \
public: \
	typedef UAttackAvoider UClassType; \
	typedef IAttackAvoider ThisClass; \
	static void Execute_AttackInComing(UObject* O, AActor* AttackActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_10_PROLOG \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_EVENT_PARMS


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class UAttackAvoider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P540_AttackAvoider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
