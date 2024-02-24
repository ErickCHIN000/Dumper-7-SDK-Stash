#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Hydra_Mod_04.SpellMod_Hydra_Mod_04_C
// (None)

class UClass* USpellMod_Hydra_Mod_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Hydra_Mod_04_C");

	return Clss;
}


// SpellMod_Hydra_Mod_04_C SpellMod_Hydra_Mod_04.Default__SpellMod_Hydra_Mod_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Hydra_Mod_04_C* USpellMod_Hydra_Mod_04_C::GetDefaultObj()
{
	static class USpellMod_Hydra_Mod_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Hydra_Mod_04_C*>(USpellMod_Hydra_Mod_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


