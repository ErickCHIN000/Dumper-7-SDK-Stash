#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Ranger_Guns_SkillEnd_Ricochet.DamageData_Ranger_Guns_SkillEnd_Ricochet_C
// (None)

class UClass* UDamageData_Ranger_Guns_SkillEnd_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Ranger_Guns_SkillEnd_Ricochet_C");

	return Clss;
}


// DamageData_Ranger_Guns_SkillEnd_Ricochet_C DamageData_Ranger_Guns_SkillEnd_Ricochet.Default__DamageData_Ranger_Guns_SkillEnd_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Ranger_Guns_SkillEnd_Ricochet_C* UDamageData_Ranger_Guns_SkillEnd_Ricochet_C::GetDefaultObj()
{
	static class UDamageData_Ranger_Guns_SkillEnd_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Ranger_Guns_SkillEnd_Ricochet_C*>(UDamageData_Ranger_Guns_SkillEnd_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}

}


