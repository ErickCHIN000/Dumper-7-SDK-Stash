#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Ring_GunManu_VLA.Ability_All_Ring_GunManu_VLA_C
// (None)

class UClass* UAbility_All_Ring_GunManu_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Ring_GunManu_VLA_C");

	return Clss;
}


// Ability_All_Ring_GunManu_VLA_C Ability_All_Ring_GunManu_VLA.Default__Ability_All_Ring_GunManu_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Ring_GunManu_VLA_C* UAbility_All_Ring_GunManu_VLA_C::GetDefaultObj()
{
	static class UAbility_All_Ring_GunManu_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Ring_GunManu_VLA_C*>(UAbility_All_Ring_GunManu_VLA_C::StaticClass()->DefaultObject);

	return Default;
}

}


