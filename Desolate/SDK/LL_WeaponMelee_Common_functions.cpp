#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_WeaponMelee_Common.LL_WeaponMelee_Common_C
// (Actor)

class UClass* ALL_WeaponMelee_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_WeaponMelee_Common_C");

	return Clss;
}


// LL_WeaponMelee_Common_C LL_WeaponMelee_Common.Default__LL_WeaponMelee_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_WeaponMelee_Common_C* ALL_WeaponMelee_Common_C::GetDefaultObj()
{
	static class ALL_WeaponMelee_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_WeaponMelee_Common_C*>(ALL_WeaponMelee_Common_C::StaticClass()->DefaultObject);

	return Default;
}

}


