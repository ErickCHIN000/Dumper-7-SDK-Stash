#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Inflammation.DamageData_Inflammation_C
// (None)

class UClass* UDamageData_Inflammation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Inflammation_C");

	return Clss;
}


// DamageData_Inflammation_C DamageData_Inflammation.Default__DamageData_Inflammation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Inflammation_C* UDamageData_Inflammation_C::GetDefaultObj()
{
	static class UDamageData_Inflammation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Inflammation_C*>(UDamageData_Inflammation_C::StaticClass()->DefaultObject);

	return Default;
}

}


