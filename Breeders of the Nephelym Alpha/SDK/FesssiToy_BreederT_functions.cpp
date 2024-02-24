#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiToy_BreederT.FesssiToy_BreederT_C
// (None)

class UClass* UFesssiToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiToy_BreederT_C");

	return Clss;
}


// FesssiToy_BreederT_C FesssiToy_BreederT.Default__FesssiToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiToy_BreederT_C* UFesssiToy_BreederT_C::GetDefaultObj()
{
	static class UFesssiToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiToy_BreederT_C*>(UFesssiToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


