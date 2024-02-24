#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FoodBuff_HealOverTime.GE_FoodBuff_HealOverTime_C
// (None)

class UClass* UGE_FoodBuff_HealOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FoodBuff_HealOverTime_C");

	return Clss;
}


// GE_FoodBuff_HealOverTime_C GE_FoodBuff_HealOverTime.Default__GE_FoodBuff_HealOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FoodBuff_HealOverTime_C* UGE_FoodBuff_HealOverTime_C::GetDefaultObj()
{
	static class UGE_FoodBuff_HealOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FoodBuff_HealOverTime_C*>(UGE_FoodBuff_HealOverTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


