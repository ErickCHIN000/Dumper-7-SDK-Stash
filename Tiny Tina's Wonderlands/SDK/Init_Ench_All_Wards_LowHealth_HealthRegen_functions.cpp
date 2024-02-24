#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_All_Wards_LowHealth_HealthRegen.Init_Ench_All_Wards_LowHealth_HealthRegen_C
// (None)

class UClass* UInit_Ench_All_Wards_LowHealth_HealthRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_All_Wards_LowHealth_HealthRegen_C");

	return Clss;
}


// Init_Ench_All_Wards_LowHealth_HealthRegen_C Init_Ench_All_Wards_LowHealth_HealthRegen.Default__Init_Ench_All_Wards_LowHealth_HealthRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_All_Wards_LowHealth_HealthRegen_C* UInit_Ench_All_Wards_LowHealth_HealthRegen_C::GetDefaultObj()
{
	static class UInit_Ench_All_Wards_LowHealth_HealthRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_All_Wards_LowHealth_HealthRegen_C*>(UInit_Ench_All_Wards_LowHealth_HealthRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


