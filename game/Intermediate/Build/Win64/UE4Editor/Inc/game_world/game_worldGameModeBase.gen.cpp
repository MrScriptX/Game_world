// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "game_worldGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegame_worldGameModeBase() {}
// Cross Module References
	GAME_WORLD_API UClass* Z_Construct_UClass_Agame_worldGameModeBase_NoRegister();
	GAME_WORLD_API UClass* Z_Construct_UClass_Agame_worldGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_game_world();
// End Cross Module References
	void Agame_worldGameModeBase::StaticRegisterNativesAgame_worldGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Agame_worldGameModeBase_NoRegister()
	{
		return Agame_worldGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_Agame_worldGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_game_world,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "game_worldGameModeBase.h" },
				{ "ModuleRelativePath", "game_worldGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Agame_worldGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Agame_worldGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agame_worldGameModeBase, 3698989444);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agame_worldGameModeBase(Z_Construct_UClass_Agame_worldGameModeBase, &Agame_worldGameModeBase::StaticClass, TEXT("/Script/game_world"), TEXT("Agame_worldGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agame_worldGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
