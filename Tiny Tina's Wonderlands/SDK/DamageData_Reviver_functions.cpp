#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Reviver.DamageData_Reviver_C
// (None)

class UClass* UDamageData_Reviver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Reviver_C");

	return Clss;
}


// DamageData_Reviver_C DamageData_Reviver.Default__DamageData_Reviver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Reviver_C* UDamageData_Reviver_C::GetDefaultObj()
{
	static class UDamageData_Reviver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Reviver_C*>(UDamageData_Reviver_C::StaticClass()->DefaultObject);

	return Default;
}

}


