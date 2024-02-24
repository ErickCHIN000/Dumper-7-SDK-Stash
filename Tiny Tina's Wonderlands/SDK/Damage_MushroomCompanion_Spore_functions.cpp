#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_MushroomCompanion_Spore.Damage_MushroomCompanion_Spore_C
// (None)

class UClass* UDamage_MushroomCompanion_Spore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_MushroomCompanion_Spore_C");

	return Clss;
}


// Damage_MushroomCompanion_Spore_C Damage_MushroomCompanion_Spore.Default__Damage_MushroomCompanion_Spore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_MushroomCompanion_Spore_C* UDamage_MushroomCompanion_Spore_C::GetDefaultObj()
{
	static class UDamage_MushroomCompanion_Spore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_MushroomCompanion_Spore_C*>(UDamage_MushroomCompanion_Spore_C::StaticClass()->DefaultObject);

	return Default;
}

}


