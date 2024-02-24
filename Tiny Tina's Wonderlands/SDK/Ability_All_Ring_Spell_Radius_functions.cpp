#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Ring_Spell_Radius.Ability_All_Ring_Spell_Radius_C
// (None)

class UClass* UAbility_All_Ring_Spell_Radius_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Ring_Spell_Radius_C");

	return Clss;
}


// Ability_All_Ring_Spell_Radius_C Ability_All_Ring_Spell_Radius.Default__Ability_All_Ring_Spell_Radius_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Ring_Spell_Radius_C* UAbility_All_Ring_Spell_Radius_C::GetDefaultObj()
{
	static class UAbility_All_Ring_Spell_Radius_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Ring_Spell_Radius_C*>(UAbility_All_Ring_Spell_Radius_C::StaticClass()->DefaultObject);

	return Default;
}

}


