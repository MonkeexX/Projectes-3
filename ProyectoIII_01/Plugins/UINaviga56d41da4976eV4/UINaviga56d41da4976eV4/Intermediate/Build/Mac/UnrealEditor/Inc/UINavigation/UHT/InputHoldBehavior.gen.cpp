// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavigation/Public/Data/InputHoldBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHoldBehavior() {}

// Begin Cross Module References
UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputHoldBehavior();
UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References

// Begin Enum EInputHoldBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputHoldBehavior;
static UEnum* EInputHoldBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputHoldBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputHoldBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EInputHoldBehavior, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EInputHoldBehavior"));
	}
	return Z_Registration_Info_UEnum_EInputHoldBehavior.OuterSingleton;
}
template<> UINAVIGATION_API UEnum* StaticEnum<EInputHoldBehavior>()
{
	return EInputHoldBehavior_StaticEnum();
}
struct Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllowIfHeld.Name", "EInputHoldBehavior::AllowIfHeld" },
		{ "BlueprintType", "true" },
		{ "DontAllow.Name", "EInputHoldBehavior::DontAllow" },
		{ "Force.Name", "EInputHoldBehavior::Force" },
		{ "ModuleRelativePath", "Public/Data/InputHoldBehavior.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputHoldBehavior::DontAllow", (int64)EInputHoldBehavior::DontAllow },
		{ "EInputHoldBehavior::AllowIfHeld", (int64)EInputHoldBehavior::AllowIfHeld },
		{ "EInputHoldBehavior::Force", (int64)EInputHoldBehavior::Force },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
	nullptr,
	"EInputHoldBehavior",
	"EInputHoldBehavior",
	Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UINavigation_EInputHoldBehavior()
{
	if (!Z_Registration_Info_UEnum_EInputHoldBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputHoldBehavior.InnerSingleton, Z_Construct_UEnum_UINavigation_EInputHoldBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputHoldBehavior.InnerSingleton;
}
// End Enum EInputHoldBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_Data_InputHoldBehavior_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputHoldBehavior_StaticEnum, TEXT("EInputHoldBehavior"), &Z_Registration_Info_UEnum_EInputHoldBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 726610499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_Data_InputHoldBehavior_h_836375024(TEXT("/Script/UINavigation"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_Data_InputHoldBehavior_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_Data_InputHoldBehavior_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
