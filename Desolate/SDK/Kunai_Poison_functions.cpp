#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kunai_Poison.Kunai_Poison_C
// (Actor)

class UClass* AKunai_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kunai_Poison_C");

	return Clss;
}


// Kunai_Poison_C Kunai_Poison.Default__Kunai_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKunai_Poison_C* AKunai_Poison_C::GetDefaultObj()
{
	static class AKunai_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKunai_Poison_C*>(AKunai_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


