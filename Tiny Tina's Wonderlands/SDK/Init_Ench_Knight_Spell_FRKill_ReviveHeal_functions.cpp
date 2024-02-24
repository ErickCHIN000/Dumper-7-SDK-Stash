#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Knight_Spell_FRKill_ReviveHeal.Init_Ench_Knight_Spell_FRKill_ReviveHeal_C
// (None)

class UClass* UInit_Ench_Knight_Spell_FRKill_ReviveHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Knight_Spell_FRKill_ReviveHeal_C");

	return Clss;
}


// Init_Ench_Knight_Spell_FRKill_ReviveHeal_C Init_Ench_Knight_Spell_FRKill_ReviveHeal.Default__Init_Ench_Knight_Spell_FRKill_ReviveHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Knight_Spell_FRKill_ReviveHeal_C* UInit_Ench_Knight_Spell_FRKill_ReviveHeal_C::GetDefaultObj()
{
	static class UInit_Ench_Knight_Spell_FRKill_ReviveHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Knight_Spell_FRKill_ReviveHeal_C*>(UInit_Ench_Knight_Spell_FRKill_ReviveHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


