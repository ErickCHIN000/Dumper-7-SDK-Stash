#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VanogaThrowingWeapon.VanogaThrowingWeapon_C
// (Actor)

class UClass* AVanogaThrowingWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VanogaThrowingWeapon_C");

	return Clss;
}


// VanogaThrowingWeapon_C VanogaThrowingWeapon.Default__VanogaThrowingWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanogaThrowingWeapon_C* AVanogaThrowingWeapon_C::GetDefaultObj()
{
	static class AVanogaThrowingWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanogaThrowingWeapon_C*>(AVanogaThrowingWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


