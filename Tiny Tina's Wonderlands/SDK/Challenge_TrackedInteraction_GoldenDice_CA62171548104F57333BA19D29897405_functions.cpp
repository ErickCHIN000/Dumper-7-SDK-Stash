#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405.Challenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C Challenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405.Default__Challenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C* UChallenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C*>(UChallenge_TrackedInteraction_GoldenDice_CA62171548104F57333BA19D29897405_C::StaticClass()->DefaultObject);

	return Default;
}

}


