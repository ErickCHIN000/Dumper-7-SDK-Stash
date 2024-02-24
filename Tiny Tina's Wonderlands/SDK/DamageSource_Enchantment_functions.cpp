#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Enchantment.DamageSource_Enchantment_C
// (None)

class UClass* UDamageSource_Enchantment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Enchantment_C");

	return Clss;
}


// DamageSource_Enchantment_C DamageSource_Enchantment.Default__DamageSource_Enchantment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Enchantment_C* UDamageSource_Enchantment_C::GetDefaultObj()
{
	static class UDamageSource_Enchantment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Enchantment_C*>(UDamageSource_Enchantment_C::StaticClass()->DefaultObject);

	return Default;
}

}


