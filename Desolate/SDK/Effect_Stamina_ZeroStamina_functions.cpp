#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Stamina_ZeroStamina.Effect_Stamina_ZeroStamina_C
// (Actor)

class UClass* AEffect_Stamina_ZeroStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Stamina_ZeroStamina_C");

	return Clss;
}


// Effect_Stamina_ZeroStamina_C Effect_Stamina_ZeroStamina.Default__Effect_Stamina_ZeroStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffect_Stamina_ZeroStamina_C* AEffect_Stamina_ZeroStamina_C::GetDefaultObj()
{
	static class AEffect_Stamina_ZeroStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffect_Stamina_ZeroStamina_C*>(AEffect_Stamina_ZeroStamina_C::StaticClass()->DefaultObject);

	return Default;
}

}


