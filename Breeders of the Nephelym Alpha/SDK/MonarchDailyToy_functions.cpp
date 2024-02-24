#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchDailyToy.MonarchDailyToy_C
// (None)

class UClass* UMonarchDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchDailyToy_C");

	return Clss;
}


// MonarchDailyToy_C MonarchDailyToy.Default__MonarchDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchDailyToy_C* UMonarchDailyToy_C::GetDefaultObj()
{
	static class UMonarchDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchDailyToy_C*>(UMonarchDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


