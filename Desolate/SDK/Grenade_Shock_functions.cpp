#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_Shock.Grenade_Shock_C
// (Actor)

class UClass* AGrenade_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_Shock_C");

	return Clss;
}


// Grenade_Shock_C Grenade_Shock.Default__Grenade_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_Shock_C* AGrenade_Shock_C::GetDefaultObj()
{
	static class AGrenade_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_Shock_C*>(AGrenade_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


