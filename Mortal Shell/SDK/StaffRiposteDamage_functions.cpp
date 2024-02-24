#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StaffRiposteDamage.StaffRiposteDamage_C
// (None)

class UClass* UStaffRiposteDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaffRiposteDamage_C");

	return Clss;
}


// StaffRiposteDamage_C StaffRiposteDamage.Default__StaffRiposteDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStaffRiposteDamage_C* UStaffRiposteDamage_C::GetDefaultObj()
{
	static class UStaffRiposteDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStaffRiposteDamage_C*>(UStaffRiposteDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


