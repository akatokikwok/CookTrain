// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef COOKBOOK_Spotter_generated_h
#error "Spotter.generated.h already included, missing '#pragma once' in Spotter.h"
#endif
#define COOKBOOK_Spotter_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_RPC_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_EVENT_PARMS \
	struct Spotter_eventOnPlayerSpotted_Parms \
	{ \
		APawn* Player; \
	};


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_CALLBACK_WRAPPERS
#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpotter(); \
	friend struct Z_Construct_UClass_ASpotter_Statics; \
public: \
	DECLARE_CLASS(ASpotter, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ASpotter)


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpotter(); \
	friend struct Z_Construct_UClass_ASpotter_Statics; \
public: \
	DECLARE_CLASS(ASpotter, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(ASpotter)


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpotter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpotter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpotter(ASpotter&&); \
	NO_API ASpotter(const ASpotter&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpotter(ASpotter&&); \
	NO_API ASpotter(const ASpotter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpotter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpotter)


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_12_PROLOG \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_EVENT_PARMS


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_CALLBACK_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class ASpotter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_P597_Spotter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
