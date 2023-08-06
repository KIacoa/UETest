// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_TestCharacter_generated_h
#error "TestCharacter.generated.h already included, missing '#pragma once' in TestCharacter.h"
#endif
#define MYTEST_TestCharacter_generated_h

#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_SPARSE_DATA
#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_RPC_WRAPPERS
#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCharacter(ATestCharacter&&); \
	NO_API ATestCharacter(const ATestCharacter&); \
public:


#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCharacter(ATestCharacter&&); \
	NO_API ATestCharacter(const ATestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCharacter)


#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_9_PROLOG
#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_SPARSE_DATA \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_RPC_WRAPPERS \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_INCLASS \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_SPARSE_DATA \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyTest_Source_MyTest_Public_TestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class ATestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyTest_Source_MyTest_Public_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
