#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMTaskFulfilled.DMTaskFulfilled_C
// (None)

class UClass* UDMTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMTaskFulfilled_C");

	return Clss;
}


// DMTaskFulfilled_C DMTaskFulfilled.Default__DMTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMTaskFulfilled_C* UDMTaskFulfilled_C::GetDefaultObj()
{
	static class UDMTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMTaskFulfilled_C*>(UDMTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


