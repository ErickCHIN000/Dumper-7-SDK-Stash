#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_All_Wards_ShieldBreak_SplCritChance.Init_Ench_All_Wards_ShieldBreak_SplCritChance_C
// (None)

class UClass* UInit_Ench_All_Wards_ShieldBreak_SplCritChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_All_Wards_ShieldBreak_SplCritChance_C");

	return Clss;
}


// Init_Ench_All_Wards_ShieldBreak_SplCritChance_C Init_Ench_All_Wards_ShieldBreak_SplCritChance.Default__Init_Ench_All_Wards_ShieldBreak_SplCritChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_All_Wards_ShieldBreak_SplCritChance_C* UInit_Ench_All_Wards_ShieldBreak_SplCritChance_C::GetDefaultObj()
{
	static class UInit_Ench_All_Wards_ShieldBreak_SplCritChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_All_Wards_ShieldBreak_SplCritChance_C*>(UInit_Ench_All_Wards_ShieldBreak_SplCritChance_C::StaticClass()->DefaultObject);

	return Default;
}

}


