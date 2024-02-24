#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Recipe_Weapon_Uncommon.LL_Recipe_Weapon_Uncommon_C
// (Actor)

class UClass* ALL_Recipe_Weapon_Uncommon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Recipe_Weapon_Uncommon_C");

	return Clss;
}


// LL_Recipe_Weapon_Uncommon_C LL_Recipe_Weapon_Uncommon.Default__LL_Recipe_Weapon_Uncommon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Recipe_Weapon_Uncommon_C* ALL_Recipe_Weapon_Uncommon_C::GetDefaultObj()
{
	static class ALL_Recipe_Weapon_Uncommon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Recipe_Weapon_Uncommon_C*>(ALL_Recipe_Weapon_Uncommon_C::StaticClass()->DefaultObject);

	return Default;
}

}


