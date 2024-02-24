#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5.Challenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C Challenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5.Default__Challenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C* UChallenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C*>(UChallenge_TrackedInteraction_GoldenDice_AA44B2F34E2013E622B2F7A629E550C5_C::StaticClass()->DefaultObject);

	return Default;
}

}


