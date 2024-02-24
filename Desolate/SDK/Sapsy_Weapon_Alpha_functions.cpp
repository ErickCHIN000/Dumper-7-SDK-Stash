#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sapsy_Weapon_Alpha.Sapsy_Weapon_Alpha_C
// (Actor)

class UClass* ASapsy_Weapon_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sapsy_Weapon_Alpha_C");

	return Clss;
}


// Sapsy_Weapon_Alpha_C Sapsy_Weapon_Alpha.Default__Sapsy_Weapon_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsy_Weapon_Alpha_C* ASapsy_Weapon_Alpha_C::GetDefaultObj()
{
	static class ASapsy_Weapon_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsy_Weapon_Alpha_C*>(ASapsy_Weapon_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


