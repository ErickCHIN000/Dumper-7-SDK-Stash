#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_GroundSlam.DamageData_GroundSlam_C
// (None)

class UClass* UDamageData_GroundSlam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_GroundSlam_C");

	return Clss;
}


// DamageData_GroundSlam_C DamageData_GroundSlam.Default__DamageData_GroundSlam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_GroundSlam_C* UDamageData_GroundSlam_C::GetDefaultObj()
{
	static class UDamageData_GroundSlam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_GroundSlam_C*>(UDamageData_GroundSlam_C::StaticClass()->DefaultObject);

	return Default;
}

}


