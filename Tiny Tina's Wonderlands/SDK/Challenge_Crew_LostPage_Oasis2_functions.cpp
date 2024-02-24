#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_LostPage_Oasis2.Challenge_Crew_LostPage_Oasis2_C
// (None)

class UClass* UChallenge_Crew_LostPage_Oasis2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_LostPage_Oasis2_C");

	return Clss;
}


// Challenge_Crew_LostPage_Oasis2_C Challenge_Crew_LostPage_Oasis2.Default__Challenge_Crew_LostPage_Oasis2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_LostPage_Oasis2_C* UChallenge_Crew_LostPage_Oasis2_C::GetDefaultObj()
{
	static class UChallenge_Crew_LostPage_Oasis2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_LostPage_Oasis2_C*>(UChallenge_Crew_LostPage_Oasis2_C::StaticClass()->DefaultObject);

	return Default;
}

}


