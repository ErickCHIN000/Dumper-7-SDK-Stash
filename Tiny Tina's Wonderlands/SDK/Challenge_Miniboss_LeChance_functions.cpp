#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Miniboss_LeChance.Challenge_Miniboss_LeChance_C
// (None)

class UClass* UChallenge_Miniboss_LeChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Miniboss_LeChance_C");

	return Clss;
}


// Challenge_Miniboss_LeChance_C Challenge_Miniboss_LeChance.Default__Challenge_Miniboss_LeChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Miniboss_LeChance_C* UChallenge_Miniboss_LeChance_C::GetDefaultObj()
{
	static class UChallenge_Miniboss_LeChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Miniboss_LeChance_C*>(UChallenge_Miniboss_LeChance_C::StaticClass()->DefaultObject);

	return Default;
}

}


