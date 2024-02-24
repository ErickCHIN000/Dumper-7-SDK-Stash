#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GunAmmo.GunAmmo_C
// (Actor)

class UClass* AGunAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GunAmmo_C");

	return Clss;
}


// GunAmmo_C GunAmmo.Default__GunAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGunAmmo_C* AGunAmmo_C::GetDefaultObj()
{
	static class AGunAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGunAmmo_C*>(AGunAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


