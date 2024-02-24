#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Elemental_Kills_StatusEffect.Challenge_Elemental_Kills_StatusEffect_C
// (None)

class UClass* UChallenge_Elemental_Kills_StatusEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Elemental_Kills_StatusEffect_C");

	return Clss;
}


// Challenge_Elemental_Kills_StatusEffect_C Challenge_Elemental_Kills_StatusEffect.Default__Challenge_Elemental_Kills_StatusEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Elemental_Kills_StatusEffect_C* UChallenge_Elemental_Kills_StatusEffect_C::GetDefaultObj()
{
	static class UChallenge_Elemental_Kills_StatusEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Elemental_Kills_StatusEffect_C*>(UChallenge_Elemental_Kills_StatusEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


