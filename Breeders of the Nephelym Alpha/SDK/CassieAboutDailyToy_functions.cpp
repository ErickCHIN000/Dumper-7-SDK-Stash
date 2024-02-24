#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieAboutDailyToy.CassieAboutDailyToy_C
// (None)

class UClass* UCassieAboutDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieAboutDailyToy_C");

	return Clss;
}


// CassieAboutDailyToy_C CassieAboutDailyToy.Default__CassieAboutDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieAboutDailyToy_C* UCassieAboutDailyToy_C::GetDefaultObj()
{
	static class UCassieAboutDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieAboutDailyToy_C*>(UCassieAboutDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


