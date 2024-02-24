#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Miniboss_ZombieQueen.Challenge_Miniboss_ZombieQueen_C
// (None)

class UClass* UChallenge_Miniboss_ZombieQueen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Miniboss_ZombieQueen_C");

	return Clss;
}


// Challenge_Miniboss_ZombieQueen_C Challenge_Miniboss_ZombieQueen.Default__Challenge_Miniboss_ZombieQueen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Miniboss_ZombieQueen_C* UChallenge_Miniboss_ZombieQueen_C::GetDefaultObj()
{
	static class UChallenge_Miniboss_ZombieQueen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Miniboss_ZombieQueen_C*>(UChallenge_Miniboss_ZombieQueen_C::StaticClass()->DefaultObject);

	return Default;
}

}


