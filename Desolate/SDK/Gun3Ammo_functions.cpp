#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gun3Ammo.Gun3Ammo_C
// (Actor)

class UClass* AGun3Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gun3Ammo_C");

	return Clss;
}


// Gun3Ammo_C Gun3Ammo.Default__Gun3Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGun3Ammo_C* AGun3Ammo_C::GetDefaultObj()
{
	static class AGun3Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGun3Ammo_C*>(AGun3Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


