#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_07_GunDamage.Prestige_Deadeye_07_GunDamage_C
// (None)

class UClass* UPrestige_Deadeye_07_GunDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_07_GunDamage_C");

	return Clss;
}


// Prestige_Deadeye_07_GunDamage_C Prestige_Deadeye_07_GunDamage.Default__Prestige_Deadeye_07_GunDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_07_GunDamage_C* UPrestige_Deadeye_07_GunDamage_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_07_GunDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_07_GunDamage_C*>(UPrestige_Deadeye_07_GunDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


