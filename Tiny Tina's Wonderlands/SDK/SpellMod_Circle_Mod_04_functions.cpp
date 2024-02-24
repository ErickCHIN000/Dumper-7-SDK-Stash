#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Circle_Mod_04.SpellMod_Circle_Mod_04_C
// (None)

class UClass* USpellMod_Circle_Mod_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Circle_Mod_04_C");

	return Clss;
}


// SpellMod_Circle_Mod_04_C SpellMod_Circle_Mod_04.Default__SpellMod_Circle_Mod_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Circle_Mod_04_C* USpellMod_Circle_Mod_04_C::GetDefaultObj()
{
	static class USpellMod_Circle_Mod_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Circle_Mod_04_C*>(USpellMod_Circle_Mod_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


