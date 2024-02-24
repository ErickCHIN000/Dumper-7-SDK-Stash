#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionSkill_GunMage_DoubleSpell.ActionSkill_GunMage_DoubleSpell_C
// (None)

class UClass* UActionSkill_GunMage_DoubleSpell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionSkill_GunMage_DoubleSpell_C");

	return Clss;
}


// ActionSkill_GunMage_DoubleSpell_C ActionSkill_GunMage_DoubleSpell.Default__ActionSkill_GunMage_DoubleSpell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionSkill_GunMage_DoubleSpell_C* UActionSkill_GunMage_DoubleSpell_C::GetDefaultObj()
{
	static class UActionSkill_GunMage_DoubleSpell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionSkill_GunMage_DoubleSpell_C*>(UActionSkill_GunMage_DoubleSpell_C::StaticClass()->DefaultObject);

	return Default;
}

}


