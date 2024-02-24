#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernMilkP2.FernMilkP2_C
// (None)

class UClass* UFernMilkP2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernMilkP2_C");

	return Clss;
}


// FernMilkP2_C FernMilkP2.Default__FernMilkP2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernMilkP2_C* UFernMilkP2_C::GetDefaultObj()
{
	static class UFernMilkP2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernMilkP2_C*>(UFernMilkP2_C::StaticClass()->DefaultObject);

	return Default;
}

}


