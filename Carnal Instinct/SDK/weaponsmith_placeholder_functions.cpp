#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass weaponsmith_placeholder.weaponsmith_placeholder_C
// (Actor)

class UClass* AWeaponsmith_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("weaponsmith_placeholder_C");

	return Clss;
}


// weaponsmith_placeholder_C weaponsmith_placeholder.Default__weaponsmith_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeaponsmith_placeholder_C* AWeaponsmith_placeholder_C::GetDefaultObj()
{
	static class AWeaponsmith_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeaponsmith_placeholder_C*>(AWeaponsmith_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


