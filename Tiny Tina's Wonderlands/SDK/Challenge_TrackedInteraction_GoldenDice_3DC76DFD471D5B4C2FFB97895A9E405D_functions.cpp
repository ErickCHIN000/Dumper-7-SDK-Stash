#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D.Challenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C Challenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D.Default__Challenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C* UChallenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C*>(UChallenge_TrackedInteraction_GoldenDice_3DC76DFD471D5B4C2FFB97895A9E405D_C::StaticClass()->DefaultObject);

	return Default;
}

}

