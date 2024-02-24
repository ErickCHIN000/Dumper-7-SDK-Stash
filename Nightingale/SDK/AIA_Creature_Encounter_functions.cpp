#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Encounter.AIA_Creature_Encounter_C
// (None)

class UClass* UAIA_Creature_Encounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Encounter_C");

	return Clss;
}


// AIA_Creature_Encounter_C AIA_Creature_Encounter.Default__AIA_Creature_Encounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Encounter_C* UAIA_Creature_Encounter_C::GetDefaultObj()
{
	static class UAIA_Creature_Encounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Encounter_C*>(UAIA_Creature_Encounter_C::StaticClass()->DefaultObject);

	return Default;
}

}


