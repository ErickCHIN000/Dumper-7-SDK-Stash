#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DrinkTranquility2.Buff_DrinkTranquility2_C
// (Actor)

class UClass* ABuff_DrinkTranquility2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DrinkTranquility2_C");

	return Clss;
}


// Buff_DrinkTranquility2_C Buff_DrinkTranquility2.Default__Buff_DrinkTranquility2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DrinkTranquility2_C* ABuff_DrinkTranquility2_C::GetDefaultObj()
{
	static class ABuff_DrinkTranquility2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DrinkTranquility2_C*>(ABuff_DrinkTranquility2_C::StaticClass()->DefaultObject);

	return Default;
}

}


