#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericMeleeWeaponHeavy.GenericMeleeWeaponHeavy_C
// (Actor)

class UClass* AGenericMeleeWeaponHeavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericMeleeWeaponHeavy_C");

	return Clss;
}


// GenericMeleeWeaponHeavy_C GenericMeleeWeaponHeavy.Default__GenericMeleeWeaponHeavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericMeleeWeaponHeavy_C* AGenericMeleeWeaponHeavy_C::GetDefaultObj()
{
	static class AGenericMeleeWeaponHeavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericMeleeWeaponHeavy_C*>(AGenericMeleeWeaponHeavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


