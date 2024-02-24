#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grenade_Ice.Grenade_Ice_C
// (Actor)

class UClass* AGrenade_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grenade_Ice_C");

	return Clss;
}


// Grenade_Ice_C Grenade_Ice.Default__Grenade_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenade_Ice_C* AGrenade_Ice_C::GetDefaultObj()
{
	static class AGrenade_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenade_Ice_C*>(AGrenade_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


