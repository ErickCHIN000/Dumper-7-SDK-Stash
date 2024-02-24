#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiHotdogT.FesssiHotdogT_C
// (None)

class UClass* UFesssiHotdogT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiHotdogT_C");

	return Clss;
}


// FesssiHotdogT_C FesssiHotdogT.Default__FesssiHotdogT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiHotdogT_C* UFesssiHotdogT_C::GetDefaultObj()
{
	static class UFesssiHotdogT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiHotdogT_C*>(UFesssiHotdogT_C::StaticClass()->DefaultObject);

	return Default;
}

}


