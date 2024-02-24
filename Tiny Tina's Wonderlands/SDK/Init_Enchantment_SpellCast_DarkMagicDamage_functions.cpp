#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Enchantment_SpellCast_DarkMagicDamage.Init_Enchantment_SpellCast_DarkMagicDamage_C
// (None)

class UClass* UInit_Enchantment_SpellCast_DarkMagicDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Enchantment_SpellCast_DarkMagicDamage_C");

	return Clss;
}


// Init_Enchantment_SpellCast_DarkMagicDamage_C Init_Enchantment_SpellCast_DarkMagicDamage.Default__Init_Enchantment_SpellCast_DarkMagicDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Enchantment_SpellCast_DarkMagicDamage_C* UInit_Enchantment_SpellCast_DarkMagicDamage_C::GetDefaultObj()
{
	static class UInit_Enchantment_SpellCast_DarkMagicDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Enchantment_SpellCast_DarkMagicDamage_C*>(UInit_Enchantment_SpellCast_DarkMagicDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


