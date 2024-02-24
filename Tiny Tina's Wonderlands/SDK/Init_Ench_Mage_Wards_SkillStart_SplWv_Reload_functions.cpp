#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Mage_Wards_SkillStart_SplWv_Reload.Init_Ench_Mage_Wards_SkillStart_SplWv_Reload_C
// (None)

class UClass* UInit_Ench_Mage_Wards_SkillStart_SplWv_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Mage_Wards_SkillStart_SplWv_Reload_C");

	return Clss;
}


// Init_Ench_Mage_Wards_SkillStart_SplWv_Reload_C Init_Ench_Mage_Wards_SkillStart_SplWv_Reload.Default__Init_Ench_Mage_Wards_SkillStart_SplWv_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Mage_Wards_SkillStart_SplWv_Reload_C* UInit_Ench_Mage_Wards_SkillStart_SplWv_Reload_C::GetDefaultObj()
{
	static class UInit_Ench_Mage_Wards_SkillStart_SplWv_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Mage_Wards_SkillStart_SplWv_Reload_C*>(UInit_Ench_Mage_Wards_SkillStart_SplWv_Reload_C::StaticClass()->DefaultObject);

	return Default;
}

}


