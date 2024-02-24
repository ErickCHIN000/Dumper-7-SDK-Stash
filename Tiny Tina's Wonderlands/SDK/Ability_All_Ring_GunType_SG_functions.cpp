#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Ring_GunType_SG.Ability_All_Ring_GunType_SG_C
// (None)

class UClass* UAbility_All_Ring_GunType_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Ring_GunType_SG_C");

	return Clss;
}


// Ability_All_Ring_GunType_SG_C Ability_All_Ring_GunType_SG.Default__Ability_All_Ring_GunType_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Ring_GunType_SG_C* UAbility_All_Ring_GunType_SG_C::GetDefaultObj()
{
	static class UAbility_All_Ring_GunType_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Ring_GunType_SG_C*>(UAbility_All_Ring_GunType_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


