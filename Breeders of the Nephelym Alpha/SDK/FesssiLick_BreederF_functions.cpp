#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiLick_BreederF.FesssiLick_BreederF_C
// (None)

class UClass* UFesssiLick_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiLick_BreederF_C");

	return Clss;
}


// FesssiLick_BreederF_C FesssiLick_BreederF.Default__FesssiLick_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiLick_BreederF_C* UFesssiLick_BreederF_C::GetDefaultObj()
{
	static class UFesssiLick_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiLick_BreederF_C*>(UFesssiLick_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


