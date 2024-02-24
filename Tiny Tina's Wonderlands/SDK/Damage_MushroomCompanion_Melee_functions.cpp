#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_MushroomCompanion_Melee.Damage_MushroomCompanion_Melee_C
// (None)

class UClass* UDamage_MushroomCompanion_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_MushroomCompanion_Melee_C");

	return Clss;
}


// Damage_MushroomCompanion_Melee_C Damage_MushroomCompanion_Melee.Default__Damage_MushroomCompanion_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_MushroomCompanion_Melee_C* UDamage_MushroomCompanion_Melee_C::GetDefaultObj()
{
	static class UDamage_MushroomCompanion_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_MushroomCompanion_Melee_C*>(UDamage_MushroomCompanion_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


