#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Axe_Simulated.DamageData_Axe_Simulated_C
// (None)

class UClass* UDamageData_Axe_Simulated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Axe_Simulated_C");

	return Clss;
}


// DamageData_Axe_Simulated_C DamageData_Axe_Simulated.Default__DamageData_Axe_Simulated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Axe_Simulated_C* UDamageData_Axe_Simulated_C::GetDefaultObj()
{
	static class UDamageData_Axe_Simulated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Axe_Simulated_C*>(UDamageData_Axe_Simulated_C::StaticClass()->DefaultObject);

	return Default;
}

}


