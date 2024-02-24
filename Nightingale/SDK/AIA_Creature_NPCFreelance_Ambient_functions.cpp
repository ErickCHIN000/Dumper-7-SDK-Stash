#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPCFreelance_Ambient.AIA_Creature_NPCFreelance_Ambient_C
// (None)

class UClass* UAIA_Creature_NPCFreelance_Ambient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPCFreelance_Ambient_C");

	return Clss;
}


// AIA_Creature_NPCFreelance_Ambient_C AIA_Creature_NPCFreelance_Ambient.Default__AIA_Creature_NPCFreelance_Ambient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPCFreelance_Ambient_C* UAIA_Creature_NPCFreelance_Ambient_C::GetDefaultObj()
{
	static class UAIA_Creature_NPCFreelance_Ambient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPCFreelance_Ambient_C*>(UAIA_Creature_NPCFreelance_Ambient_C::StaticClass()->DefaultObject);

	return Default;
}

}


