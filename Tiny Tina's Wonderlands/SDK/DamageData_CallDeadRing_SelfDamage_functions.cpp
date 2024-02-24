#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_CallDeadRing_SelfDamage.DamageData_CallDeadRing_SelfDamage_C
// (None)

class UClass* UDamageData_CallDeadRing_SelfDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_CallDeadRing_SelfDamage_C");

	return Clss;
}


// DamageData_CallDeadRing_SelfDamage_C DamageData_CallDeadRing_SelfDamage.Default__DamageData_CallDeadRing_SelfDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_CallDeadRing_SelfDamage_C* UDamageData_CallDeadRing_SelfDamage_C::GetDefaultObj()
{
	static class UDamageData_CallDeadRing_SelfDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_CallDeadRing_SelfDamage_C*>(UDamageData_CallDeadRing_SelfDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


