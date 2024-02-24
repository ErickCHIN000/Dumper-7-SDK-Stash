#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericMeleeWeaponLight.GenericMeleeWeaponLight_C
// (Actor)

class UClass* AGenericMeleeWeaponLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericMeleeWeaponLight_C");

	return Clss;
}


// GenericMeleeWeaponLight_C GenericMeleeWeaponLight.Default__GenericMeleeWeaponLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericMeleeWeaponLight_C* AGenericMeleeWeaponLight_C::GetDefaultObj()
{
	static class AGenericMeleeWeaponLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericMeleeWeaponLight_C*>(AGenericMeleeWeaponLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


