// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelUp_Vehicle/FirstVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstVehicle() {}
// Cross Module References
	LEVELUP_VEHICLE_API UClass* Z_Construct_UClass_AFirstVehicle_NoRegister();
	LEVELUP_VEHICLE_API UClass* Z_Construct_UClass_AFirstVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_LevelUp_Vehicle();
// End Cross Module References
	void AFirstVehicle::StaticRegisterNativesAFirstVehicle()
	{
	}
	UClass* Z_Construct_UClass_AFirstVehicle_NoRegister()
	{
		return AFirstVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AFirstVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelUp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstVehicle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstVehicle.h" },
		{ "ModuleRelativePath", "FirstVehicle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstVehicle_Statics::ClassParams = {
		&AFirstVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstVehicle, 807944461);
	template<> LEVELUP_VEHICLE_API UClass* StaticClass<AFirstVehicle>()
	{
		return AFirstVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstVehicle(Z_Construct_UClass_AFirstVehicle, &AFirstVehicle::StaticClass, TEXT("/Script/LevelUp_Vehicle"), TEXT("AFirstVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
