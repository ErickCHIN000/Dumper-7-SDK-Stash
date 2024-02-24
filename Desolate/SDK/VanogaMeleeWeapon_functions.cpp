#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VanogaMeleeWeapon.VanogaMeleeWeapon_C
// (Actor)

class UClass* AVanogaMeleeWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VanogaMeleeWeapon_C");

	return Clss;
}


// VanogaMeleeWeapon_C VanogaMeleeWeapon.Default__VanogaMeleeWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanogaMeleeWeapon_C* AVanogaMeleeWeapon_C::GetDefaultObj()
{
	static class AVanogaMeleeWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanogaMeleeWeapon_C*>(AVanogaMeleeWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


