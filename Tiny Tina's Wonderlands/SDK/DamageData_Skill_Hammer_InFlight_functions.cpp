#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Skill_Hammer_InFlight.DamageData_Skill_Hammer_InFlight_C
// (None)

class UClass* UDamageData_Skill_Hammer_InFlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Skill_Hammer_InFlight_C");

	return Clss;
}


// DamageData_Skill_Hammer_InFlight_C DamageData_Skill_Hammer_InFlight.Default__DamageData_Skill_Hammer_InFlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Skill_Hammer_InFlight_C* UDamageData_Skill_Hammer_InFlight_C::GetDefaultObj()
{
	static class UDamageData_Skill_Hammer_InFlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Skill_Hammer_InFlight_C*>(UDamageData_Skill_Hammer_InFlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


