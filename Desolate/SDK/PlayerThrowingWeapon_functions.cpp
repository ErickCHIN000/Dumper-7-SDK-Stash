#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerThrowingWeapon.PlayerThrowingWeapon_C
// (Actor)

class UClass* APlayerThrowingWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerThrowingWeapon_C");

	return Clss;
}


// PlayerThrowingWeapon_C PlayerThrowingWeapon.Default__PlayerThrowingWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerThrowingWeapon_C* APlayerThrowingWeapon_C::GetDefaultObj()
{
	static class APlayerThrowingWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerThrowingWeapon_C*>(APlayerThrowingWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


