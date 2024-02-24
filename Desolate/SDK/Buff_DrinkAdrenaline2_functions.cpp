#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DrinkAdrenaline2.Buff_DrinkAdrenaline2_C
// (Actor)

class UClass* ABuff_DrinkAdrenaline2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DrinkAdrenaline2_C");

	return Clss;
}


// Buff_DrinkAdrenaline2_C Buff_DrinkAdrenaline2.Default__Buff_DrinkAdrenaline2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DrinkAdrenaline2_C* ABuff_DrinkAdrenaline2_C::GetDefaultObj()
{
	static class ABuff_DrinkAdrenaline2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DrinkAdrenaline2_C*>(ABuff_DrinkAdrenaline2_C::StaticClass()->DefaultObject);

	return Default;
}

}


