#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Side_CloggageOfTheDamned.Challenge_Mission_Side_CloggageOfTheDamned_C
// (None)

class UClass* UChallenge_Mission_Side_CloggageOfTheDamned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Side_CloggageOfTheDamned_C");

	return Clss;
}


// Challenge_Mission_Side_CloggageOfTheDamned_C Challenge_Mission_Side_CloggageOfTheDamned.Default__Challenge_Mission_Side_CloggageOfTheDamned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Side_CloggageOfTheDamned_C* UChallenge_Mission_Side_CloggageOfTheDamned_C::GetDefaultObj()
{
	static class UChallenge_Mission_Side_CloggageOfTheDamned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Side_CloggageOfTheDamned_C*>(UChallenge_Mission_Side_CloggageOfTheDamned_C::StaticClass()->DefaultObject);

	return Default;
}

}


