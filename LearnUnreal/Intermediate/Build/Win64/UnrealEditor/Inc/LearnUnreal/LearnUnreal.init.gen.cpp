// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearnUnreal_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LearnUnreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LearnUnreal()
	{
		if (!Z_Registration_Info_UPackage__Script_LearnUnreal.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LearnUnreal",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7A310C68,
				0xF3589B79,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LearnUnreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LearnUnreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LearnUnreal(Z_Construct_UPackage__Script_LearnUnreal, TEXT("/Script/LearnUnreal"), Z_Registration_Info_UPackage__Script_LearnUnreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7A310C68, 0xF3589B79));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
