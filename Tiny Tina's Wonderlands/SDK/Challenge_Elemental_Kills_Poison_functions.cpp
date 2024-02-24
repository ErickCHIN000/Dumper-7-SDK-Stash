#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Elemental_Kills_Poison.Challenge_Elemental_Kills_Poison_C
// (None)

class UClass* UChallenge_Elemental_Kills_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Elemental_Kills_Poison_C");

	return Clss;
}


// Challenge_Elemental_Kills_Poison_C Challenge_Elemental_Kills_Poison.Default__Challenge_Elemental_Kills_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Elemental_Kills_Poison_C* UChallenge_Elemental_Kills_Poison_C::GetDefaultObj()
{
	static class UChallenge_Elemental_Kills_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Elemental_Kills_Poison_C*>(UChallenge_Elemental_Kills_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


