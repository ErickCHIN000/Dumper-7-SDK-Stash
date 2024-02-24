#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WitcherSubWeapon.WitcherSubWeapon_C
// (Actor)

class UClass* AWitcherSubWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WitcherSubWeapon_C");

	return Clss;
}


// WitcherSubWeapon_C WitcherSubWeapon.Default__WitcherSubWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWitcherSubWeapon_C* AWitcherSubWeapon_C::GetDefaultObj()
{
	static class AWitcherSubWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWitcherSubWeapon_C*>(AWitcherSubWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


