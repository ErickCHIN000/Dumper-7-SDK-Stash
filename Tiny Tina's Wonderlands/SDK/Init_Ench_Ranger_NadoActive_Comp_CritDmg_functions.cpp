#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Ranger_NadoActive_Comp_CritDmg.Init_Ench_Ranger_NadoActive_Comp_CritDmg_C
// (None)

class UClass* UInit_Ench_Ranger_NadoActive_Comp_CritDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Ranger_NadoActive_Comp_CritDmg_C");

	return Clss;
}


// Init_Ench_Ranger_NadoActive_Comp_CritDmg_C Init_Ench_Ranger_NadoActive_Comp_CritDmg.Default__Init_Ench_Ranger_NadoActive_Comp_CritDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Ranger_NadoActive_Comp_CritDmg_C* UInit_Ench_Ranger_NadoActive_Comp_CritDmg_C::GetDefaultObj()
{
	static class UInit_Ench_Ranger_NadoActive_Comp_CritDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Ranger_NadoActive_Comp_CritDmg_C*>(UInit_Ench_Ranger_NadoActive_Comp_CritDmg_C::StaticClass()->DefaultObject);

	return Default;
}

}


