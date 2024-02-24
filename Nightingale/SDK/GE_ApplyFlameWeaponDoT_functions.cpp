#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyFlameWeaponDoT.GE_ApplyFlameWeaponDoT_C
// (None)

class UClass* UGE_ApplyFlameWeaponDoT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyFlameWeaponDoT_C");

	return Clss;
}


// GE_ApplyFlameWeaponDoT_C GE_ApplyFlameWeaponDoT.Default__GE_ApplyFlameWeaponDoT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyFlameWeaponDoT_C* UGE_ApplyFlameWeaponDoT_C::GetDefaultObj()
{
	static class UGE_ApplyFlameWeaponDoT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyFlameWeaponDoT_C*>(UGE_ApplyFlameWeaponDoT_C::StaticClass()->DefaultObject);

	return Default;
}

}


