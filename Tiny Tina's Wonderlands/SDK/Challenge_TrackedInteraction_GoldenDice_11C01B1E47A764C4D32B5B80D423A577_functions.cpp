#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577.Challenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C Challenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577.Default__Challenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C* UChallenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C*>(UChallenge_TrackedInteraction_GoldenDice_11C01B1E47A764C4D32B5B80D423A577_C::StaticClass()->DefaultObject);

	return Default;
}

}


