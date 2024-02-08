// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Public/TPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPCharacter() {}
// Cross Module References
	CHARACTER_API UClass* Z_Construct_UClass_ATPCharacter();
	CHARACTER_API UClass* Z_Construct_UClass_ATPCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Character();
// End Cross Module References
	void ATPCharacter::StaticRegisterNativesATPCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPCharacter);
	UClass* Z_Construct_UClass_ATPCharacter_NoRegister()
	{
		return ATPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Look_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Look;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_LeftMouse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_LeftMouse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Skill1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Skill1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Skill2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Skill2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Skill3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Skill3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Skill4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Skill4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Skill5_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Skill5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_SkillShift_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_SkillShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_ItemQ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_ItemQ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_ItemE_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_ItemE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_SkillInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_SkillInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Reload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Reload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_TP_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IA_TP_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Character,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPCharacter.h" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Jump_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Jump = { "IA_TP_Jump", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Jump_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Jump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Move_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Move = { "IA_TP_Move", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Move_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Look_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Look = { "IA_TP_Look", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Look_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Look_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_LeftMouse_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_LeftMouse = { "IA_TP_LeftMouse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_LeftMouse), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_LeftMouse_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_LeftMouse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill1_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill1 = { "IA_TP_Skill1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Skill1), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill1_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill2_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill2 = { "IA_TP_Skill2", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Skill2), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill2_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill3_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill3 = { "IA_TP_Skill3", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Skill3), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill3_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill4_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill4 = { "IA_TP_Skill4", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Skill4), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill4_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill5_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill5 = { "IA_TP_Skill5", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Skill5), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill5_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill5_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillShift_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillShift = { "IA_TP_SkillShift", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_SkillShift), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillShift_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillShift_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemQ_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemQ = { "IA_TP_ItemQ", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_ItemQ), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemQ_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemQ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemE_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemE = { "IA_TP_ItemE", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_ItemE), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemE_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Inventory_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Inventory = { "IA_TP_Inventory", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Inventory), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Inventory_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Inventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillInventory_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillInventory = { "IA_TP_SkillInventory", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_SkillInventory), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillInventory_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Reload_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Reload = { "IA_TP_Reload", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Reload), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Reload_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Reload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Ability_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/TPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Ability = { "IA_TP_Ability", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPCharacter, IA_TP_Ability), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Ability_MetaData), Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Ability_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Look,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_LeftMouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Skill5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemQ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_ItemE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_SkillInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Reload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPCharacter_Statics::NewProp_IA_TP_Ability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPCharacter_Statics::ClassParams = {
		&ATPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATPCharacter()
	{
		if (!Z_Registration_Info_UClass_ATPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPCharacter.OuterSingleton, Z_Construct_UClass_ATPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPCharacter.OuterSingleton;
	}
	template<> CHARACTER_API UClass* StaticClass<ATPCharacter>()
	{
		return ATPCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPCharacter);
	ATPCharacter::~ATPCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPCharacter, ATPCharacter::StaticClass, TEXT("ATPCharacter"), &Z_Registration_Info_UClass_ATPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPCharacter), 3811684630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPCharacter_h_1442321088(TEXT("/Script/Character"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_UnrealProjects_Back_UETeamProject_PackPlugin_Character_HostProject_Plugins_Character_Source_Character_Public_TPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
