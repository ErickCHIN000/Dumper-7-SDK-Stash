#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Zombie_KickWeapon.Zombie_KickWeapon_C
// (Actor)

class UClass* AZombie_KickWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Zombie_KickWeapon_C");

	return Clss;
}


// Zombie_KickWeapon_C Zombie_KickWeapon.Default__Zombie_KickWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AZombie_KickWeapon_C* AZombie_KickWeapon_C::GetDefaultObj()
{
	static class AZombie_KickWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AZombie_KickWeapon_C*>(AZombie_KickWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


