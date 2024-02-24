#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_StatusEffect_SpiritSwarm.DamageSource_StatusEffect_SpiritSwarm_C
// (None)

class UClass* UDamageSource_StatusEffect_SpiritSwarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_StatusEffect_SpiritSwarm_C");

	return Clss;
}


// DamageSource_StatusEffect_SpiritSwarm_C DamageSource_StatusEffect_SpiritSwarm.Default__DamageSource_StatusEffect_SpiritSwarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_StatusEffect_SpiritSwarm_C* UDamageSource_StatusEffect_SpiritSwarm_C::GetDefaultObj()
{
	static class UDamageSource_StatusEffect_SpiritSwarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_StatusEffect_SpiritSwarm_C*>(UDamageSource_StatusEffect_SpiritSwarm_C::StaticClass()->DefaultObject);

	return Default;
}

}


