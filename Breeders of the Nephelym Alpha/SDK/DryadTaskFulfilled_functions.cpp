#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadTaskFulfilled.DryadTaskFulfilled_C
// (None)

class UClass* UDryadTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadTaskFulfilled_C");

	return Clss;
}


// DryadTaskFulfilled_C DryadTaskFulfilled.Default__DryadTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadTaskFulfilled_C* UDryadTaskFulfilled_C::GetDefaultObj()
{
	static class UDryadTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadTaskFulfilled_C*>(UDryadTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


