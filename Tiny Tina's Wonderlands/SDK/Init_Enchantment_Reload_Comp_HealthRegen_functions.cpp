#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Enchantment_Reload_Comp_HealthRegen.Init_Enchantment_Reload_Comp_HealthRegen_C
// (None)

class UClass* UInit_Enchantment_Reload_Comp_HealthRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Enchantment_Reload_Comp_HealthRegen_C");

	return Clss;
}


// Init_Enchantment_Reload_Comp_HealthRegen_C Init_Enchantment_Reload_Comp_HealthRegen.Default__Init_Enchantment_Reload_Comp_HealthRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Enchantment_Reload_Comp_HealthRegen_C* UInit_Enchantment_Reload_Comp_HealthRegen_C::GetDefaultObj()
{
	static class UInit_Enchantment_Reload_Comp_HealthRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Enchantment_Reload_Comp_HealthRegen_C*>(UInit_Enchantment_Reload_Comp_HealthRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


