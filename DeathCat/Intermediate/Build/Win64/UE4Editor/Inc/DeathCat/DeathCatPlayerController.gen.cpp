// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeathCat/DeathCatPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathCatPlayerController() {}
// Cross Module References
	DEATHCAT_API UClass* Z_Construct_UClass_ADeathCatPlayerController_NoRegister();
	DEATHCAT_API UClass* Z_Construct_UClass_ADeathCatPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DeathCat();
// End Cross Module References
	void ADeathCatPlayerController::StaticRegisterNativesADeathCatPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ADeathCatPlayerController_NoRegister()
	{
		return ADeathCatPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADeathCatPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeathCatPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DeathCat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathCatPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DeathCatPlayerController.h" },
		{ "ModuleRelativePath", "DeathCatPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeathCatPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathCatPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeathCatPlayerController_Statics::ClassParams = {
		&ADeathCatPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeathCatPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathCatPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeathCatPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeathCatPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeathCatPlayerController, 1966185009);
	template<> DEATHCAT_API UClass* StaticClass<ADeathCatPlayerController>()
	{
		return ADeathCatPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeathCatPlayerController(Z_Construct_UClass_ADeathCatPlayerController, &ADeathCatPlayerController::StaticClass, TEXT("/Script/DeathCat"), TEXT("ADeathCatPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathCatPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
