#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Side_ClaptrapGrenade.Challenge_Mission_Side_ClaptrapGrenade_C
// (None)

class UClass* UChallenge_Mission_Side_ClaptrapGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Side_ClaptrapGrenade_C");

	return Clss;
}


// Challenge_Mission_Side_ClaptrapGrenade_C Challenge_Mission_Side_ClaptrapGrenade.Default__Challenge_Mission_Side_ClaptrapGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Side_ClaptrapGrenade_C* UChallenge_Mission_Side_ClaptrapGrenade_C::GetDefaultObj()
{
	static class UChallenge_Mission_Side_ClaptrapGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Side_ClaptrapGrenade_C*>(UChallenge_Mission_Side_ClaptrapGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}

