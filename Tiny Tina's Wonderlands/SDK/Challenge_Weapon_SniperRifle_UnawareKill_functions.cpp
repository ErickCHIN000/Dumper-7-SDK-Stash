#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Weapon_SniperRifle_UnawareKill.Challenge_Weapon_SniperRifle_UnawareKill_C
// (None)

class UClass* UChallenge_Weapon_SniperRifle_UnawareKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Weapon_SniperRifle_UnawareKill_C");

	return Clss;
}


// Challenge_Weapon_SniperRifle_UnawareKill_C Challenge_Weapon_SniperRifle_UnawareKill.Default__Challenge_Weapon_SniperRifle_UnawareKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Weapon_SniperRifle_UnawareKill_C* UChallenge_Weapon_SniperRifle_UnawareKill_C::GetDefaultObj()
{
	static class UChallenge_Weapon_SniperRifle_UnawareKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Weapon_SniperRifle_UnawareKill_C*>(UChallenge_Weapon_SniperRifle_UnawareKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


