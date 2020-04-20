// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef COOKBOOK_TalkingPawn_generated_h
#error "TalkingPawn.generated.h already included, missing '#pragma once' in TalkingPawn.h"
#endif
#define COOKBOOK_TalkingPawn_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTalkOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTalkOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTalkOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTalkOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATalkingPawn(); \
	friend struct Z_Construct_UClass_ATalkingPawn_Statics; \
public: \
	DECLARE_CLASS(ATalkingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ATalkingPawn)


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATalkingPawn(); \
	friend struct Z_Construct_UClass_ATalkingPawn_Statics; \
public: \
	DECLARE_CLASS(ATalkingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ATalkingPawn)


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATalkingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATalkingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingPawn(ATalkingPawn&&); \
	NO_API ATalkingPawn(const ATalkingPawn&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingPawn(ATalkingPawn&&); \
	NO_API ATalkingPawn(const ATalkingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATalkingPawn)


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_14_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class ATalkingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P557_TalkingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
