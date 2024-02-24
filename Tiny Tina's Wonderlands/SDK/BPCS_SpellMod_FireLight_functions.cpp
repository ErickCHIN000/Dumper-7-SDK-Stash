#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_SpellMod_FireLight.BPCS_SpellMod_FireLight_C
// (None)

class UClass* UBPCS_SpellMod_FireLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_SpellMod_FireLight_C");

	return Clss;
}


// BPCS_SpellMod_FireLight_C BPCS_SpellMod_FireLight.Default__BPCS_SpellMod_FireLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_SpellMod_FireLight_C* UBPCS_SpellMod_FireLight_C::GetDefaultObj()
{
	static class UBPCS_SpellMod_FireLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_SpellMod_FireLight_C*>(UBPCS_SpellMod_FireLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


