#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Major_Doomed.Challenge_Major_Doomed_C
// (None)

class UClass* UChallenge_Major_Doomed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Major_Doomed_C");

	return Clss;
}


// Challenge_Major_Doomed_C Challenge_Major_Doomed.Default__Challenge_Major_Doomed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Major_Doomed_C* UChallenge_Major_Doomed_C::GetDefaultObj()
{
	static class UChallenge_Major_Doomed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Major_Doomed_C*>(UChallenge_Major_Doomed_C::StaticClass()->DefaultObject);

	return Default;
}

}


