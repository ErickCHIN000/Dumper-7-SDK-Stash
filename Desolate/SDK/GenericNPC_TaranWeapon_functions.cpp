#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericNPC_TaranWeapon.GenericNPC_TaranWeapon_C
// (Actor)

class UClass* AGenericNPC_TaranWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericNPC_TaranWeapon_C");

	return Clss;
}


// GenericNPC_TaranWeapon_C GenericNPC_TaranWeapon.Default__GenericNPC_TaranWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericNPC_TaranWeapon_C* AGenericNPC_TaranWeapon_C::GetDefaultObj()
{
	static class AGenericNPC_TaranWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericNPC_TaranWeapon_C*>(AGenericNPC_TaranWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


