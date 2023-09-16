// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_GameStruct_generated_h
#error "GameStruct.generated.h already included, missing '#pragma once' in GameStruct.h"
#endif
#define BATTLETANK_GameStruct_generated_h

#define FID_battletank_Source_battletank_GameStruct_h_20_SPARSE_DATA
#define FID_battletank_Source_battletank_GameStruct_h_20_RPC_WRAPPERS
#define FID_battletank_Source_battletank_GameStruct_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_battletank_Source_battletank_GameStruct_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStruct(); \
	friend struct Z_Construct_UClass_UGameStruct_Statics; \
public: \
	DECLARE_CLASS(UGameStruct, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/battletank"), NO_API) \
	DECLARE_SERIALIZER(UGameStruct)


#define FID_battletank_Source_battletank_GameStruct_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGameStruct(); \
	friend struct Z_Construct_UClass_UGameStruct_Statics; \
public: \
	DECLARE_CLASS(UGameStruct, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/battletank"), NO_API) \
	DECLARE_SERIALIZER(UGameStruct)


#define FID_battletank_Source_battletank_GameStruct_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStruct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStruct); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStruct(UGameStruct&&); \
	NO_API UGameStruct(const UGameStruct&); \
public:


#define FID_battletank_Source_battletank_GameStruct_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStruct(UGameStruct&&); \
	NO_API UGameStruct(const UGameStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStruct)


#define FID_battletank_Source_battletank_GameStruct_h_17_PROLOG
#define FID_battletank_Source_battletank_GameStruct_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_battletank_Source_battletank_GameStruct_h_20_SPARSE_DATA \
	FID_battletank_Source_battletank_GameStruct_h_20_RPC_WRAPPERS \
	FID_battletank_Source_battletank_GameStruct_h_20_INCLASS \
	FID_battletank_Source_battletank_GameStruct_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_battletank_Source_battletank_GameStruct_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_battletank_Source_battletank_GameStruct_h_20_SPARSE_DATA \
	FID_battletank_Source_battletank_GameStruct_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_battletank_Source_battletank_GameStruct_h_20_INCLASS_NO_PURE_DECLS \
	FID_battletank_Source_battletank_GameStruct_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLETANK_API UClass* StaticClass<class UGameStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_battletank_Source_battletank_GameStruct_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireTrace) \
	op(ECannonType::FireProjectile) 

enum class ECannonType : uint8;
template<> BATTLETANK_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
