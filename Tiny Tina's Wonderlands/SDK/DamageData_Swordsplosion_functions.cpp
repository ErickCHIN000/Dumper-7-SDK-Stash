#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Swordsplosion.DamageData_Swordsplosion_C
// (None)

class UClass* UDamageData_Swordsplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Swordsplosion_C");

	return Clss;
}


// DamageData_Swordsplosion_C DamageData_Swordsplosion.Default__DamageData_Swordsplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Swordsplosion_C* UDamageData_Swordsplosion_C::GetDefaultObj()
{
	static class UDamageData_Swordsplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Swordsplosion_C*>(UDamageData_Swordsplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


