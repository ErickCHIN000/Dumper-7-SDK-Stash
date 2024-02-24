#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Archmage_06_StatusEffectChance.Prestige_Archmage_06_StatusEffectChance_C
// (None)

class UClass* UPrestige_Archmage_06_StatusEffectChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Archmage_06_StatusEffectChance_C");

	return Clss;
}


// Prestige_Archmage_06_StatusEffectChance_C Prestige_Archmage_06_StatusEffectChance.Default__Prestige_Archmage_06_StatusEffectChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Archmage_06_StatusEffectChance_C* UPrestige_Archmage_06_StatusEffectChance_C::GetDefaultObj()
{
	static class UPrestige_Archmage_06_StatusEffectChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Archmage_06_StatusEffectChance_C*>(UPrestige_Archmage_06_StatusEffectChance_C::StaticClass()->DefaultObject);

	return Default;
}

}


