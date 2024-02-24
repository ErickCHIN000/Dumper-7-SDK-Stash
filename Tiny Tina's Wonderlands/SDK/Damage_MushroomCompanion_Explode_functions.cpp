#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_MushroomCompanion_Explode.Damage_MushroomCompanion_Explode_C
// (None)

class UClass* UDamage_MushroomCompanion_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_MushroomCompanion_Explode_C");

	return Clss;
}


// Damage_MushroomCompanion_Explode_C Damage_MushroomCompanion_Explode.Default__Damage_MushroomCompanion_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_MushroomCompanion_Explode_C* UDamage_MushroomCompanion_Explode_C::GetDefaultObj()
{
	static class UDamage_MushroomCompanion_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_MushroomCompanion_Explode_C*>(UDamage_MushroomCompanion_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


