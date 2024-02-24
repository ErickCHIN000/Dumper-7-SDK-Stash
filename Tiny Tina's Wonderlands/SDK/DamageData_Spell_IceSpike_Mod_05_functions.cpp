#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Spell_IceSpike_Mod_05.DamageData_Spell_IceSpike_Mod_05_C
// (None)

class UClass* UDamageData_Spell_IceSpike_Mod_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Spell_IceSpike_Mod_05_C");

	return Clss;
}


// DamageData_Spell_IceSpike_Mod_05_C DamageData_Spell_IceSpike_Mod_05.Default__DamageData_Spell_IceSpike_Mod_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Spell_IceSpike_Mod_05_C* UDamageData_Spell_IceSpike_Mod_05_C::GetDefaultObj()
{
	static class UDamageData_Spell_IceSpike_Mod_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Spell_IceSpike_Mod_05_C*>(UDamageData_Spell_IceSpike_Mod_05_C::StaticClass()->DefaultObject);

	return Default;
}

}


