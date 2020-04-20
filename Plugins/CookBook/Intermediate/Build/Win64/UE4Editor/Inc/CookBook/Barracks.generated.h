// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKBOOK_Barracks_generated_h
#error "Barracks.generated.h already included, missing '#pragma once' in Barracks.h"
#endif
#define COOKBOOK_Barracks_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnUnit(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnUnit(); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarracks(); \
	friend struct Z_Construct_UClass_ABarracks_Statics; \
public: \
	DECLARE_CLASS(ABarracks, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ABarracks)


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABarracks(); \
	friend struct Z_Construct_UClass_ABarracks_Statics; \
public: \
	DECLARE_CLASS(ABarracks, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ABarracks)


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarracks(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarracks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarracks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarracks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarracks(ABarracks&&); \
	NO_API ABarracks(const ABarracks&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarracks(ABarracks&&); \
	NO_API ABarracks(const ABarracks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarracks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarracks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarracks)


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_12_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class ABarracks>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P326_Barracks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
