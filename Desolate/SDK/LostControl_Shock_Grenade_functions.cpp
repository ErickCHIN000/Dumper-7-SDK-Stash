#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Shock_Grenade.LostControl_Shock_Grenade_C
// (Actor)

class UClass* ALostControl_Shock_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Shock_Grenade_C");

	return Clss;
}


// LostControl_Shock_Grenade_C LostControl_Shock_Grenade.Default__LostControl_Shock_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Shock_Grenade_C* ALostControl_Shock_Grenade_C::GetDefaultObj()
{
	static class ALostControl_Shock_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Shock_Grenade_C*>(ALostControl_Shock_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


