#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SR_VLA_Fire_Underbarrel.Action_SR_VLA_Fire_Underbarrel_C
// (None)

class UClass* UAction_SR_VLA_Fire_Underbarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SR_VLA_Fire_Underbarrel_C");

	return Clss;
}


// Action_SR_VLA_Fire_Underbarrel_C Action_SR_VLA_Fire_Underbarrel.Default__Action_SR_VLA_Fire_Underbarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SR_VLA_Fire_Underbarrel_C* UAction_SR_VLA_Fire_Underbarrel_C::GetDefaultObj()
{
	static class UAction_SR_VLA_Fire_Underbarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SR_VLA_Fire_Underbarrel_C*>(UAction_SR_VLA_Fire_Underbarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


