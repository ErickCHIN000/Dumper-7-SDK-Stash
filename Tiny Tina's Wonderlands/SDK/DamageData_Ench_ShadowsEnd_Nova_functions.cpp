#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Ench_ShadowsEnd_Nova.DamageData_Ench_ShadowsEnd_Nova_C
// (None)

class UClass* UDamageData_Ench_ShadowsEnd_Nova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Ench_ShadowsEnd_Nova_C");

	return Clss;
}


// DamageData_Ench_ShadowsEnd_Nova_C DamageData_Ench_ShadowsEnd_Nova.Default__DamageData_Ench_ShadowsEnd_Nova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Ench_ShadowsEnd_Nova_C* UDamageData_Ench_ShadowsEnd_Nova_C::GetDefaultObj()
{
	static class UDamageData_Ench_ShadowsEnd_Nova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Ench_ShadowsEnd_Nova_C*>(UDamageData_Ench_ShadowsEnd_Nova_C::StaticClass()->DefaultObject);

	return Default;
}

}


