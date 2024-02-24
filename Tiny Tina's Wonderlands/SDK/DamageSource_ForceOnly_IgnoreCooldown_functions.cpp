#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_ForceOnly_IgnoreCooldown.DamageSource_ForceOnly_IgnoreCooldown_C
// (None)

class UClass* UDamageSource_ForceOnly_IgnoreCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_ForceOnly_IgnoreCooldown_C");

	return Clss;
}


// DamageSource_ForceOnly_IgnoreCooldown_C DamageSource_ForceOnly_IgnoreCooldown.Default__DamageSource_ForceOnly_IgnoreCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_ForceOnly_IgnoreCooldown_C* UDamageSource_ForceOnly_IgnoreCooldown_C::GetDefaultObj()
{
	static class UDamageSource_ForceOnly_IgnoreCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_ForceOnly_IgnoreCooldown_C*>(UDamageSource_ForceOnly_IgnoreCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


