#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraDailyToy.PetraDailyToy_C
// (None)

class UClass* UPetraDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraDailyToy_C");

	return Clss;
}


// PetraDailyToy_C PetraDailyToy.Default__PetraDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraDailyToy_C* UPetraDailyToy_C::GetDefaultObj()
{
	static class UPetraDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraDailyToy_C*>(UPetraDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


