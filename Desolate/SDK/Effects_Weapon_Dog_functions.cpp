#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Weapon_Dog.Effects_Weapon_Dog_C
// (Actor)

class UClass* AEffects_Weapon_Dog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Weapon_Dog_C");

	return Clss;
}


// Effects_Weapon_Dog_C Effects_Weapon_Dog.Default__Effects_Weapon_Dog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Weapon_Dog_C* AEffects_Weapon_Dog_C::GetDefaultObj()
{
	static class AEffects_Weapon_Dog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Weapon_Dog_C*>(AEffects_Weapon_Dog_C::StaticClass()->DefaultObject);

	return Default;
}

}


