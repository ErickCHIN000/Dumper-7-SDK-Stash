#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadDailyToy.DryadDailyToy_C
// (None)

class UClass* UDryadDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadDailyToy_C");

	return Clss;
}


// DryadDailyToy_C DryadDailyToy.Default__DryadDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadDailyToy_C* UDryadDailyToy_C::GetDefaultObj()
{
	static class UDryadDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadDailyToy_C*>(UDryadDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


