#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama_Fire3.Kama_Fire3_C
// (Actor)

class UClass* AKama_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_Fire3_C");

	return Clss;
}


// Kama_Fire3_C Kama_Fire3.Default__Kama_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_Fire3_C* AKama_Fire3_C::GetDefaultObj()
{
	static class AKama_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_Fire3_C*>(AKama_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}


