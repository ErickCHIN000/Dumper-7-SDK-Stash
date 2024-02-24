#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Hunger_Hunger.Effect_Hunger_Hunger_C
// (Actor)

class UClass* AEffect_Hunger_Hunger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Hunger_Hunger_C");

	return Clss;
}


// Effect_Hunger_Hunger_C Effect_Hunger_Hunger.Default__Effect_Hunger_Hunger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffect_Hunger_Hunger_C* AEffect_Hunger_Hunger_C::GetDefaultObj()
{
	static class AEffect_Hunger_Hunger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffect_Hunger_Hunger_C*>(AEffect_Hunger_Hunger_C::StaticClass()->DefaultObject);

	return Default;
}

}


