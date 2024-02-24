#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiIdiots.FesssiIdiots_C
// (None)

class UClass* UFesssiIdiots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiIdiots_C");

	return Clss;
}


// FesssiIdiots_C FesssiIdiots.Default__FesssiIdiots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiIdiots_C* UFesssiIdiots_C::GetDefaultObj()
{
	static class UFesssiIdiots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiIdiots_C*>(UFesssiIdiots_C::StaticClass()->DefaultObject);

	return Default;
}

}


