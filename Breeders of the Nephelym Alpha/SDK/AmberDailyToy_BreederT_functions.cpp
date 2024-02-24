#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberDailyToy_BreederT.AmberDailyToy_BreederT_C
// (None)

class UClass* UAmberDailyToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberDailyToy_BreederT_C");

	return Clss;
}


// AmberDailyToy_BreederT_C AmberDailyToy_BreederT.Default__AmberDailyToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberDailyToy_BreederT_C* UAmberDailyToy_BreederT_C::GetDefaultObj()
{
	static class UAmberDailyToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberDailyToy_BreederT_C*>(UAmberDailyToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


