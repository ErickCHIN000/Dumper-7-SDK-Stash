#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoT_FoodHeal.GE_DoT_FoodHeal_C
// (None)

class UClass* UGE_DoT_FoodHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoT_FoodHeal_C");

	return Clss;
}


// GE_DoT_FoodHeal_C GE_DoT_FoodHeal.Default__GE_DoT_FoodHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoT_FoodHeal_C* UGE_DoT_FoodHeal_C::GetDefaultObj()
{
	static class UGE_DoT_FoodHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoT_FoodHeal_C*>(UGE_DoT_FoodHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


