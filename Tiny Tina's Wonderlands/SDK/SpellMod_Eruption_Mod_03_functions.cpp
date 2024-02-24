#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Eruption_Mod_03.SpellMod_Eruption_Mod_03_C
// (None)

class UClass* USpellMod_Eruption_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Eruption_Mod_03_C");

	return Clss;
}


// SpellMod_Eruption_Mod_03_C SpellMod_Eruption_Mod_03.Default__SpellMod_Eruption_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Eruption_Mod_03_C* USpellMod_Eruption_Mod_03_C::GetDefaultObj()
{
	static class USpellMod_Eruption_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Eruption_Mod_03_C*>(USpellMod_Eruption_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


