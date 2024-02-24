#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiToyT.FesssiToyT_C
// (None)

class UClass* UFesssiToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiToyT_C");

	return Clss;
}


// FesssiToyT_C FesssiToyT.Default__FesssiToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiToyT_C* UFesssiToyT_C::GetDefaultObj()
{
	static class UFesssiToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiToyT_C*>(UFesssiToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


