#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Enemy_Crab.Challenge_Enemy_Crab_C
// (None)

class UClass* UChallenge_Enemy_Crab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Enemy_Crab_C");

	return Clss;
}


// Challenge_Enemy_Crab_C Challenge_Enemy_Crab.Default__Challenge_Enemy_Crab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Enemy_Crab_C* UChallenge_Enemy_Crab_C::GetDefaultObj()
{
	static class UChallenge_Enemy_Crab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Enemy_Crab_C*>(UChallenge_Enemy_Crab_C::StaticClass()->DefaultObject);

	return Default;
}

}


