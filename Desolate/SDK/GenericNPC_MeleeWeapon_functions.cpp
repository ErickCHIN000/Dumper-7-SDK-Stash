#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNPC_MeleeWeapon.GenericNPC_MeleeWeapon_C
// (Actor)

class UClass* AGenericNPC_MeleeWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_MeleeWeapon_C");

	return Clss;
}


// GenericNPC_MeleeWeapon_C GenericNPC_MeleeWeapon.Default__GenericNPC_MeleeWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericNPC_MeleeWeapon_C* AGenericNPC_MeleeWeapon_C::GetDefaultObj()
{
	static class AGenericNPC_MeleeWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericNPC_MeleeWeapon_C*>(AGenericNPC_MeleeWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


