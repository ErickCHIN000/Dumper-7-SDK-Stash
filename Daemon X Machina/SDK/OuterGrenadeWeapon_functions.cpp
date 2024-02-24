#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterGrenadeWeapon.OuterGrenadeWeapon_C
// (Actor)

class UClass* AOuterGrenadeWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterGrenadeWeapon_C");

	return Clss;
}


// OuterGrenadeWeapon_C OuterGrenadeWeapon.Default__OuterGrenadeWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterGrenadeWeapon_C* AOuterGrenadeWeapon_C::GetDefaultObj()
{
	static class AOuterGrenadeWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterGrenadeWeapon_C*>(AOuterGrenadeWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


