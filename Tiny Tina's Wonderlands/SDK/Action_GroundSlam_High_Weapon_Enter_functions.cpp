#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_GroundSlam_High_Weapon_Enter.Action_GroundSlam_High_Weapon_Enter_C
// (None)

class UClass* UAction_GroundSlam_High_Weapon_Enter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_GroundSlam_High_Weapon_Enter_C");

	return Clss;
}


// Action_GroundSlam_High_Weapon_Enter_C Action_GroundSlam_High_Weapon_Enter.Default__Action_GroundSlam_High_Weapon_Enter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_GroundSlam_High_Weapon_Enter_C* UAction_GroundSlam_High_Weapon_Enter_C::GetDefaultObj()
{
	static class UAction_GroundSlam_High_Weapon_Enter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_GroundSlam_High_Weapon_Enter_C*>(UAction_GroundSlam_High_Weapon_Enter_C::StaticClass()->DefaultObject);

	return Default;
}

}


