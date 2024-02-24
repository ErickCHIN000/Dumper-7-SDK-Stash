#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Loot_Spells.Challenge_Loot_Spells_C
// (None)

class UClass* UChallenge_Loot_Spells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Loot_Spells_C");

	return Clss;
}


// Challenge_Loot_Spells_C Challenge_Loot_Spells.Default__Challenge_Loot_Spells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Loot_Spells_C* UChallenge_Loot_Spells_C::GetDefaultObj()
{
	static class UChallenge_Loot_Spells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Loot_Spells_C*>(UChallenge_Loot_Spells_C::StaticClass()->DefaultObject);

	return Default;
}

}


