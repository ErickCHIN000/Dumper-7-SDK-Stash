#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_DragonCompanion_FireBreathAttack.DamageData_DragonCompanion_FireBreathAttack_C
// (None)

class UClass* UDamageData_DragonCompanion_FireBreathAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_DragonCompanion_FireBreathAttack_C");

	return Clss;
}


// DamageData_DragonCompanion_FireBreathAttack_C DamageData_DragonCompanion_FireBreathAttack.Default__DamageData_DragonCompanion_FireBreathAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_DragonCompanion_FireBreathAttack_C* UDamageData_DragonCompanion_FireBreathAttack_C::GetDefaultObj()
{
	static class UDamageData_DragonCompanion_FireBreathAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_DragonCompanion_FireBreathAttack_C*>(UDamageData_DragonCompanion_FireBreathAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


