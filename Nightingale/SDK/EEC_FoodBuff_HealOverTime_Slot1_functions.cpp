#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_FoodBuff_HealOverTime_Slot1.EEC_FoodBuff_HealOverTime_Slot1_C
// (None)

class UClass* UEEC_FoodBuff_HealOverTime_Slot1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_FoodBuff_HealOverTime_Slot1_C");

	return Clss;
}


// EEC_FoodBuff_HealOverTime_Slot1_C EEC_FoodBuff_HealOverTime_Slot1.Default__EEC_FoodBuff_HealOverTime_Slot1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_FoodBuff_HealOverTime_Slot1_C* UEEC_FoodBuff_HealOverTime_Slot1_C::GetDefaultObj()
{
	static class UEEC_FoodBuff_HealOverTime_Slot1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_FoodBuff_HealOverTime_Slot1_C*>(UEEC_FoodBuff_HealOverTime_Slot1_C::StaticClass()->DefaultObject);

	return Default;
}

}


