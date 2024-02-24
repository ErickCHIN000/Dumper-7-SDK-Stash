#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Barrel_Cloud.DamageData_Barrel_Cloud_C
// (None)

class UClass* UDamageData_Barrel_Cloud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Barrel_Cloud_C");

	return Clss;
}


// DamageData_Barrel_Cloud_C DamageData_Barrel_Cloud.Default__DamageData_Barrel_Cloud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Barrel_Cloud_C* UDamageData_Barrel_Cloud_C::GetDefaultObj()
{
	static class UDamageData_Barrel_Cloud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Barrel_Cloud_C*>(UDamageData_Barrel_Cloud_C::StaticClass()->DefaultObject);

	return Default;
}

}


