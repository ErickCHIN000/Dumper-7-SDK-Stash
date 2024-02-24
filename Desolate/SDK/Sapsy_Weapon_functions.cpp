#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sapsy_Weapon.Sapsy_Weapon_C
// (Actor)

class UClass* ASapsy_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sapsy_Weapon_C");

	return Clss;
}


// Sapsy_Weapon_C Sapsy_Weapon.Default__Sapsy_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsy_Weapon_C* ASapsy_Weapon_C::GetDefaultObj()
{
	static class ASapsy_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsy_Weapon_C*>(ASapsy_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


