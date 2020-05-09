// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Project/Unreal_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_ProjectGameModeBase() {}
// Cross Module References
	UNREAL_PROJECT_API UClass* Z_Construct_UClass_AUnreal_ProjectGameModeBase_NoRegister();
	UNREAL_PROJECT_API UClass* Z_Construct_UClass_AUnreal_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal_Project();
// End Cross Module References
	void AUnreal_ProjectGameModeBase::StaticRegisterNativesAUnreal_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnreal_ProjectGameModeBase_NoRegister()
	{
		return AUnreal_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Unreal_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "Unreal_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_ProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::ClassParams = {
		&AUnreal_ProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnreal_ProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnreal_ProjectGameModeBase, 3511041985);
	template<> UNREAL_PROJECT_API UClass* StaticClass<AUnreal_ProjectGameModeBase>()
	{
		return AUnreal_ProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnreal_ProjectGameModeBase(Z_Construct_UClass_AUnreal_ProjectGameModeBase, &AUnreal_ProjectGameModeBase::StaticClass, TEXT("/Script/Unreal_Project"), TEXT("AUnreal_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
