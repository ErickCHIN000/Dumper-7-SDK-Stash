#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_RuneSwitch_Goblin.Challenge_Crew_RuneSwitch_Goblin_C
// (None)

class UClass* UChallenge_Crew_RuneSwitch_Goblin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_RuneSwitch_Goblin_C");

	return Clss;
}


// Challenge_Crew_RuneSwitch_Goblin_C Challenge_Crew_RuneSwitch_Goblin.Default__Challenge_Crew_RuneSwitch_Goblin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_RuneSwitch_Goblin_C* UChallenge_Crew_RuneSwitch_Goblin_C::GetDefaultObj()
{
	static class UChallenge_Crew_RuneSwitch_Goblin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_RuneSwitch_Goblin_C*>(UChallenge_Crew_RuneSwitch_Goblin_C::StaticClass()->DefaultObject);

	return Default;
}

}


