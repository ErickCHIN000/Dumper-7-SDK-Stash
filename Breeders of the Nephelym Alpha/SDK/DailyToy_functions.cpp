#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DailyToy.DailyToy_C
// (Actor)

class UClass* ADailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DailyToy_C");

	return Clss;
}


// DailyToy_C DailyToy.Default__DailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADailyToy_C* ADailyToy_C::GetDefaultObj()
{
	static class ADailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADailyToy_C*>(ADailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


