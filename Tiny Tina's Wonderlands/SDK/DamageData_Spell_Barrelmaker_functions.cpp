#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Spell_Barrelmaker.DamageData_Spell_Barrelmaker_C
// (None)

class UClass* UDamageData_Spell_Barrelmaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Spell_Barrelmaker_C");

	return Clss;
}


// DamageData_Spell_Barrelmaker_C DamageData_Spell_Barrelmaker.Default__DamageData_Spell_Barrelmaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Spell_Barrelmaker_C* UDamageData_Spell_Barrelmaker_C::GetDefaultObj()
{
	static class UDamageData_Spell_Barrelmaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Spell_Barrelmaker_C*>(UDamageData_Spell_Barrelmaker_C::StaticClass()->DefaultObject);

	return Default;
}

}


