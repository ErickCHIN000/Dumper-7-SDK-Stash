#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_FastTravel_AtlasHQ1.Challenge_FastTravel_AtlasHQ1_C
// (None)

class UClass* UChallenge_FastTravel_AtlasHQ1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_FastTravel_AtlasHQ1_C");

	return Clss;
}


// Challenge_FastTravel_AtlasHQ1_C Challenge_FastTravel_AtlasHQ1.Default__Challenge_FastTravel_AtlasHQ1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_FastTravel_AtlasHQ1_C* UChallenge_FastTravel_AtlasHQ1_C::GetDefaultObj()
{
	static class UChallenge_FastTravel_AtlasHQ1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_FastTravel_AtlasHQ1_C*>(UChallenge_FastTravel_AtlasHQ1_C::StaticClass()->DefaultObject);

	return Default;
}

}


