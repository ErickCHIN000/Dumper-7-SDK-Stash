#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_ThrowWeapon.Scout_ThrowWeapon_C
// (None)

class UClass* UScout_ThrowWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_ThrowWeapon_C");

	return Clss;
}


// Scout_ThrowWeapon_C Scout_ThrowWeapon.Default__Scout_ThrowWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_ThrowWeapon_C* UScout_ThrowWeapon_C::GetDefaultObj()
{
	static class UScout_ThrowWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_ThrowWeapon_C*>(UScout_ThrowWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


