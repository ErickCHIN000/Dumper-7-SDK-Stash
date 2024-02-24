#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_GoldenDice_MapMeta_Overworld.Challenge_Crew_GoldenDice_MapMeta_Overworld_C
// (None)

class UClass* UChallenge_Crew_GoldenDice_MapMeta_Overworld_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_GoldenDice_MapMeta_Overworld_C");

	return Clss;
}


// Challenge_Crew_GoldenDice_MapMeta_Overworld_C Challenge_Crew_GoldenDice_MapMeta_Overworld.Default__Challenge_Crew_GoldenDice_MapMeta_Overworld_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_GoldenDice_MapMeta_Overworld_C* UChallenge_Crew_GoldenDice_MapMeta_Overworld_C::GetDefaultObj()
{
	static class UChallenge_Crew_GoldenDice_MapMeta_Overworld_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_GoldenDice_MapMeta_Overworld_C*>(UChallenge_Crew_GoldenDice_MapMeta_Overworld_C::StaticClass()->DefaultObject);

	return Default;
}

}


