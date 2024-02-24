#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Archmage_02_SpellCrit_Damage.Prestige_Archmage_02_SpellCrit_Damage_C
// (None)

class UClass* UPrestige_Archmage_02_SpellCrit_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Archmage_02_SpellCrit_Damage_C");

	return Clss;
}


// Prestige_Archmage_02_SpellCrit_Damage_C Prestige_Archmage_02_SpellCrit_Damage.Default__Prestige_Archmage_02_SpellCrit_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Archmage_02_SpellCrit_Damage_C* UPrestige_Archmage_02_SpellCrit_Damage_C::GetDefaultObj()
{
	static class UPrestige_Archmage_02_SpellCrit_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Archmage_02_SpellCrit_Damage_C*>(UPrestige_Archmage_02_SpellCrit_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


