#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_FoodBuff_HealOverTime_Slot2.EEC_FoodBuff_HealOverTime_Slot2_C
// (None)

class UClass* UEEC_FoodBuff_HealOverTime_Slot2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_FoodBuff_HealOverTime_Slot2_C");

	return Clss;
}


// EEC_FoodBuff_HealOverTime_Slot2_C EEC_FoodBuff_HealOverTime_Slot2.Default__EEC_FoodBuff_HealOverTime_Slot2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_FoodBuff_HealOverTime_Slot2_C* UEEC_FoodBuff_HealOverTime_Slot2_C::GetDefaultObj()
{
	static class UEEC_FoodBuff_HealOverTime_Slot2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_FoodBuff_HealOverTime_Slot2_C*>(UEEC_FoodBuff_HealOverTime_Slot2_C::StaticClass()->DefaultObject);

	return Default;
}

}


