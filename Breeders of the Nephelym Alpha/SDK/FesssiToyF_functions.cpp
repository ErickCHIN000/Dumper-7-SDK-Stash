#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiToyF.FesssiToyF_C
// (None)

class UClass* UFesssiToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiToyF_C");

	return Clss;
}


// FesssiToyF_C FesssiToyF.Default__FesssiToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiToyF_C* UFesssiToyF_C::GetDefaultObj()
{
	static class UFesssiToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiToyF_C*>(UFesssiToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


