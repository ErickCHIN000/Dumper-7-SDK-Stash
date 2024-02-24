#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Major_CrookedEyePhil.Challenge_Major_CrookedEyePhil_C
// (None)

class UClass* UChallenge_Major_CrookedEyePhil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Major_CrookedEyePhil_C");

	return Clss;
}


// Challenge_Major_CrookedEyePhil_C Challenge_Major_CrookedEyePhil.Default__Challenge_Major_CrookedEyePhil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Major_CrookedEyePhil_C* UChallenge_Major_CrookedEyePhil_C::GetDefaultObj()
{
	static class UChallenge_Major_CrookedEyePhil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Major_CrookedEyePhil_C*>(UChallenge_Major_CrookedEyePhil_C::StaticClass()->DefaultObject);

	return Default;
}

}


