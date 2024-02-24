#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SR_VLA_ModeSwitch_Shotgun_Auto.Action_SR_VLA_ModeSwitch_Shotgun_Auto_C
// (None)

class UClass* UAction_SR_VLA_ModeSwitch_Shotgun_Auto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SR_VLA_ModeSwitch_Shotgun_Auto_C");

	return Clss;
}


// Action_SR_VLA_ModeSwitch_Shotgun_Auto_C Action_SR_VLA_ModeSwitch_Shotgun_Auto.Default__Action_SR_VLA_ModeSwitch_Shotgun_Auto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SR_VLA_ModeSwitch_Shotgun_Auto_C* UAction_SR_VLA_ModeSwitch_Shotgun_Auto_C::GetDefaultObj()
{
	static class UAction_SR_VLA_ModeSwitch_Shotgun_Auto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SR_VLA_ModeSwitch_Shotgun_Auto_C*>(UAction_SR_VLA_ModeSwitch_Shotgun_Auto_C::StaticClass()->DefaultObject);

	return Default;
}

}


