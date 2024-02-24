#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Level40.Challenge_Level40_C
// (None)

class UClass* UChallenge_Level40_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Level40_C");

	return Clss;
}


// Challenge_Level40_C Challenge_Level40.Default__Challenge_Level40_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Level40_C* UChallenge_Level40_C::GetDefaultObj()
{
	static class UChallenge_Level40_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Level40_C*>(UChallenge_Level40_C::StaticClass()->DefaultObject);

	return Default;
}

}


