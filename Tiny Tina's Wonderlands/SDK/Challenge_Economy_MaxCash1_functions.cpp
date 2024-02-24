#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Economy_MaxCash1.Challenge_Economy_MaxCash1_C
// (None)

class UClass* UChallenge_Economy_MaxCash1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Economy_MaxCash1_C");

	return Clss;
}


// Challenge_Economy_MaxCash1_C Challenge_Economy_MaxCash1.Default__Challenge_Economy_MaxCash1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Economy_MaxCash1_C* UChallenge_Economy_MaxCash1_C::GetDefaultObj()
{
	static class UChallenge_Economy_MaxCash1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Economy_MaxCash1_C*>(UChallenge_Economy_MaxCash1_C::StaticClass()->DefaultObject);

	return Default;
}

}


