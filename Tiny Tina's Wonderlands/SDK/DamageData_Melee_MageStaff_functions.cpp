#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Melee_MageStaff.DamageData_Melee_MageStaff_C
// (None)

class UClass* UDamageData_Melee_MageStaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Melee_MageStaff_C");

	return Clss;
}


// DamageData_Melee_MageStaff_C DamageData_Melee_MageStaff.Default__DamageData_Melee_MageStaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Melee_MageStaff_C* UDamageData_Melee_MageStaff_C::GetDefaultObj()
{
	static class UDamageData_Melee_MageStaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Melee_MageStaff_C*>(UDamageData_Melee_MageStaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


