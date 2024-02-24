#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDailyToy.CassieDailyToy_C
// (None)

class UClass* UCassieDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDailyToy_C");

	return Clss;
}


// CassieDailyToy_C CassieDailyToy.Default__CassieDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDailyToy_C* UCassieDailyToy_C::GetDefaultObj()
{
	static class UCassieDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDailyToy_C*>(UCassieDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


