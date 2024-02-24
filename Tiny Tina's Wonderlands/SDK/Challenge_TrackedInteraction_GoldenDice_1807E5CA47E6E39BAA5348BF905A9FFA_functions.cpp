#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA.Challenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C Challenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA.Default__Challenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C* UChallenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C*>(UChallenge_TrackedInteraction_GoldenDice_1807E5CA47E6E39BAA5348BF905A9FFA_C::StaticClass()->DefaultObject);

	return Default;
}

}


