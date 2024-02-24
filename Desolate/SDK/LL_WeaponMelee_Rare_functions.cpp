#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_WeaponMelee_Rare.LL_WeaponMelee_Rare_C
// (Actor)

class UClass* ALL_WeaponMelee_Rare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_WeaponMelee_Rare_C");

	return Clss;
}


// LL_WeaponMelee_Rare_C LL_WeaponMelee_Rare.Default__LL_WeaponMelee_Rare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_WeaponMelee_Rare_C* ALL_WeaponMelee_Rare_C::GetDefaultObj()
{
	static class ALL_WeaponMelee_Rare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_WeaponMelee_Rare_C*>(ALL_WeaponMelee_Rare_C::StaticClass()->DefaultObject);

	return Default;
}

}


