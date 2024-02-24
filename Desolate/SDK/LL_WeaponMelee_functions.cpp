#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_WeaponMelee.LL_WeaponMelee_C
// (Actor)

class UClass* ALL_WeaponMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_WeaponMelee_C");

	return Clss;
}


// LL_WeaponMelee_C LL_WeaponMelee.Default__LL_WeaponMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_WeaponMelee_C* ALL_WeaponMelee_C::GetDefaultObj()
{
	static class ALL_WeaponMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_WeaponMelee_C*>(ALL_WeaponMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


