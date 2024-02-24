#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol2Ammo.Pistol2Ammo_C
// (Actor)

class UClass* APistol2Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol2Ammo_C");

	return Clss;
}


// Pistol2Ammo_C Pistol2Ammo.Default__Pistol2Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistol2Ammo_C* APistol2Ammo_C::GetDefaultObj()
{
	static class APistol2Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistol2Ammo_C*>(APistol2Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


