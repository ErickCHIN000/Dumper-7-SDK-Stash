#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiHotdog_BreederT.FesssiHotdog_BreederT_C
// (None)

class UClass* UFesssiHotdog_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiHotdog_BreederT_C");

	return Clss;
}


// FesssiHotdog_BreederT_C FesssiHotdog_BreederT.Default__FesssiHotdog_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiHotdog_BreederT_C* UFesssiHotdog_BreederT_C::GetDefaultObj()
{
	static class UFesssiHotdog_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiHotdog_BreederT_C*>(UFesssiHotdog_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


