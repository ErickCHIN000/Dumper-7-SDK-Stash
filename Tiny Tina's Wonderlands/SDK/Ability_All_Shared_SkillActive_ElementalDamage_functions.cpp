#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Shared_SkillActive_ElementalDamage.Ability_All_Shared_SkillActive_ElementalDamage_C
// (None)

class UClass* UAbility_All_Shared_SkillActive_ElementalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Shared_SkillActive_ElementalDamage_C");

	return Clss;
}


// Ability_All_Shared_SkillActive_ElementalDamage_C Ability_All_Shared_SkillActive_ElementalDamage.Default__Ability_All_Shared_SkillActive_ElementalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Shared_SkillActive_ElementalDamage_C* UAbility_All_Shared_SkillActive_ElementalDamage_C::GetDefaultObj()
{
	static class UAbility_All_Shared_SkillActive_ElementalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Shared_SkillActive_ElementalDamage_C*>(UAbility_All_Shared_SkillActive_ElementalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


