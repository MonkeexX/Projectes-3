// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavigation/Public/UINavInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavInputComponent() {}

// Begin Cross Module References
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent();
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputComponent();
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References

// Begin Class UUINavInputComponent
void UUINavInputComponent::StaticRegisterNativesUUINavInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavInputComponent);
UClass* Z_Construct_UClass_UUINavInputComponent_NoRegister()
{
	return UUINavInputComponent::StaticClass();
}
struct Z_Construct_UClass_UUINavInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UINavInputComponent.h" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftRichText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightRichText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftRichText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightRichText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage = { "InputImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputComponent, InputImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputImage_MetaData), NewProp_InputImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_LeftText = { "LeftText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputComponent, LeftText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftText_MetaData), NewProp_LeftText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_RightText = { "RightText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputComponent, RightText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightText_MetaData), NewProp_RightText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_LeftRichText = { "LeftRichText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputComponent, LeftRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftRichText_MetaData), NewProp_LeftRichText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_RightRichText = { "RightRichText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputComponent, RightRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightRichText_MetaData), NewProp_RightRichText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_LeftText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_RightText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_LeftRichText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_RightRichText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUINavInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUINavComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavInputComponent_Statics::ClassParams = {
	&UUINavInputComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUINavInputComponent()
{
	if (!Z_Registration_Info_UClass_UUINavInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavInputComponent.OuterSingleton, Z_Construct_UClass_UUINavInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUINavInputComponent.OuterSingleton;
}
template<> UINAVIGATION_API UClass* StaticClass<UUINavInputComponent>()
{
	return UUINavInputComponent::StaticClass();
}
UUINavInputComponent::UUINavInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavInputComponent);
UUINavInputComponent::~UUINavInputComponent() {}
// End Class UUINavInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUINavInputComponent, UUINavInputComponent::StaticClass, TEXT("UUINavInputComponent"), &Z_Registration_Info_UClass_UUINavInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavInputComponent), 2720221508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavInputComponent_h_216493804(TEXT("/Script/UINavigation"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
