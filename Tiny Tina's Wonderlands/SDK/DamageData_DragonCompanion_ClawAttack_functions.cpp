#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_DragonCompanion_ClawAttack.DamageData_DragonCompanion_ClawAttack_C
// (None)

class UClass* UDamageData_DragonCompanion_ClawAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_DragonCompanion_ClawAttack_C");

	return Clss;
}


// DamageData_DragonCompanion_ClawAttack_C DamageData_DragonCompanion_ClawAttack.Default__DamageData_DragonCompanion_ClawAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_DragonCompanion_ClawAttack_C* UDamageData_DragonCompanion_ClawAttack_C::GetDefaultObj()
{
	static class UDamageData_DragonCompanion_ClawAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_DragonCompanion_ClawAttack_C*>(UDamageData_DragonCompanion_ClawAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


