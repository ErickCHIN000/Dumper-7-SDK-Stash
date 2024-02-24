#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Barrel_Explode.DamageData_Barrel_Explode_C
// (None)

class UClass* UDamageData_Barrel_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Barrel_Explode_C");

	return Clss;
}


// DamageData_Barrel_Explode_C DamageData_Barrel_Explode.Default__DamageData_Barrel_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Barrel_Explode_C* UDamageData_Barrel_Explode_C::GetDefaultObj()
{
	static class UDamageData_Barrel_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Barrel_Explode_C*>(UDamageData_Barrel_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


