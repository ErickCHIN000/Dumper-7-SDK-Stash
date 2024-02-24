#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_FastTravel.Challenge_FastTravel_C
// (None)

class UClass* UChallenge_FastTravel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_FastTravel_C");

	return Clss;
}


// Challenge_FastTravel_C Challenge_FastTravel.Default__Challenge_FastTravel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_FastTravel_C* UChallenge_FastTravel_C::GetDefaultObj()
{
	static class UChallenge_FastTravel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_FastTravel_C*>(UChallenge_FastTravel_C::StaticClass()->DefaultObject);

	return Default;
}

}


