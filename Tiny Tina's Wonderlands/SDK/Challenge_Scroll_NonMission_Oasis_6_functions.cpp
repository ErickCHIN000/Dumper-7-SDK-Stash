#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Scroll_NonMission_Oasis_6.Challenge_Scroll_NonMission_Oasis_6_C
// (None)

class UClass* UChallenge_Scroll_NonMission_Oasis_6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Scroll_NonMission_Oasis_6_C");

	return Clss;
}


// Challenge_Scroll_NonMission_Oasis_6_C Challenge_Scroll_NonMission_Oasis_6.Default__Challenge_Scroll_NonMission_Oasis_6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Scroll_NonMission_Oasis_6_C* UChallenge_Scroll_NonMission_Oasis_6_C::GetDefaultObj()
{
	static class UChallenge_Scroll_NonMission_Oasis_6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Scroll_NonMission_Oasis_6_C*>(UChallenge_Scroll_NonMission_Oasis_6_C::StaticClass()->DefaultObject);

	return Default;
}

}


