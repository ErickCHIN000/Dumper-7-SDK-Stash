#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DrinkTranquility1.Buff_DrinkTranquility1_C
// (Actor)

class UClass* ABuff_DrinkTranquility1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DrinkTranquility1_C");

	return Clss;
}


// Buff_DrinkTranquility1_C Buff_DrinkTranquility1.Default__Buff_DrinkTranquility1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DrinkTranquility1_C* ABuff_DrinkTranquility1_C::GetDefaultObj()
{
	static class ABuff_DrinkTranquility1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DrinkTranquility1_C*>(ABuff_DrinkTranquility1_C::StaticClass()->DefaultObject);

	return Default;
}

}


