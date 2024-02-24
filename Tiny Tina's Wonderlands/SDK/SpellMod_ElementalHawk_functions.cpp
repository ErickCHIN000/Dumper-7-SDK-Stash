#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_ElementalHawk.SpellMod_ElementalHawk_C
// (None)

class UClass* USpellMod_ElementalHawk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_ElementalHawk_C");

	return Clss;
}


// SpellMod_ElementalHawk_C SpellMod_ElementalHawk.Default__SpellMod_ElementalHawk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_ElementalHawk_C* USpellMod_ElementalHawk_C::GetDefaultObj()
{
	static class USpellMod_ElementalHawk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_ElementalHawk_C*>(USpellMod_ElementalHawk_C::StaticClass()->DefaultObject);

	return Default;
}

}


