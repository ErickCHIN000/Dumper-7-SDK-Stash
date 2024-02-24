#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA.Challenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C Challenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA.Default__Challenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C* UChallenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C*>(UChallenge_TrackedInteraction_GoldenDice_AB1E24CC4BB94B3F3DAC4C974303F2BA_C::StaticClass()->DefaultObject);

	return Default;
}

}


