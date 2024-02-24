#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Weapon_MadScientistSpecial.Effects_Weapon_MadScientistSpecial_C
// (Actor)

class UClass* AEffects_Weapon_MadScientistSpecial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Weapon_MadScientistSpecial_C");

	return Clss;
}


// Effects_Weapon_MadScientistSpecial_C Effects_Weapon_MadScientistSpecial.Default__Effects_Weapon_MadScientistSpecial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Weapon_MadScientistSpecial_C* AEffects_Weapon_MadScientistSpecial_C::GetDefaultObj()
{
	static class AEffects_Weapon_MadScientistSpecial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Weapon_MadScientistSpecial_C*>(AEffects_Weapon_MadScientistSpecial_C::StaticClass()->DefaultObject);

	return Default;
}

}


