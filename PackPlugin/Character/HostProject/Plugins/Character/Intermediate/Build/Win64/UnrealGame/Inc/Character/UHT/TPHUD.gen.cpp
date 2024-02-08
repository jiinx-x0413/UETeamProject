// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/TPHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPHUD() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ATPHUD();
	CHARACTER_API UClass* Z_Construct_UClass_ATPHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void ATPHUD::StaticRegisterNativesATPHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPHUD);
	UClass* Z_Construct_UClass_ATPHUD_NoRegister()
	{
		return ATPHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TPHUD.h" },
		{ "ModuleRelativePath", "Public/TPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPHUD_Statics::ClassParams = {
		&ATPHUD::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATPHUD()
	{
		if (!Z_Registration_Info_UClass_ATPHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPHUD.OuterSingleton, Z_Construct_UClass_ATPHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPHUD.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ATPHUD>()
	{
		return ATPHUD::StaticClass();
	}
	ATPHUD::ATPHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPHUD);
	ATPHUD::~ATPHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPHUD, ATPHUD::StaticClass, TEXT("ATPHUD"), &Z_Registration_Info_UClass_ATPHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPHUD), 2496908117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPHUD_h_2871525491(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
