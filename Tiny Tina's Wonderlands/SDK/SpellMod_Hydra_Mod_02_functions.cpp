#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Hydra_Mod_02.SpellMod_Hydra_Mod_02_C
// (None)

class UClass* USpellMod_Hydra_Mod_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Hydra_Mod_02_C");

	return Clss;
}


// SpellMod_Hydra_Mod_02_C SpellMod_Hydra_Mod_02.Default__SpellMod_Hydra_Mod_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Hydra_Mod_02_C* USpellMod_Hydra_Mod_02_C::GetDefaultObj()
{
	static class USpellMod_Hydra_Mod_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Hydra_Mod_02_C*>(USpellMod_Hydra_Mod_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


