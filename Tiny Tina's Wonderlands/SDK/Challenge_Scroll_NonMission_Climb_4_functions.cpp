#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Scroll_NonMission_Climb_4.Challenge_Scroll_NonMission_Climb_4_C
// (None)

class UClass* UChallenge_Scroll_NonMission_Climb_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Scroll_NonMission_Climb_4_C");

	return Clss;
}


// Challenge_Scroll_NonMission_Climb_4_C Challenge_Scroll_NonMission_Climb_4.Default__Challenge_Scroll_NonMission_Climb_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Scroll_NonMission_Climb_4_C* UChallenge_Scroll_NonMission_Climb_4_C::GetDefaultObj()
{
	static class UChallenge_Scroll_NonMission_Climb_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Scroll_NonMission_Climb_4_C*>(UChallenge_Scroll_NonMission_Climb_4_C::StaticClass()->DefaultObject);

	return Default;
}

}


