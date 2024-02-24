#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDailyToy.AmberMaeDailyToy_C
// (None)

class UClass* UAmberMaeDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDailyToy_C");

	return Clss;
}


// AmberMaeDailyToy_C AmberMaeDailyToy.Default__AmberMaeDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDailyToy_C* UAmberMaeDailyToy_C::GetDefaultObj()
{
	static class UAmberMaeDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDailyToy_C*>(UAmberMaeDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


