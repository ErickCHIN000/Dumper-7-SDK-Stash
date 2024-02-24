#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Kill_Crit.Challenge_Kill_Crit_C
// (None)

class UClass* UChallenge_Kill_Crit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Kill_Crit_C");

	return Clss;
}


// Challenge_Kill_Crit_C Challenge_Kill_Crit.Default__Challenge_Kill_Crit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Kill_Crit_C* UChallenge_Kill_Crit_C::GetDefaultObj()
{
	static class UChallenge_Kill_Crit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Kill_Crit_C*>(UChallenge_Kill_Crit_C::StaticClass()->DefaultObject);

	return Default;
}

}


