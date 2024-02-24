#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC.Challenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C Challenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC.Default__Challenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C* UChallenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C*>(UChallenge_TrackedInteraction_GoldenDice_B80D5C294E44AFE6BA11FC826EB1D5EC_C::StaticClass()->DefaultObject);

	return Default;
}

}


