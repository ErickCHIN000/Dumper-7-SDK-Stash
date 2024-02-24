#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Heart_HealEffect.Heart_HealEffect_C
// (Actor)

class UClass* AHeart_HealEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Heart_HealEffect_C");

	return Clss;
}


// Heart_HealEffect_C Heart_HealEffect.Default__Heart_HealEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeart_HealEffect_C* AHeart_HealEffect_C::GetDefaultObj()
{
	static class AHeart_HealEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeart_HealEffect_C*>(AHeart_HealEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


