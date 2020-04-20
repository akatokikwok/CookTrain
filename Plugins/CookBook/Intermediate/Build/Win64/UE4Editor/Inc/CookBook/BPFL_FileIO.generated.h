// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOKBOOK_BPFL_FileIO_generated_h
#error "BPFL_FileIO.generated.h already included, missing '#pragma once' in BPFL_FileIO.h"
#endif
#define COOKBOOK_BPFL_FileIO_generated_h

#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadFileToStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBPFL_FileIO::LoadFileToStringArray(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBPFL_FileIO::LoadFileToString(Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadFileToStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBPFL_FileIO::LoadFileToStringArray(Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBPFL_FileIO::LoadFileToString(Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPFL_FileIO(); \
	friend struct Z_Construct_UClass_UBPFL_FileIO_Statics; \
public: \
	DECLARE_CLASS(UBPFL_FileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(UBPFL_FileIO)


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBPFL_FileIO(); \
	friend struct Z_Construct_UClass_UBPFL_FileIO_Statics; \
public: \
	DECLARE_CLASS(UBPFL_FileIO, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CookBook"), NO_API) \
	DECLARE_SERIALIZER(UBPFL_FileIO)


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL_FileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL_FileIO) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL_FileIO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL_FileIO); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFL_FileIO(UBPFL_FileIO&&); \
	NO_API UBPFL_FileIO(const UBPFL_FileIO&); \
public:


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL_FileIO(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFL_FileIO(UBPFL_FileIO&&); \
	NO_API UBPFL_FileIO(const UBPFL_FileIO&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL_FileIO); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL_FileIO); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL_FileIO)


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_PRIVATE_PROPERTY_OFFSET
#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_13_PROLOG
#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_RPC_WRAPPERS \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_INCLASS \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_PRIVATE_PROPERTY_OFFSET \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_INCLASS_NO_PURE_DECLS \
	CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOKBOOK_API UClass* StaticClass<class UBPFL_FileIO>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CookTrain_Plugins_CookBook_Source_CookBook_UpdateDataFromFileRuntime_BPFL_FileIO_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
