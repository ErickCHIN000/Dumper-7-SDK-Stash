#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiDailyToy.FesssiDailyToy_C
// (None)

class UClass* UFesssiDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiDailyToy_C");

	return Clss;
}


// FesssiDailyToy_C FesssiDailyToy.Default__FesssiDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiDailyToy_C* UFesssiDailyToy_C::GetDefaultObj()
{
	static class UFesssiDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiDailyToy_C*>(UFesssiDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


