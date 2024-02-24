#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Druid_06_Companion_Damage.Prestige_Druid_06_Companion_Damage_C
// (None)

class UClass* UPrestige_Druid_06_Companion_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Druid_06_Companion_Damage_C");

	return Clss;
}


// Prestige_Druid_06_Companion_Damage_C Prestige_Druid_06_Companion_Damage.Default__Prestige_Druid_06_Companion_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Druid_06_Companion_Damage_C* UPrestige_Druid_06_Companion_Damage_C::GetDefaultObj()
{
	static class UPrestige_Druid_06_Companion_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Druid_06_Companion_Damage_C*>(UPrestige_Druid_06_Companion_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


