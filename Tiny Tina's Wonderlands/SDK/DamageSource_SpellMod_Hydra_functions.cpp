#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_SpellMod_Hydra.DamageSource_SpellMod_Hydra_C
// (None)

class UClass* UDamageSource_SpellMod_Hydra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_SpellMod_Hydra_C");

	return Clss;
}


// DamageSource_SpellMod_Hydra_C DamageSource_SpellMod_Hydra.Default__DamageSource_SpellMod_Hydra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_SpellMod_Hydra_C* UDamageSource_SpellMod_Hydra_C::GetDefaultObj()
{
	static class UDamageSource_SpellMod_Hydra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_SpellMod_Hydra_C*>(UDamageSource_SpellMod_Hydra_C::StaticClass()->DefaultObject);

	return Default;
}

}


