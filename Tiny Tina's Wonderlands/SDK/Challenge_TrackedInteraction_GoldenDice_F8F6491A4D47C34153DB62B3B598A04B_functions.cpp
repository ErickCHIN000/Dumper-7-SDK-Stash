#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B.Challenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C Challenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B.Default__Challenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C* UChallenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C*>(UChallenge_TrackedInteraction_GoldenDice_F8F6491A4D47C34153DB62B3B598A04B_C::StaticClass()->DefaultObject);

	return Default;
}

}


