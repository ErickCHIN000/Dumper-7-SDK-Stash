#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA.Challenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C Challenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA.Default__Challenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C* UChallenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C*>(UChallenge_TrackedInteraction_GoldenDice_27D51D3F4FF34ECE1EB179ABD0F003EA_C::StaticClass()->DefaultObject);

	return Default;
}

}


