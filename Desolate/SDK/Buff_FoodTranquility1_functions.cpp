#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_FoodTranquility1.Buff_FoodTranquility1_C
// (Actor)

class UClass* ABuff_FoodTranquility1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_FoodTranquility1_C");

	return Clss;
}


// Buff_FoodTranquility1_C Buff_FoodTranquility1.Default__Buff_FoodTranquility1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_FoodTranquility1_C* ABuff_FoodTranquility1_C::GetDefaultObj()
{
	static class ABuff_FoodTranquility1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_FoodTranquility1_C*>(ABuff_FoodTranquility1_C::StaticClass()->DefaultObject);

	return Default;
}

}


