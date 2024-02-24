#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E.Challenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C Challenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E.Default__Challenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C* UChallenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C*>(UChallenge_TrackedInteraction_GoldenDice_5E8E2C33414BEAD0FE1619AA450AD44E_C::StaticClass()->DefaultObject);

	return Default;
}

}


