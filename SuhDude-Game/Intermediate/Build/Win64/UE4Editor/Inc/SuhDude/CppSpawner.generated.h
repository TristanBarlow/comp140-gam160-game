// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUHDUDE_CppSpawner_generated_h
#error "CppSpawner.generated.h already included, missing '#pragma once' in CppSpawner.h"
#endif
#define SUHDUDE_CppSpawner_generated_h

#define SuhDude_Source_SuhDude_CppSpawner_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWhatToSpawn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_score); \
		P_GET_PROPERTY(UIntProperty,Z_Param_difficulty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->WhatToSpawn(Z_Param_score,Z_Param_difficulty); \
		P_NATIVE_END; \
	}


#define SuhDude_Source_SuhDude_CppSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWhatToSpawn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_score); \
		P_GET_PROPERTY(UIntProperty,Z_Param_difficulty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->WhatToSpawn(Z_Param_score,Z_Param_difficulty); \
		P_NATIVE_END; \
	}


#define SuhDude_Source_SuhDude_CppSpawner_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesACppSpawner(); \
	friend SUHDUDE_API class UClass* Z_Construct_UClass_ACppSpawner(); \
	public: \
	DECLARE_CLASS(ACppSpawner, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SuhDude"), NO_API) \
	DECLARE_SERIALIZER(ACppSpawner) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SuhDude_Source_SuhDude_CppSpawner_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesACppSpawner(); \
	friend SUHDUDE_API class UClass* Z_Construct_UClass_ACppSpawner(); \
	public: \
	DECLARE_CLASS(ACppSpawner, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SuhDude"), NO_API) \
	DECLARE_SERIALIZER(ACppSpawner) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SuhDude_Source_SuhDude_CppSpawner_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACppSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACppSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppSpawner(ACppSpawner&&); \
	NO_API ACppSpawner(const ACppSpawner&); \
public:


#define SuhDude_Source_SuhDude_CppSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACppSpawner(ACppSpawner&&); \
	NO_API ACppSpawner(const ACppSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACppSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACppSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACppSpawner)


#define SuhDude_Source_SuhDude_CppSpawner_h_11_PRIVATE_PROPERTY_OFFSET
#define SuhDude_Source_SuhDude_CppSpawner_h_8_PROLOG
#define SuhDude_Source_SuhDude_CppSpawner_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SuhDude_Source_SuhDude_CppSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	SuhDude_Source_SuhDude_CppSpawner_h_11_RPC_WRAPPERS \
	SuhDude_Source_SuhDude_CppSpawner_h_11_INCLASS \
	SuhDude_Source_SuhDude_CppSpawner_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SuhDude_Source_SuhDude_CppSpawner_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SuhDude_Source_SuhDude_CppSpawner_h_11_PRIVATE_PROPERTY_OFFSET \
	SuhDude_Source_SuhDude_CppSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SuhDude_Source_SuhDude_CppSpawner_h_11_INCLASS_NO_PURE_DECLS \
	SuhDude_Source_SuhDude_CppSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SuhDude_Source_SuhDude_CppSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
