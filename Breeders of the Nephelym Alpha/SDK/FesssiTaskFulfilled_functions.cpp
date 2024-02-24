#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiTaskFulfilled.FesssiTaskFulfilled_C
// (None)

class UClass* UFesssiTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiTaskFulfilled_C");

	return Clss;
}


// FesssiTaskFulfilled_C FesssiTaskFulfilled.Default__FesssiTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiTaskFulfilled_C* UFesssiTaskFulfilled_C::GetDefaultObj()
{
	static class UFesssiTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiTaskFulfilled_C*>(UFesssiTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


