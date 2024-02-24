#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Enchantment_Slass_MeleeDmg.Init_Enchantment_Slass_MeleeDmg_C
// (None)

class UClass* UInit_Enchantment_Slass_MeleeDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Enchantment_Slass_MeleeDmg_C");

	return Clss;
}


// Init_Enchantment_Slass_MeleeDmg_C Init_Enchantment_Slass_MeleeDmg.Default__Init_Enchantment_Slass_MeleeDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Enchantment_Slass_MeleeDmg_C* UInit_Enchantment_Slass_MeleeDmg_C::GetDefaultObj()
{
	static class UInit_Enchantment_Slass_MeleeDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Enchantment_Slass_MeleeDmg_C*>(UInit_Enchantment_Slass_MeleeDmg_C::StaticClass()->DefaultObject);

	return Default;
}

}


