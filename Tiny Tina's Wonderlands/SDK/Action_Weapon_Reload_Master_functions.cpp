#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Weapon_Reload_Master.Action_Weapon_Reload_Master_C
// (None)

class UClass* UAction_Weapon_Reload_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Weapon_Reload_Master_C");

	return Clss;
}


// Action_Weapon_Reload_Master_C Action_Weapon_Reload_Master.Default__Action_Weapon_Reload_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Weapon_Reload_Master_C* UAction_Weapon_Reload_Master_C::GetDefaultObj()
{
	static class UAction_Weapon_Reload_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Weapon_Reload_Master_C*>(UAction_Weapon_Reload_Master_C::StaticClass()->DefaultObject);

	return Default;
}

}


