#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericWeapon.GenericWeapon_C
// (Actor)

class UClass* AGenericWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericWeapon_C");

	return Clss;
}


// GenericWeapon_C GenericWeapon.Default__GenericWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericWeapon_C* AGenericWeapon_C::GetDefaultObj()
{
	static class AGenericWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericWeapon_C*>(AGenericWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


