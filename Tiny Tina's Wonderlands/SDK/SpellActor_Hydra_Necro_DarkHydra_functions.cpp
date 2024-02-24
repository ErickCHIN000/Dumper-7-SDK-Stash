#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Hydra_Necro_DarkHydra.SpellActor_Hydra_Necro_DarkHydra_C
// (Actor)

class UClass* ASpellActor_Hydra_Necro_DarkHydra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Hydra_Necro_DarkHydra_C");

	return Clss;
}


// SpellActor_Hydra_Necro_DarkHydra_C SpellActor_Hydra_Necro_DarkHydra.Default__SpellActor_Hydra_Necro_DarkHydra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Hydra_Necro_DarkHydra_C* ASpellActor_Hydra_Necro_DarkHydra_C::GetDefaultObj()
{
	static class ASpellActor_Hydra_Necro_DarkHydra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Hydra_Necro_DarkHydra_C*>(ASpellActor_Hydra_Necro_DarkHydra_C::StaticClass()->DefaultObject);

	return Default;
}

}


