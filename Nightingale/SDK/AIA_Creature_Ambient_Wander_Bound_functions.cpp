#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Ambient_Wander_Bound.AIA_Creature_Ambient_Wander_Bound_C
// (None)

class UClass* UAIA_Creature_Ambient_Wander_Bound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Ambient_Wander_Bound_C");

	return Clss;
}


// AIA_Creature_Ambient_Wander_Bound_C AIA_Creature_Ambient_Wander_Bound.Default__AIA_Creature_Ambient_Wander_Bound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Ambient_Wander_Bound_C* UAIA_Creature_Ambient_Wander_Bound_C::GetDefaultObj()
{
	static class UAIA_Creature_Ambient_Wander_Bound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Ambient_Wander_Bound_C*>(UAIA_Creature_Ambient_Wander_Bound_C::StaticClass()->DefaultObject);

	return Default;
}

}


