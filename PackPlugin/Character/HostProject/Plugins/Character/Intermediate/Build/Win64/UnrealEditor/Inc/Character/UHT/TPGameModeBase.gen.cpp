// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/TPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPGameModeBase() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ATPGameModeBase();
	CHARACTER_API UClass* Z_Construct_UClass_ATPGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void ATPGameModeBase::StaticRegisterNativesATPGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPGameModeBase);
	UClass* Z_Construct_UClass_ATPGameModeBase_NoRegister()
	{
		return ATPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPGameModeBase.h" },
		{ "ModuleRelativePath", "Public/TPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPGameModeBase_Statics::ClassParams = {
		&ATPGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATPGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATPGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPGameModeBase.OuterSingleton, Z_Construct_UClass_ATPGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPGameModeBase.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ATPGameModeBase>()
	{
		return ATPGameModeBase::StaticClass();
	}
	ATPGameModeBase::ATPGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPGameModeBase);
	ATPGameModeBase::~ATPGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPGameModeBase, ATPGameModeBase::StaticClass, TEXT("ATPGameModeBase"), &Z_Registration_Info_UClass_ATPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPGameModeBase), 2944152305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPGameModeBase_h_2082045954(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
