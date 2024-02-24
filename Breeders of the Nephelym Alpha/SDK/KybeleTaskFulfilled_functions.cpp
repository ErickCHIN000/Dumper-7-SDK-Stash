#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTaskFulfilled.KybeleTaskFulfilled_C
// (None)

class UClass* UKybeleTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTaskFulfilled_C");

	return Clss;
}


// KybeleTaskFulfilled_C KybeleTaskFulfilled.Default__KybeleTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTaskFulfilled_C* UKybeleTaskFulfilled_C::GetDefaultObj()
{
	static class UKybeleTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTaskFulfilled_C*>(UKybeleTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


