#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_KickWeapon.NewLight_KickWeapon_C
// (Actor)

class UClass* ANewLight_KickWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_KickWeapon_C");

	return Clss;
}


// NewLight_KickWeapon_C NewLight_KickWeapon.Default__NewLight_KickWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_KickWeapon_C* ANewLight_KickWeapon_C::GetDefaultObj()
{
	static class ANewLight_KickWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_KickWeapon_C*>(ANewLight_KickWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


