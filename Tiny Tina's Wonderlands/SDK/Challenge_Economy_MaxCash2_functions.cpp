#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Economy_MaxCash2.Challenge_Economy_MaxCash2_C
// (None)

class UClass* UChallenge_Economy_MaxCash2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Economy_MaxCash2_C");

	return Clss;
}


// Challenge_Economy_MaxCash2_C Challenge_Economy_MaxCash2.Default__Challenge_Economy_MaxCash2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Economy_MaxCash2_C* UChallenge_Economy_MaxCash2_C::GetDefaultObj()
{
	static class UChallenge_Economy_MaxCash2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Economy_MaxCash2_C*>(UChallenge_Economy_MaxCash2_C::StaticClass()->DefaultObject);

	return Default;
}

}


