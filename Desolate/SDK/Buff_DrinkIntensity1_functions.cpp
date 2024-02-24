#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DrinkIntensity1.Buff_DrinkIntensity1_C
// (Actor)

class UClass* ABuff_DrinkIntensity1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DrinkIntensity1_C");

	return Clss;
}


// Buff_DrinkIntensity1_C Buff_DrinkIntensity1.Default__Buff_DrinkIntensity1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DrinkIntensity1_C* ABuff_DrinkIntensity1_C::GetDefaultObj()
{
	static class ABuff_DrinkIntensity1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DrinkIntensity1_C*>(ABuff_DrinkIntensity1_C::StaticClass()->DefaultObject);

	return Default;
}

}


