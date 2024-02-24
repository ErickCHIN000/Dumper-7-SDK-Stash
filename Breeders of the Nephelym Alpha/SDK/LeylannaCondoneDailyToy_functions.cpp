#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaCondoneDailyToy.LeylannaCondoneDailyToy_C
// (None)

class UClass* ULeylannaCondoneDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaCondoneDailyToy_C");

	return Clss;
}


// LeylannaCondoneDailyToy_C LeylannaCondoneDailyToy.Default__LeylannaCondoneDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaCondoneDailyToy_C* ULeylannaCondoneDailyToy_C::GetDefaultObj()
{
	static class ULeylannaCondoneDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaCondoneDailyToy_C*>(ULeylannaCondoneDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


