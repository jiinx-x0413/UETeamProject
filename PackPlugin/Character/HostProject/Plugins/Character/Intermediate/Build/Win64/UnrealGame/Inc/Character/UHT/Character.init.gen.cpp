// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Character;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Character()
	{
		if (!Z_Registration_Info_UPackage__Script_Character.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Character",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEEF75908,
				0x77D372DB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Character.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Character.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Character(Z_Construct_UPackage__Script_Character, TEXT("/Script/Character"), Z_Registration_Info_UPackage__Script_Character, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEEF75908, 0x77D372DB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
