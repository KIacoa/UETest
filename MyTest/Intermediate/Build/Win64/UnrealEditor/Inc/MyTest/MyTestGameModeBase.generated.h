// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTEST_MyTestGameModeBase_generated_h
#error "MyTestGameModeBase.generated.h already included, missing '#pragma once' in MyTestGameModeBase.h"
#endif
#define MYTEST_MyTestGameModeBase_generated_h

#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_SPARSE_DATA
#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_RPC_WRAPPERS
#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestGameModeBase(); \
	friend struct Z_Construct_UClass_AMyTestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameModeBase)


#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTestGameModeBase(); \
	friend struct Z_Construct_UClass_AMyTestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyTestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTest"), NO_API) \
	DECLARE_SERIALIZER(AMyTestGameModeBase)


#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestGameModeBase(AMyTestGameModeBase&&); \
	NO_API AMyTestGameModeBase(const AMyTestGameModeBase&); \
public:


#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTestGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestGameModeBase(AMyTestGameModeBase&&); \
	NO_API AMyTestGameModeBase(const AMyTestGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTestGameModeBase)


#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_12_PROLOG
#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_SPARSE_DATA \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_RPC_WRAPPERS \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_INCLASS \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_SPARSE_DATA \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyTest_Source_MyTest_MyTestGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTEST_API UClass* StaticClass<class AMyTestGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyTest_Source_MyTest_MyTestGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
