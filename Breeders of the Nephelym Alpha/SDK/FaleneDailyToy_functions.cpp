#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDailyToy.FaleneDailyToy_C
// (None)

class UClass* UFaleneDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDailyToy_C");

	return Clss;
}


// FaleneDailyToy_C FaleneDailyToy.Default__FaleneDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDailyToy_C* UFaleneDailyToy_C::GetDefaultObj()
{
	static class UFaleneDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDailyToy_C*>(UFaleneDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


