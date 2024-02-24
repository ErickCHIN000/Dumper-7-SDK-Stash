#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_KotC_Passive21.Damage_KotC_Passive21_C
// (None)

class UClass* UDamage_KotC_Passive21_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_KotC_Passive21_C");

	return Clss;
}


// Damage_KotC_Passive21_C Damage_KotC_Passive21.Default__Damage_KotC_Passive21_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_KotC_Passive21_C* UDamage_KotC_Passive21_C::GetDefaultObj()
{
	static class UDamage_KotC_Passive21_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_KotC_Passive21_C*>(UDamage_KotC_Passive21_C::StaticClass()->DefaultObject);

	return Default;
}

}


