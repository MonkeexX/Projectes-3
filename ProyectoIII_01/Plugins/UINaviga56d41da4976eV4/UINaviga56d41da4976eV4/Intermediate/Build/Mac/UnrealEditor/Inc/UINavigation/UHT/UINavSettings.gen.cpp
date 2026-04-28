// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavigation/Public/UINavSettings.h"
#include "UINavigation/Public/Data/PlatformConfigData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavEnhancedInputActions_NoRegister();
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSettings();
UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSettings_NoRegister();
UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ESelectorPosition();
UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformConfigData();
UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References

// Begin Class UUINavSettings
void UUINavSettings::StaticRegisterNativesUUINavSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavSettings);
UClass* Z_Construct_UClass_UUINavSettings_NoRegister()
{
	return UUINavSettings::StaticClass();
}
struct Z_Construct_UClass_UUINavSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UINavSettings.h" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNavigation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* \n\x09* Whether to force a button to always be visually shown as navigated, even if it's not being hovered by the mouse when using the mouse.\n\x09* If set to true, when the mouse unhovers a button, it's button style will continue as hovered, and if you then use the keyboard or the mouse, navigation will happen.\n\x09* If set to false, when the mouse unhovers a button, it's button style will be set back to normal, and if you then use the keyboard or the mouse for the first time,\n\x09* the hovered button style will be set, and only after the second input will navigation happen.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "* Whether to force a button to always be visually shown as navigated, even if it's not being hovered by the mouse when using the mouse.\n* If set to true, when the mouse unhovers a button, it's button style will continue as hovered, and if you then use the keyboard or the mouse, navigation will happen.\n* If set to false, when the mouse unhovers a button, it's button style will be set back to normal, and if you then use the keyboard or the mouse for the first time,\n* the hovered button style will be set, and only after the second input will navigation happen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFocusSystemNavigationInputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to use the focus system or an actual input context for navigation inputs\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to use the focus system or an actual input context for navigation inputs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNavigationWhilePressing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether navigation is allowed while pressing a button\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether navigation is allowed while pressing a button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetFocusOnRelease_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether a UINavComponent that's released should gain focus at that moment\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether a UINavComponent that's released should gain focus at that moment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to play the OnNavigated sound from the UINavComponent when navigating to the first UINavComponent of the widget\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to play the OnNavigated sound from the UINavComponent when navigating to the first UINavComponent of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTransitionInputCooldown_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The amount of time that needs to pass after the user transitions to a new UINavWidget before input is allowed\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The amount of time that needs to pass after the user transitions to a new UINavWidget before input is allowed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopNextPreviousNavigation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether focus navigation should stop when using Next/Previous input\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether focus navigation should stop when using Next/Previous input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDisabledButton_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether disabled buttons should be ignored for navigation\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether disabled buttons should be ignored for navigation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnOnPress_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to call the OnReturn event when you press or release the MenuReturn key\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to call the OnReturn event when you press or release the MenuReturn key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveWidgetOnReturn_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to call return to parent when using the Back/Return input\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to call return to parent when using the Back/Return input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to remove active UINavWidgets on EndPlay event\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to remove active UINavWidgets on EndPlay event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFocusOnViewportInGameAndUI_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to allow a UINavComponent to lose focus to the viewport when in Input Mode GameAndUI\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to allow a UINavComponent to lose focus to the viewport when in Input Mode GameAndUI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadInputIconsAsync_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to load the input icons asynchronously, in order to prevent Load Flushes\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Whether to load the input icons asynchronously, in order to prevent Load Flushes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseMoveRebindThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The amount of mouse movement delta that will trigger a rebind attempt when listening to a new key for input rebinding\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The amount of mouse movement delta that will trigger a rebind attempt when listening to a new key for input rebinding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldRebindThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The amount of time the player needs to hold a key in order to rebind to a hold input\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The amount of time the player needs to hold a key in order to rebind to a hold input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseInputChangeThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The amount of mouse movement delta that will trigger the input type being changed to mouse\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The amount of mouse movement delta that will trigger the input type being changed to mouse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogInputChangeThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The amount of analog movement that will trigger the input type being changed to gamepad\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The amount of analog movement that will trigger the input type being changed to gamepad" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveMouseToButtonPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* What relative button position to move the mouse cursor to when navigating to that button (None if you don't want this to happen).\n\x09* This can be useful to displaying button tooltips when using the gamepad/keyboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "* What relative button position to move the mouse cursor to when navigating to that button (None if you don't want this to happen).\n* This can be useful to displaying button tooltips when using the gamepad/keyboard." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveMouseToButtonOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The offset to use when moving the mouse cursor to the button's position.\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The offset to use when moving the mouse cursor to the button's position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedWidgetTypesToFocus_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The list of widget types (Slate names) to allow to be focused\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The list of widget types (Slate names) to allow to be focused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputVersion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Increment by 1 everytime your project's default inputs change\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "Increment by 1 everytime your project's default inputs change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformConfigData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The input data used for each platform\n" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ToolTip", "The input data used for each platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputContext_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputActions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bForceNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNavigation;
	static void NewProp_bUseFocusSystemNavigationInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFocusSystemNavigationInputs;
	static void NewProp_bAllowNavigationWhilePressing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNavigationWhilePressing;
	static void NewProp_bSetFocusOnRelease_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetFocusOnRelease;
	static void NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetTransitionInputCooldown;
	static void NewProp_bStopNextPreviousNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopNextPreviousNavigation;
	static void NewProp_bIgnoreDisabledButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDisabledButton;
	static void NewProp_bReturnOnPress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnPress;
	static void NewProp_bRemoveWidgetOnReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveWidgetOnReturn;
	static void NewProp_bRemoveActiveWidgetsOnEndPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveActiveWidgetsOnEndPlay;
	static void NewProp_bAllowFocusOnViewportInGameAndUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFocusOnViewportInGameAndUI;
	static void NewProp_bLoadInputIconsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadInputIconsAsync;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseMoveRebindThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldRebindThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseInputChangeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalogInputChangeThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveMouseToButtonPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveMouseToButtonPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveMouseToButtonOffset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedWidgetTypesToFocus_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedWidgetTypesToFocus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformConfigData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformConfigData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformConfigData;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnhancedInputContext;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnhancedInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bForceNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation = { "bForceNavigation", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNavigation_MetaData), NewProp_bForceNavigation_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bUseFocusSystemNavigationInputs_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bUseFocusSystemNavigationInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bUseFocusSystemNavigationInputs = { "bUseFocusSystemNavigationInputs", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bUseFocusSystemNavigationInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFocusSystemNavigationInputs_MetaData), NewProp_bUseFocusSystemNavigationInputs_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowNavigationWhilePressing_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bAllowNavigationWhilePressing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowNavigationWhilePressing = { "bAllowNavigationWhilePressing", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowNavigationWhilePressing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNavigationWhilePressing_MetaData), NewProp_bAllowNavigationWhilePressing_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bSetFocusOnRelease_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bSetFocusOnRelease = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bSetFocusOnRelease = { "bSetFocusOnRelease", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bSetFocusOnRelease_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetFocusOnRelease_MetaData), NewProp_bSetFocusOnRelease_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bPlayOnNavigatedSoundOnFirstUINavComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent = { "bPlayOnNavigatedSoundOnFirstUINavComponent", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent_MetaData), NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_WidgetTransitionInputCooldown = { "WidgetTransitionInputCooldown", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, WidgetTransitionInputCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetTransitionInputCooldown_MetaData), NewProp_WidgetTransitionInputCooldown_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bStopNextPreviousNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation = { "bStopNextPreviousNavigation", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopNextPreviousNavigation_MetaData), NewProp_bStopNextPreviousNavigation_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bIgnoreDisabledButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton = { "bIgnoreDisabledButton", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreDisabledButton_MetaData), NewProp_bIgnoreDisabledButton_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bReturnOnPress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress = { "bReturnOnPress", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnOnPress_MetaData), NewProp_bReturnOnPress_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bRemoveWidgetOnReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn = { "bRemoveWidgetOnReturn", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveWidgetOnReturn_MetaData), NewProp_bRemoveWidgetOnReturn_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bRemoveActiveWidgetsOnEndPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay = { "bRemoveActiveWidgetsOnEndPlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData), NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bAllowFocusOnViewportInGameAndUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI = { "bAllowFocusOnViewportInGameAndUI", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFocusOnViewportInGameAndUI_MetaData), NewProp_bAllowFocusOnViewportInGameAndUI_MetaData) };
void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_SetBit(void* Obj)
{
	((UUINavSettings*)Obj)->bLoadInputIconsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync = { "bLoadInputIconsAsync", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadInputIconsAsync_MetaData), NewProp_bLoadInputIconsAsync_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold = { "MouseMoveRebindThreshold", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, MouseMoveRebindThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseMoveRebindThreshold_MetaData), NewProp_MouseMoveRebindThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_HoldRebindThreshold = { "HoldRebindThreshold", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, HoldRebindThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldRebindThreshold_MetaData), NewProp_HoldRebindThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseInputChangeThreshold = { "MouseInputChangeThreshold", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, MouseInputChangeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseInputChangeThreshold_MetaData), NewProp_MouseInputChangeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_AnalogInputChangeThreshold = { "AnalogInputChangeThreshold", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, AnalogInputChangeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogInputChangeThreshold_MetaData), NewProp_AnalogInputChangeThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_MoveMouseToButtonPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_MoveMouseToButtonPosition = { "MoveMouseToButtonPosition", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, MoveMouseToButtonPosition), Z_Construct_UEnum_UINavigation_ESelectorPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveMouseToButtonPosition_MetaData), NewProp_MoveMouseToButtonPosition_MetaData) }; // 2448730687
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_MoveMouseToButtonOffset = { "MoveMouseToButtonOffset", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, MoveMouseToButtonOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveMouseToButtonOffset_MetaData), NewProp_MoveMouseToButtonOffset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_AllowedWidgetTypesToFocus_Inner = { "AllowedWidgetTypesToFocus", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_AllowedWidgetTypesToFocus = { "AllowedWidgetTypesToFocus", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, AllowedWidgetTypesToFocus), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedWidgetTypesToFocus_MetaData), NewProp_AllowedWidgetTypesToFocus_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion = { "CurrentInputVersion", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, CurrentInputVersion), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInputVersion_MetaData), NewProp_CurrentInputVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_PlatformConfigData_ValueProp = { "PlatformConfigData", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlatformConfigData, METADATA_PARAMS(0, nullptr) }; // 232835755
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_PlatformConfigData_Key_KeyProp = { "PlatformConfigData_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_PlatformConfigData = { "PlatformConfigData", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, PlatformConfigData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformConfigData_MetaData), NewProp_PlatformConfigData_MetaData) }; // 232835755
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext = { "EnhancedInputContext", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, EnhancedInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputContext_MetaData), NewProp_EnhancedInputContext_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions = { "EnhancedInputActions", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, EnhancedInputActions), Z_Construct_UClass_UUINavEnhancedInputActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputActions_MetaData), NewProp_EnhancedInputActions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bUseFocusSystemNavigationInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowNavigationWhilePressing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bSetFocusOnRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bPlayOnNavigatedSoundOnFirstUINavComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_WidgetTransitionInputCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_HoldRebindThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseInputChangeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_AnalogInputChangeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_MoveMouseToButtonPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_MoveMouseToButtonPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_MoveMouseToButtonOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_AllowedWidgetTypesToFocus_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_AllowedWidgetTypesToFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_PlatformConfigData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_PlatformConfigData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_PlatformConfigData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUINavSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavSettings_Statics::ClassParams = {
	&UUINavSettings::StaticClass,
	"UINavSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUINavSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUINavSettings()
{
	if (!Z_Registration_Info_UClass_UUINavSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavSettings.OuterSingleton, Z_Construct_UClass_UUINavSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUINavSettings.OuterSingleton;
}
template<> UINAVIGATION_API UClass* StaticClass<UUINavSettings>()
{
	return UUINavSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavSettings);
UUINavSettings::~UUINavSettings() {}
// End Class UUINavSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUINavSettings, UUINavSettings::StaticClass, TEXT("UUINavSettings"), &Z_Registration_Info_UClass_UUINavSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavSettings), 411967024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavSettings_h_2928866448(TEXT("/Script/UINavigation"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_UINavSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
