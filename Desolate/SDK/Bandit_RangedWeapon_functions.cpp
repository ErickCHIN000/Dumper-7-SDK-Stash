#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_RangedWeapon.Bandit_RangedWeapon_C
// (Actor)

class UClass* ABandit_RangedWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_RangedWeapon_C");

	return Clss;
}


// Bandit_RangedWeapon_C Bandit_RangedWeapon.Default__Bandit_RangedWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_RangedWeapon_C* ABandit_RangedWeapon_C::GetDefaultObj()
{
	static class ABandit_RangedWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_RangedWeapon_C*>(ABandit_RangedWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


