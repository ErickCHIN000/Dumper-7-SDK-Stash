#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_SpellMod_Fire.BPCS_SpellMod_Fire_C
// (None)

class UClass* UBPCS_SpellMod_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_SpellMod_Fire_C");

	return Clss;
}


// BPCS_SpellMod_Fire_C BPCS_SpellMod_Fire.Default__BPCS_SpellMod_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_SpellMod_Fire_C* UBPCS_SpellMod_Fire_C::GetDefaultObj()
{
	static class UBPCS_SpellMod_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_SpellMod_Fire_C*>(UBPCS_SpellMod_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


