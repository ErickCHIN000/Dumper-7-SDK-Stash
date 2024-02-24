#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dog_Weapon.Dog_Weapon_C
// (Actor)

class UClass* ADog_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_Weapon_C");

	return Clss;
}


// Dog_Weapon_C Dog_Weapon.Default__Dog_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADog_Weapon_C* ADog_Weapon_C::GetDefaultObj()
{
	static class ADog_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADog_Weapon_C*>(ADog_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


