#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandits_KickWeapon.Bandits_KickWeapon_C
// (Actor)

class UClass* ABandits_KickWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandits_KickWeapon_C");

	return Clss;
}


// Bandits_KickWeapon_C Bandits_KickWeapon.Default__Bandits_KickWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandits_KickWeapon_C* ABandits_KickWeapon_C::GetDefaultObj()
{
	static class ABandits_KickWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandits_KickWeapon_C*>(ABandits_KickWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


