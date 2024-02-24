#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_FoodTranquility2.Buff_FoodTranquility2_C
// (Actor)

class UClass* ABuff_FoodTranquility2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_FoodTranquility2_C");

	return Clss;
}


// Buff_FoodTranquility2_C Buff_FoodTranquility2.Default__Buff_FoodTranquility2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_FoodTranquility2_C* ABuff_FoodTranquility2_C::GetDefaultObj()
{
	static class ABuff_FoodTranquility2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_FoodTranquility2_C*>(ABuff_FoodTranquility2_C::StaticClass()->DefaultObject);

	return Default;
}

}


