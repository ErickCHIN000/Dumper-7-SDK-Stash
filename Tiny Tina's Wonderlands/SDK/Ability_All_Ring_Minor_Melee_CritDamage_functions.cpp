#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Ring_Minor_Melee_CritDamage.Ability_All_Ring_Minor_Melee_CritDamage_C
// (None)

class UClass* UAbility_All_Ring_Minor_Melee_CritDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Ring_Minor_Melee_CritDamage_C");

	return Clss;
}


// Ability_All_Ring_Minor_Melee_CritDamage_C Ability_All_Ring_Minor_Melee_CritDamage.Default__Ability_All_Ring_Minor_Melee_CritDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Ring_Minor_Melee_CritDamage_C* UAbility_All_Ring_Minor_Melee_CritDamage_C::GetDefaultObj()
{
	static class UAbility_All_Ring_Minor_Melee_CritDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Ring_Minor_Melee_CritDamage_C*>(UAbility_All_Ring_Minor_Melee_CritDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


