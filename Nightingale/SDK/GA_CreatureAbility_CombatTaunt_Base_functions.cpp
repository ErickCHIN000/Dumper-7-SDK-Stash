#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_CombatTaunt_Base.GA_CreatureAbility_CombatTaunt_Base_C
// (None)

class UClass* UGA_CreatureAbility_CombatTaunt_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_CombatTaunt_Base_C");

	return Clss;
}


// GA_CreatureAbility_CombatTaunt_Base_C GA_CreatureAbility_CombatTaunt_Base.Default__GA_CreatureAbility_CombatTaunt_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_CombatTaunt_Base_C* UGA_CreatureAbility_CombatTaunt_Base_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_CombatTaunt_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_CombatTaunt_Base_C*>(UGA_CreatureAbility_CombatTaunt_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


