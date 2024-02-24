#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiCave.FesssiCave_C
// (None)

class UClass* UFesssiCave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiCave_C");

	return Clss;
}


// FesssiCave_C FesssiCave.Default__FesssiCave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiCave_C* UFesssiCave_C::GetDefaultObj()
{
	static class UFesssiCave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiCave_C*>(UFesssiCave_C::StaticClass()->DefaultObject);

	return Default;
}

}


