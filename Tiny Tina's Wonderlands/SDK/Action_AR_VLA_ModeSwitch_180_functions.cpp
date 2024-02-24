#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_VLA_ModeSwitch_180.Action_AR_VLA_ModeSwitch_180_C
// (None)

class UClass* UAction_AR_VLA_ModeSwitch_180_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_VLA_ModeSwitch_180_C");

	return Clss;
}


// Action_AR_VLA_ModeSwitch_180_C Action_AR_VLA_ModeSwitch_180.Default__Action_AR_VLA_ModeSwitch_180_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_VLA_ModeSwitch_180_C* UAction_AR_VLA_ModeSwitch_180_C::GetDefaultObj()
{
	static class UAction_AR_VLA_ModeSwitch_180_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_VLA_ModeSwitch_180_C*>(UAction_AR_VLA_ModeSwitch_180_C::StaticClass()->DefaultObject);

	return Default;
}

}


