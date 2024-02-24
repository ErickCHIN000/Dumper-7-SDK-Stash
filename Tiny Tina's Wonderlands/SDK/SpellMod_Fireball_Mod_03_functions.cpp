#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Fireball_Mod_03.SpellMod_Fireball_Mod_03_C
// (None)

class UClass* USpellMod_Fireball_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Fireball_Mod_03_C");

	return Clss;
}


// SpellMod_Fireball_Mod_03_C SpellMod_Fireball_Mod_03.Default__SpellMod_Fireball_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Fireball_Mod_03_C* USpellMod_Fireball_Mod_03_C::GetDefaultObj()
{
	static class USpellMod_Fireball_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Fireball_Mod_03_C*>(USpellMod_Fireball_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


