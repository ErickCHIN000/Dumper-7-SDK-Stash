#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Combat_ExplosiveHazardKill.Challenge_Combat_ExplosiveHazardKill_C
// (None)

class UClass* UChallenge_Combat_ExplosiveHazardKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Combat_ExplosiveHazardKill_C");

	return Clss;
}


// Challenge_Combat_ExplosiveHazardKill_C Challenge_Combat_ExplosiveHazardKill.Default__Challenge_Combat_ExplosiveHazardKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Combat_ExplosiveHazardKill_C* UChallenge_Combat_ExplosiveHazardKill_C::GetDefaultObj()
{
	static class UChallenge_Combat_ExplosiveHazardKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Combat_ExplosiveHazardKill_C*>(UChallenge_Combat_ExplosiveHazardKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


