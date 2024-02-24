#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Loot_MeleeWeapons.Challenge_Loot_MeleeWeapons_C
// (None)

class UClass* UChallenge_Loot_MeleeWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Loot_MeleeWeapons_C");

	return Clss;
}


// Challenge_Loot_MeleeWeapons_C Challenge_Loot_MeleeWeapons.Default__Challenge_Loot_MeleeWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Loot_MeleeWeapons_C* UChallenge_Loot_MeleeWeapons_C::GetDefaultObj()
{
	static class UChallenge_Loot_MeleeWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Loot_MeleeWeapons_C*>(UChallenge_Loot_MeleeWeapons_C::StaticClass()->DefaultObject);

	return Default;
}

}


