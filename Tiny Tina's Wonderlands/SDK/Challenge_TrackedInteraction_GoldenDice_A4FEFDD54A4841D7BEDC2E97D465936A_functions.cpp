#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A.Challenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C Challenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A.Default__Challenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C* UChallenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C*>(UChallenge_TrackedInteraction_GoldenDice_A4FEFDD54A4841D7BEDC2E97D465936A_C::StaticClass()->DefaultObject);

	return Default;
}

}

