#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Analgetic.Analgetic_C
// (Actor)

class UClass* AAnalgetic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Analgetic_C");

	return Clss;
}


// Analgetic_C Analgetic.Default__Analgetic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnalgetic_C* AAnalgetic_C::GetDefaultObj()
{
	static class AAnalgetic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnalgetic_C*>(AAnalgetic_C::StaticClass()->DefaultObject);

	return Default;
}

}


