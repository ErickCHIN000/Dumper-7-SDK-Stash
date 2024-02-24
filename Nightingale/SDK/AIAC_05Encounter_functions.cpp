#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAC_05Encounter.AIAC_05Encounter_C
// (None)

class UClass* UAIAC_05Encounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAC_05Encounter_C");

	return Clss;
}


// AIAC_05Encounter_C AIAC_05Encounter.Default__AIAC_05Encounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAC_05Encounter_C* UAIAC_05Encounter_C::GetDefaultObj()
{
	static class UAIAC_05Encounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAC_05Encounter_C*>(UAIAC_05Encounter_C::StaticClass()->DefaultObject);

	return Default;
}

}


