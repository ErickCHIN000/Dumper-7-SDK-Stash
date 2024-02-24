#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Disease_LightBurns.Disease_LightBurns_C
// (Actor)

class UClass* ADisease_LightBurns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Disease_LightBurns_C");

	return Clss;
}


// Disease_LightBurns_C Disease_LightBurns.Default__Disease_LightBurns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADisease_LightBurns_C* ADisease_LightBurns_C::GetDefaultObj()
{
	static class ADisease_LightBurns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADisease_LightBurns_C*>(ADisease_LightBurns_C::StaticClass()->DefaultObject);

	return Default;
}

}


