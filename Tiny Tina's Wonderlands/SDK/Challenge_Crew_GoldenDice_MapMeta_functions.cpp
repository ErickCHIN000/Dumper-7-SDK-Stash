#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_GoldenDice_MapMeta.Challenge_Crew_GoldenDice_MapMeta_C
// (None)

class UClass* UChallenge_Crew_GoldenDice_MapMeta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_GoldenDice_MapMeta_C");

	return Clss;
}


// Challenge_Crew_GoldenDice_MapMeta_C Challenge_Crew_GoldenDice_MapMeta.Default__Challenge_Crew_GoldenDice_MapMeta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_GoldenDice_MapMeta_C* UChallenge_Crew_GoldenDice_MapMeta_C::GetDefaultObj()
{
	static class UChallenge_Crew_GoldenDice_MapMeta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_GoldenDice_MapMeta_C*>(UChallenge_Crew_GoldenDice_MapMeta_C::StaticClass()->DefaultObject);

	return Default;
}

}


