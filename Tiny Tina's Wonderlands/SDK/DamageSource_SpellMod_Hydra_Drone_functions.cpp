#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_SpellMod_Hydra_Drone.DamageSource_SpellMod_Hydra_Drone_C
// (None)

class UClass* UDamageSource_SpellMod_Hydra_Drone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_SpellMod_Hydra_Drone_C");

	return Clss;
}


// DamageSource_SpellMod_Hydra_Drone_C DamageSource_SpellMod_Hydra_Drone.Default__DamageSource_SpellMod_Hydra_Drone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_SpellMod_Hydra_Drone_C* UDamageSource_SpellMod_Hydra_Drone_C::GetDefaultObj()
{
	static class UDamageSource_SpellMod_Hydra_Drone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_SpellMod_Hydra_Drone_C*>(UDamageSource_SpellMod_Hydra_Drone_C::StaticClass()->DefaultObject);

	return Default;
}

}


