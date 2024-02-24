#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiStuck.FesssiStuck_C
// (None)

class UClass* UFesssiStuck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiStuck_C");

	return Clss;
}


// FesssiStuck_C FesssiStuck.Default__FesssiStuck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiStuck_C* UFesssiStuck_C::GetDefaultObj()
{
	static class UFesssiStuck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiStuck_C*>(UFesssiStuck_C::StaticClass()->DefaultObject);

	return Default;
}

}


