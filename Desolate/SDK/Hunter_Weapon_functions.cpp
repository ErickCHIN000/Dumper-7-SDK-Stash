#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hunter_Weapon.Hunter_Weapon_C
// (Actor)

class UClass* AHunter_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hunter_Weapon_C");

	return Clss;
}


// Hunter_Weapon_C Hunter_Weapon.Default__Hunter_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHunter_Weapon_C* AHunter_Weapon_C::GetDefaultObj()
{
	static class AHunter_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHunter_Weapon_C*>(AHunter_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


