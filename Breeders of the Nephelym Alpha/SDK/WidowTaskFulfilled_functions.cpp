#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowTaskFulfilled.WidowTaskFulfilled_C
// (None)

class UClass* UWidowTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowTaskFulfilled_C");

	return Clss;
}


// WidowTaskFulfilled_C WidowTaskFulfilled.Default__WidowTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowTaskFulfilled_C* UWidowTaskFulfilled_C::GetDefaultObj()
{
	static class UWidowTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowTaskFulfilled_C*>(UWidowTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


