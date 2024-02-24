#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberDailyToyF.AmberDailyToyF_C
// (None)

class UClass* UAmberDailyToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberDailyToyF_C");

	return Clss;
}


// AmberDailyToyF_C AmberDailyToyF.Default__AmberDailyToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberDailyToyF_C* UAmberDailyToyF_C::GetDefaultObj()
{
	static class UAmberDailyToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberDailyToyF_C*>(UAmberDailyToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


