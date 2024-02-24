#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindManWeapon.BlindManWeapon_C
// (Actor)

class UClass* ABlindManWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindManWeapon_C");

	return Clss;
}


// BlindManWeapon_C BlindManWeapon.Default__BlindManWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindManWeapon_C* ABlindManWeapon_C::GetDefaultObj()
{
	static class ABlindManWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindManWeapon_C*>(ABlindManWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


