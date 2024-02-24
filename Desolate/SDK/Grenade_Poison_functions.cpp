#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_Poison.Grenade_Poison_C
// (Actor)

class UClass* AGrenade_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_Poison_C");

	return Clss;
}


// Grenade_Poison_C Grenade_Poison.Default__Grenade_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_Poison_C* AGrenade_Poison_C::GetDefaultObj()
{
	static class AGrenade_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_Poison_C*>(AGrenade_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


