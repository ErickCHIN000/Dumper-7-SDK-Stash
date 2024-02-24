#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Counterfeint.DamageData_Counterfeint_C
// (None)

class UClass* UDamageData_Counterfeint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Counterfeint_C");

	return Clss;
}


// DamageData_Counterfeint_C DamageData_Counterfeint.Default__DamageData_Counterfeint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Counterfeint_C* UDamageData_Counterfeint_C::GetDefaultObj()
{
	static class UDamageData_Counterfeint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Counterfeint_C*>(UDamageData_Counterfeint_C::StaticClass()->DefaultObject);

	return Default;
}

}


