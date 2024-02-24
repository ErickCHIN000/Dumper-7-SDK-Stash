#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SR_VLA_ModeSwitch_04.Action_SR_VLA_ModeSwitch_04_C
// (None)

class UClass* UAction_SR_VLA_ModeSwitch_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SR_VLA_ModeSwitch_04_C");

	return Clss;
}


// Action_SR_VLA_ModeSwitch_04_C Action_SR_VLA_ModeSwitch_04.Default__Action_SR_VLA_ModeSwitch_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SR_VLA_ModeSwitch_04_C* UAction_SR_VLA_ModeSwitch_04_C::GetDefaultObj()
{
	static class UAction_SR_VLA_ModeSwitch_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SR_VLA_ModeSwitch_04_C*>(UAction_SR_VLA_ModeSwitch_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


