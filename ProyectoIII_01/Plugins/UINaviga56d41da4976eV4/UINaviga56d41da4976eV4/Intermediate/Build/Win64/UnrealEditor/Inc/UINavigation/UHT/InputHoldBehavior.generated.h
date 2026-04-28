// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/InputHoldBehavior.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UINAVIGATION_InputHoldBehavior_generated_h
#error "InputHoldBehavior.generated.h already included, missing '#pragma once' in InputHoldBehavior.h"
#endif
#define UINAVIGATION_InputHoldBehavior_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UINavigation_Source_UINavigation_Public_Data_InputHoldBehavior_h


#define FOREACH_ENUM_EINPUTHOLDBEHAVIOR(op) \
	op(EInputHoldBehavior::DontAllow) \
	op(EInputHoldBehavior::AllowIfHeld) \
	op(EInputHoldBehavior::Force) 

enum class EInputHoldBehavior : uint8;
template<> struct TIsUEnumClass<EInputHoldBehavior> { enum { Value = true }; };
template<> UINAVIGATION_API UEnum* StaticEnum<EInputHoldBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
