#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DrinkIntensity2.Buff_DrinkIntensity2_C
// (Actor)

class UClass* ABuff_DrinkIntensity2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DrinkIntensity2_C");

	return Clss;
}


// Buff_DrinkIntensity2_C Buff_DrinkIntensity2.Default__Buff_DrinkIntensity2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DrinkIntensity2_C* ABuff_DrinkIntensity2_C::GetDefaultObj()
{
	static class ABuff_DrinkIntensity2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DrinkIntensity2_C*>(ABuff_DrinkIntensity2_C::StaticClass()->DefaultObject);

	return Default;
}

}


