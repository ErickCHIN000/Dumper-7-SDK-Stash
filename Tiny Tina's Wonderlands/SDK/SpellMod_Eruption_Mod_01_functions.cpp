#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Eruption_Mod_01.SpellMod_Eruption_Mod_01_C
// (None)

class UClass* USpellMod_Eruption_Mod_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Eruption_Mod_01_C");

	return Clss;
}


// SpellMod_Eruption_Mod_01_C SpellMod_Eruption_Mod_01.Default__SpellMod_Eruption_Mod_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Eruption_Mod_01_C* USpellMod_Eruption_Mod_01_C::GetDefaultObj()
{
	static class USpellMod_Eruption_Mod_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Eruption_Mod_01_C*>(USpellMod_Eruption_Mod_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


