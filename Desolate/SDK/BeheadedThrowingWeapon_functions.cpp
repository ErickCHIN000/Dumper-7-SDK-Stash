#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeheadedThrowingWeapon.BeheadedThrowingWeapon_C
// (Actor)

class UClass* ABeheadedThrowingWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeheadedThrowingWeapon_C");

	return Clss;
}


// BeheadedThrowingWeapon_C BeheadedThrowingWeapon.Default__BeheadedThrowingWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABeheadedThrowingWeapon_C* ABeheadedThrowingWeapon_C::GetDefaultObj()
{
	static class ABeheadedThrowingWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABeheadedThrowingWeapon_C*>(ABeheadedThrowingWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


