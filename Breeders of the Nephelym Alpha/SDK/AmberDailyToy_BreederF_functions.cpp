#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberDailyToy_BreederF.AmberDailyToy_BreederF_C
// (None)

class UClass* UAmberDailyToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberDailyToy_BreederF_C");

	return Clss;
}


// AmberDailyToy_BreederF_C AmberDailyToy_BreederF.Default__AmberDailyToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberDailyToy_BreederF_C* UAmberDailyToy_BreederF_C::GetDefaultObj()
{
	static class UAmberDailyToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberDailyToy_BreederF_C*>(UAmberDailyToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


