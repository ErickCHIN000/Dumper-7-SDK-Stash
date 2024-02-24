#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Spell_Buffmeister.DamageData_Spell_Buffmeister_C
// (None)

class UClass* UDamageData_Spell_Buffmeister_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Spell_Buffmeister_C");

	return Clss;
}


// DamageData_Spell_Buffmeister_C DamageData_Spell_Buffmeister.Default__DamageData_Spell_Buffmeister_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Spell_Buffmeister_C* UDamageData_Spell_Buffmeister_C::GetDefaultObj()
{
	static class UDamageData_Spell_Buffmeister_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Spell_Buffmeister_C*>(UDamageData_Spell_Buffmeister_C::StaticClass()->DefaultObject);

	return Default;
}

}


