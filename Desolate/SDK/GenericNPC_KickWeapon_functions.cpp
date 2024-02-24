#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNPC_KickWeapon.GenericNPC_KickWeapon_C
// (Actor)

class UClass* AGenericNPC_KickWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_KickWeapon_C");

	return Clss;
}


// GenericNPC_KickWeapon_C GenericNPC_KickWeapon.Default__GenericNPC_KickWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericNPC_KickWeapon_C* AGenericNPC_KickWeapon_C::GetDefaultObj()
{
	static class AGenericNPC_KickWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericNPC_KickWeapon_C*>(AGenericNPC_KickWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


