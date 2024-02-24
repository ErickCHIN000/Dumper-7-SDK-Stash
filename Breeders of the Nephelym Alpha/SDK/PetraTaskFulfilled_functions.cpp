#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraTaskFulfilled.PetraTaskFulfilled_C
// (None)

class UClass* UPetraTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraTaskFulfilled_C");

	return Clss;
}


// PetraTaskFulfilled_C PetraTaskFulfilled.Default__PetraTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraTaskFulfilled_C* UPetraTaskFulfilled_C::GetDefaultObj()
{
	static class UPetraTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraTaskFulfilled_C*>(UPetraTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


