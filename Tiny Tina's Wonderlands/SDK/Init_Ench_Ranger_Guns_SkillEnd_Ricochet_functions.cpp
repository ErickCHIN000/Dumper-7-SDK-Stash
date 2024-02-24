#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Ranger_Guns_SkillEnd_Ricochet.Init_Ench_Ranger_Guns_SkillEnd_Ricochet_C
// (None)

class UClass* UInit_Ench_Ranger_Guns_SkillEnd_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Ranger_Guns_SkillEnd_Ricochet_C");

	return Clss;
}


// Init_Ench_Ranger_Guns_SkillEnd_Ricochet_C Init_Ench_Ranger_Guns_SkillEnd_Ricochet.Default__Init_Ench_Ranger_Guns_SkillEnd_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Ranger_Guns_SkillEnd_Ricochet_C* UInit_Ench_Ranger_Guns_SkillEnd_Ricochet_C::GetDefaultObj()
{
	static class UInit_Ench_Ranger_Guns_SkillEnd_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Ranger_Guns_SkillEnd_Ricochet_C*>(UInit_Ench_Ranger_Guns_SkillEnd_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}

}


