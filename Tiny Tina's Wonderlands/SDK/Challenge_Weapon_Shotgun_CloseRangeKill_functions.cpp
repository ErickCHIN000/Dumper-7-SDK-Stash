#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Weapon_Shotgun_CloseRangeKill.Challenge_Weapon_Shotgun_CloseRangeKill_C
// (None)

class UClass* UChallenge_Weapon_Shotgun_CloseRangeKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Weapon_Shotgun_CloseRangeKill_C");

	return Clss;
}


// Challenge_Weapon_Shotgun_CloseRangeKill_C Challenge_Weapon_Shotgun_CloseRangeKill.Default__Challenge_Weapon_Shotgun_CloseRangeKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Weapon_Shotgun_CloseRangeKill_C* UChallenge_Weapon_Shotgun_CloseRangeKill_C::GetDefaultObj()
{
	static class UChallenge_Weapon_Shotgun_CloseRangeKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Weapon_Shotgun_CloseRangeKill_C*>(UChallenge_Weapon_Shotgun_CloseRangeKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


