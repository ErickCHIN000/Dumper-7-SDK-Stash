#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Weapon_BanditDodger.Effects_Weapon_BanditDodger_C
// (Actor)

class UClass* AEffects_Weapon_BanditDodger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Weapon_BanditDodger_C");

	return Clss;
}


// Effects_Weapon_BanditDodger_C Effects_Weapon_BanditDodger.Default__Effects_Weapon_BanditDodger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Weapon_BanditDodger_C* AEffects_Weapon_BanditDodger_C::GetDefaultObj()
{
	static class AEffects_Weapon_BanditDodger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Weapon_BanditDodger_C*>(AEffects_Weapon_BanditDodger_C::StaticClass()->DefaultObject);

	return Default;
}

}


