#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PistolAmmo.PistolAmmo_C
// (Actor)

class UClass* APistolAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PistolAmmo_C");

	return Clss;
}


// PistolAmmo_C PistolAmmo.Default__PistolAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistolAmmo_C* APistolAmmo_C::GetDefaultObj()
{
	static class APistolAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistolAmmo_C*>(APistolAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


