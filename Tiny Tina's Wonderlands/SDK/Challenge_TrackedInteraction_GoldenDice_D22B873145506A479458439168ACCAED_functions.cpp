#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED.Challenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C Challenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED.Default__Challenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C* UChallenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C*>(UChallenge_TrackedInteraction_GoldenDice_D22B873145506A479458439168ACCAED_C::StaticClass()->DefaultObject);

	return Default;
}

}


