#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchTaskFulfilled.MonarchTaskFulfilled_C
// (None)

class UClass* UMonarchTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchTaskFulfilled_C");

	return Clss;
}


// MonarchTaskFulfilled_C MonarchTaskFulfilled.Default__MonarchTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchTaskFulfilled_C* UMonarchTaskFulfilled_C::GetDefaultObj()
{
	static class UMonarchTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchTaskFulfilled_C*>(UMonarchTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


