#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNPC_RangedWeapon.GenericNPC_RangedWeapon_C
// (Actor)

class UClass* AGenericNPC_RangedWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_RangedWeapon_C");

	return Clss;
}


// GenericNPC_RangedWeapon_C GenericNPC_RangedWeapon.Default__GenericNPC_RangedWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericNPC_RangedWeapon_C* AGenericNPC_RangedWeapon_C::GetDefaultObj()
{
	static class AGenericNPC_RangedWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericNPC_RangedWeapon_C*>(AGenericNPC_RangedWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


