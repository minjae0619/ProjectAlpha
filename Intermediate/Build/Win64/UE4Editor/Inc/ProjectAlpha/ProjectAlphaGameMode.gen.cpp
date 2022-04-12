// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectAlpha/ProjectAlphaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectAlphaGameMode() {}
// Cross Module References
	PROJECTALPHA_API UClass* Z_Construct_UClass_AProjectAlphaGameMode_NoRegister();
	PROJECTALPHA_API UClass* Z_Construct_UClass_AProjectAlphaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectAlpha();
// End Cross Module References
	void AProjectAlphaGameMode::StaticRegisterNativesAProjectAlphaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectAlphaGameMode_NoRegister()
	{
		return AProjectAlphaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectAlphaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectAlphaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectAlphaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectAlphaGameMode.h" },
		{ "ModuleRelativePath", "ProjectAlphaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectAlphaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectAlphaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectAlphaGameMode_Statics::ClassParams = {
		&AProjectAlphaGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjectAlphaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectAlphaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectAlphaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectAlphaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectAlphaGameMode, 2991042317);
	template<> PROJECTALPHA_API UClass* StaticClass<AProjectAlphaGameMode>()
	{
		return AProjectAlphaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectAlphaGameMode(Z_Construct_UClass_AProjectAlphaGameMode, &AProjectAlphaGameMode::StaticClass, TEXT("/Script/ProjectAlpha"), TEXT("AProjectAlphaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectAlphaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
