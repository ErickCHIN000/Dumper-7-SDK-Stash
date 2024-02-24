#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE.Challenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C Challenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE.Default__Challenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C* UChallenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C*>(UChallenge_TrackedInteraction_GoldenDice_CF7EDDF0431A5521B0BDEDB27EC45DEE_C::StaticClass()->DefaultObject);

	return Default;
}

}


