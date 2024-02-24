#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_VLA_ModeSwitch_90_Auto.Action_AR_VLA_ModeSwitch_90_Auto_C
// (None)

class UClass* UAction_AR_VLA_ModeSwitch_90_Auto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_VLA_ModeSwitch_90_Auto_C");

	return Clss;
}


// Action_AR_VLA_ModeSwitch_90_Auto_C Action_AR_VLA_ModeSwitch_90_Auto.Default__Action_AR_VLA_ModeSwitch_90_Auto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_VLA_ModeSwitch_90_Auto_C* UAction_AR_VLA_ModeSwitch_90_Auto_C::GetDefaultObj()
{
	static class UAction_AR_VLA_ModeSwitch_90_Auto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_VLA_ModeSwitch_90_Auto_C*>(UAction_AR_VLA_ModeSwitch_90_Auto_C::StaticClass()->DefaultObject);

	return Default;
}

}


