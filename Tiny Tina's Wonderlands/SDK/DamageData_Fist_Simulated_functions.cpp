#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Fist_Simulated.DamageData_Fist_Simulated_C
// (None)

class UClass* UDamageData_Fist_Simulated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Fist_Simulated_C");

	return Clss;
}


// DamageData_Fist_Simulated_C DamageData_Fist_Simulated.Default__DamageData_Fist_Simulated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Fist_Simulated_C* UDamageData_Fist_Simulated_C::GetDefaultObj()
{
	static class UDamageData_Fist_Simulated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Fist_Simulated_C*>(UDamageData_Fist_Simulated_C::StaticClass()->DefaultObject);

	return Default;
}

}


