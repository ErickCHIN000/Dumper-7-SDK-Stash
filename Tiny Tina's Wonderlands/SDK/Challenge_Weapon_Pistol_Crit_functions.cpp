#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Weapon_Pistol_Crit.Challenge_Weapon_Pistol_Crit_C
// (None)

class UClass* UChallenge_Weapon_Pistol_Crit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Weapon_Pistol_Crit_C");

	return Clss;
}


// Challenge_Weapon_Pistol_Crit_C Challenge_Weapon_Pistol_Crit.Default__Challenge_Weapon_Pistol_Crit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Weapon_Pistol_Crit_C* UChallenge_Weapon_Pistol_Crit_C::GetDefaultObj()
{
	static class UChallenge_Weapon_Pistol_Crit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Weapon_Pistol_Crit_C*>(UChallenge_Weapon_Pistol_Crit_C::StaticClass()->DefaultObject);

	return Default;
}

}


