#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiToy_BreederF.FesssiToy_BreederF_C
// (None)

class UClass* UFesssiToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiToy_BreederF_C");

	return Clss;
}


// FesssiToy_BreederF_C FesssiToy_BreederF.Default__FesssiToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiToy_BreederF_C* UFesssiToy_BreederF_C::GetDefaultObj()
{
	static class UFesssiToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiToy_BreederF_C*>(UFesssiToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


