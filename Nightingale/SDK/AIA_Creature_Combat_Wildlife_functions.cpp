#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife.AIA_Creature_Combat_Wildlife_C
// (None)

class UClass* UAIA_Creature_Combat_Wildlife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_Wildlife_C");

	return Clss;
}


// AIA_Creature_Combat_Wildlife_C AIA_Creature_Combat_Wildlife.Default__AIA_Creature_Combat_Wildlife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_Wildlife_C* UAIA_Creature_Combat_Wildlife_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_Wildlife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_Wildlife_C*>(UAIA_Creature_Combat_Wildlife_C::StaticClass()->DefaultObject);

	return Default;
}

}


