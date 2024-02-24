#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_HydraSpell_Slam.Damage_HydraSpell_Slam_C
// (None)

class UClass* UDamage_HydraSpell_Slam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_HydraSpell_Slam_C");

	return Clss;
}


// Damage_HydraSpell_Slam_C Damage_HydraSpell_Slam.Default__Damage_HydraSpell_Slam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_HydraSpell_Slam_C* UDamage_HydraSpell_Slam_C::GetDefaultObj()
{
	static class UDamage_HydraSpell_Slam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_HydraSpell_Slam_C*>(UDamage_HydraSpell_Slam_C::StaticClass()->DefaultObject);

	return Default;
}

}


