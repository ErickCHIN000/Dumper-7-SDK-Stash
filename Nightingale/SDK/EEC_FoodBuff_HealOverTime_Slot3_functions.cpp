#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_FoodBuff_HealOverTime_Slot3.EEC_FoodBuff_HealOverTime_Slot3_C
// (None)

class UClass* UEEC_FoodBuff_HealOverTime_Slot3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_FoodBuff_HealOverTime_Slot3_C");

	return Clss;
}


// EEC_FoodBuff_HealOverTime_Slot3_C EEC_FoodBuff_HealOverTime_Slot3.Default__EEC_FoodBuff_HealOverTime_Slot3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_FoodBuff_HealOverTime_Slot3_C* UEEC_FoodBuff_HealOverTime_Slot3_C::GetDefaultObj()
{
	static class UEEC_FoodBuff_HealOverTime_Slot3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_FoodBuff_HealOverTime_Slot3_C*>(UEEC_FoodBuff_HealOverTime_Slot3_C::StaticClass()->DefaultObject);

	return Default;
}

}


