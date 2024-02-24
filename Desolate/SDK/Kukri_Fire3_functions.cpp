#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kukri_Fire3.Kukri_Fire3_C
// (Actor)

class UClass* AKukri_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kukri_Fire3_C");

	return Clss;
}


// Kukri_Fire3_C Kukri_Fire3.Default__Kukri_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKukri_Fire3_C* AKukri_Fire3_C::GetDefaultObj()
{
	static class AKukri_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKukri_Fire3_C*>(AKukri_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}


