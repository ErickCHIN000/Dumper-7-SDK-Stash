#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyDailyToy.RomyDailyToy_C
// (None)

class UClass* URomyDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyDailyToy_C");

	return Clss;
}


// RomyDailyToy_C RomyDailyToy.Default__RomyDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyDailyToy_C* URomyDailyToy_C::GetDefaultObj()
{
	static class URomyDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyDailyToy_C*>(URomyDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


