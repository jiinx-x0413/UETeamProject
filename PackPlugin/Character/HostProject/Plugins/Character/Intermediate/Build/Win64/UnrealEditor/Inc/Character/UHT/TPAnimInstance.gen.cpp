// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/TPAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPAnimInstance() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_UTPAnimInstance();
	CHARACTER_API UClass* Z_Construct_UClass_UTPAnimInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void UTPAnimInstance::StaticRegisterNativesUTPAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPAnimInstance);
	UClass* Z_Construct_UClass_UTPAnimInstance_NoRegister()
	{
		return UTPAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTPAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMove_MetaData[];
#endif
		static void NewProp_ShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[];
#endif
		static void NewProp_IsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TPAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TPAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/TPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_GroundSpeed_MetaData), Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_GroundSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/TPAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove_SetBit(void* Obj)
	{
		((UTPAnimInstance*)Obj)->ShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove = { "ShouldMove", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTPAnimInstance), &Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove_MetaData), Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/TPAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
	{
		((UTPAnimInstance*)Obj)->IsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTPAnimInstance), &Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling_MetaData), Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Public/TPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_Velocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTPAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_ShouldMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_IsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPAnimInstance_Statics::NewProp_Velocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPAnimInstance_Statics::ClassParams = {
		&UTPAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTPAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTPAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UTPAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPAnimInstance.OuterSingleton, Z_Construct_UClass_UTPAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPAnimInstance.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<UTPAnimInstance>()
	{
		return UTPAnimInstance::StaticClass();
	}
	UTPAnimInstance::UTPAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPAnimInstance);
	UTPAnimInstance::~UTPAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPAnimInstance, UTPAnimInstance::StaticClass, TEXT("UTPAnimInstance"), &Z_Registration_Info_UClass_UTPAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPAnimInstance), 2386835153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPAnimInstance_h_1829462375(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
