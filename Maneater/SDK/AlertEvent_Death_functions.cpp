#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AlertEvent_Death.AlertEvent_Death_C
// (None)

class UClass* UAlertEvent_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlertEvent_Death_C");

	return Clss;
}


// AlertEvent_Death_C AlertEvent_Death.Default__AlertEvent_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlertEvent_Death_C* UAlertEvent_Death_C::GetDefaultObj()
{
	static class UAlertEvent_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlertEvent_Death_C*>(UAlertEvent_Death_C::StaticClass()->DefaultObject);

	return Default;
}

}


