#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseAiMeleeWeapon.BaseAiMeleeWeapon_C
// (Actor)

class UClass* ABaseAiMeleeWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseAiMeleeWeapon_C");

	return Clss;
}


// BaseAiMeleeWeapon_C BaseAiMeleeWeapon.Default__BaseAiMeleeWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseAiMeleeWeapon_C* ABaseAiMeleeWeapon_C::GetDefaultObj()
{
	static class ABaseAiMeleeWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseAiMeleeWeapon_C*>(ABaseAiMeleeWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


