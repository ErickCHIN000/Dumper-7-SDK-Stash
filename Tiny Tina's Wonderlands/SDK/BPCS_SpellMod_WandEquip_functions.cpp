#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_SpellMod_WandEquip.BPCS_SpellMod_WandEquip_C
// (None)

class UClass* UBPCS_SpellMod_WandEquip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_SpellMod_WandEquip_C");

	return Clss;
}


// BPCS_SpellMod_WandEquip_C BPCS_SpellMod_WandEquip.Default__BPCS_SpellMod_WandEquip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_SpellMod_WandEquip_C* UBPCS_SpellMod_WandEquip_C::GetDefaultObj()
{
	static class UBPCS_SpellMod_WandEquip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_SpellMod_WandEquip_C*>(UBPCS_SpellMod_WandEquip_C::StaticClass()->DefaultObject);

	return Default;
}

}


