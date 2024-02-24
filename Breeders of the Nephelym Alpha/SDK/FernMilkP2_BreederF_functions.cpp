#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernMilkP2_BreederF.FernMilkP2_BreederF_C
// (None)

class UClass* UFernMilkP2_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernMilkP2_BreederF_C");

	return Clss;
}


// FernMilkP2_BreederF_C FernMilkP2_BreederF.Default__FernMilkP2_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernMilkP2_BreederF_C* UFernMilkP2_BreederF_C::GetDefaultObj()
{
	static class UFernMilkP2_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernMilkP2_BreederF_C*>(UFernMilkP2_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


