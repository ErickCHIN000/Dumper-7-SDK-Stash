#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183.Challenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C Challenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183.Default__Challenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C* UChallenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C*>(UChallenge_TrackedInteraction_GoldenDice_B1B97AA3439F4AEE8EBA098A9D179183_C::StaticClass()->DefaultObject);

	return Default;
}

}

