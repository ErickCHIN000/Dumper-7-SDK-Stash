#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Miniboss_Wastard.Challenge_Miniboss_Wastard_C
// (None)

class UClass* UChallenge_Miniboss_Wastard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Miniboss_Wastard_C");

	return Clss;
}


// Challenge_Miniboss_Wastard_C Challenge_Miniboss_Wastard.Default__Challenge_Miniboss_Wastard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Miniboss_Wastard_C* UChallenge_Miniboss_Wastard_C::GetDefaultObj()
{
	static class UChallenge_Miniboss_Wastard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Miniboss_Wastard_C*>(UChallenge_Miniboss_Wastard_C::StaticClass()->DefaultObject);

	return Default;
}

}


