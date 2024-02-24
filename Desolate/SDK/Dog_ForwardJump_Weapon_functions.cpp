#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dog_ForwardJump_Weapon.Dog_ForwardJump_Weapon_C
// (Actor)

class UClass* ADog_ForwardJump_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dog_ForwardJump_Weapon_C");

	return Clss;
}


// Dog_ForwardJump_Weapon_C Dog_ForwardJump_Weapon.Default__Dog_ForwardJump_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADog_ForwardJump_Weapon_C* ADog_ForwardJump_Weapon_C::GetDefaultObj()
{
	static class ADog_ForwardJump_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADog_ForwardJump_Weapon_C*>(ADog_ForwardJump_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


