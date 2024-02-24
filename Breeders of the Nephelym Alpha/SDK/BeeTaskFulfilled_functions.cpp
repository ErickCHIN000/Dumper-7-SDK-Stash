#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeTaskFulfilled.BeeTaskFulfilled_C
// (None)

class UClass* UBeeTaskFulfilled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeTaskFulfilled_C");

	return Clss;
}


// BeeTaskFulfilled_C BeeTaskFulfilled.Default__BeeTaskFulfilled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeTaskFulfilled_C* UBeeTaskFulfilled_C::GetDefaultObj()
{
	static class UBeeTaskFulfilled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeTaskFulfilled_C*>(UBeeTaskFulfilled_C::StaticClass()->DefaultObject);

	return Default;
}

}


