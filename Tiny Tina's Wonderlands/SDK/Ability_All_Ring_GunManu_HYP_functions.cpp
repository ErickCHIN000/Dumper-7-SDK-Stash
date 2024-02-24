#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Ring_GunManu_HYP.Ability_All_Ring_GunManu_HYP_C
// (None)

class UClass* UAbility_All_Ring_GunManu_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Ring_GunManu_HYP_C");

	return Clss;
}


// Ability_All_Ring_GunManu_HYP_C Ability_All_Ring_GunManu_HYP.Default__Ability_All_Ring_GunManu_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Ring_GunManu_HYP_C* UAbility_All_Ring_GunManu_HYP_C::GetDefaultObj()
{
	static class UAbility_All_Ring_GunManu_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Ring_GunManu_HYP_C*>(UAbility_All_Ring_GunManu_HYP_C::StaticClass()->DefaultObject);

	return Default;
}

}


