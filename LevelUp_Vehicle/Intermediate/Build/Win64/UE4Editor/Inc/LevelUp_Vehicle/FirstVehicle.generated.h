// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELUP_VEHICLE_FirstVehicle_generated_h
#error "FirstVehicle.generated.h already included, missing '#pragma once' in FirstVehicle.h"
#endif
#define LEVELUP_VEHICLE_FirstVehicle_generated_h

#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_SPARSE_DATA
#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_RPC_WRAPPERS
#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstVehicle(); \
	friend struct Z_Construct_UClass_AFirstVehicle_Statics; \
public: \
	DECLARE_CLASS(AFirstVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelUp_Vehicle"), NO_API) \
	DECLARE_SERIALIZER(AFirstVehicle)


#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstVehicle(); \
	friend struct Z_Construct_UClass_AFirstVehicle_Statics; \
public: \
	DECLARE_CLASS(AFirstVehicle, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelUp_Vehicle"), NO_API) \
	DECLARE_SERIALIZER(AFirstVehicle)


#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstVehicle(AFirstVehicle&&); \
	NO_API AFirstVehicle(const AFirstVehicle&); \
public:


#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstVehicle(AFirstVehicle&&); \
	NO_API AFirstVehicle(const AFirstVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstVehicle)


#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AFirstVehicle, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFirstVehicle, Camera); }


#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_12_PROLOG
#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_PRIVATE_PROPERTY_OFFSET \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_SPARSE_DATA \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_RPC_WRAPPERS \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_INCLASS \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_PRIVATE_PROPERTY_OFFSET \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_SPARSE_DATA \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_INCLASS_NO_PURE_DECLS \
	LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELUP_VEHICLE_API UClass* StaticClass<class AFirstVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LevelUp_Vehicle_Source_LevelUp_Vehicle_FirstVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
