#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_MushroomCompanion_LeapAttack.Damage_MushroomCompanion_LeapAttack_C
// (None)

class UClass* UDamage_MushroomCompanion_LeapAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_MushroomCompanion_LeapAttack_C");

	return Clss;
}


// Damage_MushroomCompanion_LeapAttack_C Damage_MushroomCompanion_LeapAttack.Default__Damage_MushroomCompanion_LeapAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_MushroomCompanion_LeapAttack_C* UDamage_MushroomCompanion_LeapAttack_C::GetDefaultObj()
{
	static class UDamage_MushroomCompanion_LeapAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_MushroomCompanion_LeapAttack_C*>(UDamage_MushroomCompanion_LeapAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


