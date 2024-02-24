#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Necro_Wards_LichCast_CompDamage.Init_Ench_Necro_Wards_LichCast_CompDamage_C
// (None)

class UClass* UInit_Ench_Necro_Wards_LichCast_CompDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Necro_Wards_LichCast_CompDamage_C");

	return Clss;
}


// Init_Ench_Necro_Wards_LichCast_CompDamage_C Init_Ench_Necro_Wards_LichCast_CompDamage.Default__Init_Ench_Necro_Wards_LichCast_CompDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Necro_Wards_LichCast_CompDamage_C* UInit_Ench_Necro_Wards_LichCast_CompDamage_C::GetDefaultObj()
{
	static class UInit_Ench_Necro_Wards_LichCast_CompDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Necro_Wards_LichCast_CompDamage_C*>(UInit_Ench_Necro_Wards_LichCast_CompDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


