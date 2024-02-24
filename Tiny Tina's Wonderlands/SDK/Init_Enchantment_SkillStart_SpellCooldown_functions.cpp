#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Enchantment_SkillStart_SpellCooldown.Init_Enchantment_SkillStart_SpellCooldown_C
// (None)

class UClass* UInit_Enchantment_SkillStart_SpellCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Enchantment_SkillStart_SpellCooldown_C");

	return Clss;
}


// Init_Enchantment_SkillStart_SpellCooldown_C Init_Enchantment_SkillStart_SpellCooldown.Default__Init_Enchantment_SkillStart_SpellCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Enchantment_SkillStart_SpellCooldown_C* UInit_Enchantment_SkillStart_SpellCooldown_C::GetDefaultObj()
{
	static class UInit_Enchantment_SkillStart_SpellCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Enchantment_SkillStart_SpellCooldown_C*>(UInit_Enchantment_SkillStart_SpellCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


