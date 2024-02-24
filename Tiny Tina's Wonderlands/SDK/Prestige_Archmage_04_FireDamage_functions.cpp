#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Archmage_04_FireDamage.Prestige_Archmage_04_FireDamage_C
// (None)

class UClass* UPrestige_Archmage_04_FireDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Archmage_04_FireDamage_C");

	return Clss;
}


// Prestige_Archmage_04_FireDamage_C Prestige_Archmage_04_FireDamage.Default__Prestige_Archmage_04_FireDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Archmage_04_FireDamage_C* UPrestige_Archmage_04_FireDamage_C::GetDefaultObj()
{
	static class UPrestige_Archmage_04_FireDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Archmage_04_FireDamage_C*>(UPrestige_Archmage_04_FireDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


