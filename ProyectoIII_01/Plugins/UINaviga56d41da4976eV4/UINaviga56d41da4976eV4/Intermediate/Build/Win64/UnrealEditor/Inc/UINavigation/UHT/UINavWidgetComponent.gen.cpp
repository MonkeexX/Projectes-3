// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavigation/Public/UINavWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavWidgetComponent() {}

// Begin Cross Module References
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidgetComponent();
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidgetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References

// Begin Class UUINavWidgetComponent
void UUINavWidgetComponent::StaticRegisterNativesUUINavWidgetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavWidgetComponent);
UClass* Z_Construct_UClass_UUINavWidgetComponent_NoRegister()
{
	return UUINavWidgetComponent::StaticClass();
}
struct Z_Construct_UClass_UUINavWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UINav" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UINavWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/UINavWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTakeFocus_MetaData[] = {
		{ "Category", "UINavigation" },
		{ "Comment", "/*\n\x09Whether this UINavWidget should Take Focus when on the screen. Usually, you'll want to set this to true if the player is supposed to only \n\x09""be able to navigate this widget when it's on the screen, and set it to false if this is a widget where the player can navigate while moving around.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UINavWidgetComponent.h" },
		{ "ToolTip", "Whether this UINavWidget should Take Focus when on the screen. Usually, you'll want to set this to true if the player is supposed to only\nbe able to navigate this widget when it's on the screen, and set it to false if this is a widget where the player can navigate while moving around." },
	};
#endif // WITH_METADATA
	static void NewProp_bTakeFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTakeFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UUINavWidgetComponent_Statics::NewProp_bTakeFocus_SetBit(void* Obj)
{
	((UUINavWidgetComponent*)Obj)->bTakeFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidgetComponent_Statics::NewProp_bTakeFocus = { "bTakeFocus", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidgetComponent), &Z_Construct_UClass_UUINavWidgetComponent_Statics::NewProp_bTakeFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTakeFocus_MetaData), NewProp_bTakeFocus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavWidgetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidgetComponent_Statics::NewProp_bTakeFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidgetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUINavWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavWidgetComponent_Statics::ClassParams = {
	&UUINavWidgetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUINavWidgetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidgetComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUINavWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UUINavWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavWidgetComponent.OuterSingleton, Z_Construct_UClass_UUINavWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUINavWidgetComponent.OuterSingleton;
}
template<> UINAVIGATION_API UClass* StaticClass<UUINavWidgetComponent>()
{
	return UUINavWidgetComponent::StaticClass();
}
UUINavWidgetComponent::UUINavWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavWidgetComponent);
UUINavWidgetComponent::~UUINavWidgetComponent() {}
// End Class UUINavWidgetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavWidgetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUINavWidgetComponent, UUINavWidgetComponent::StaticClass, TEXT("UUINavWidgetComponent"), &Z_Registration_Info_UClass_UUINavWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavWidgetComponent), 3015109520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavWidgetComponent_h_612187798(TEXT("/Script/UINavigation"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavWidgetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
