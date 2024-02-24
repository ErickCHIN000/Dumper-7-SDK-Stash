#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Hunger_LowSelfHealing.Effect_Hunger_LowSelfHealing_C
// (Actor)

class UClass* AEffect_Hunger_LowSelfHealing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Hunger_LowSelfHealing_C");

	return Clss;
}


// Effect_Hunger_LowSelfHealing_C Effect_Hunger_LowSelfHealing.Default__Effect_Hunger_LowSelfHealing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffect_Hunger_LowSelfHealing_C* AEffect_Hunger_LowSelfHealing_C::GetDefaultObj()
{
	static class AEffect_Hunger_LowSelfHealing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffect_Hunger_LowSelfHealing_C*>(AEffect_Hunger_LowSelfHealing_C::StaticClass()->DefaultObject);

	return Default;
}

}


