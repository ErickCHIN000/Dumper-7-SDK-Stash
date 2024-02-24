#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberDailyToyT.AmberDailyToyT_C
// (None)

class UClass* UAmberDailyToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberDailyToyT_C");

	return Clss;
}


// AmberDailyToyT_C AmberDailyToyT.Default__AmberDailyToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberDailyToyT_C* UAmberDailyToyT_C::GetDefaultObj()
{
	static class UAmberDailyToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberDailyToyT_C*>(UAmberDailyToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


