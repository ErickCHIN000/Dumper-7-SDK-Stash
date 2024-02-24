#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass IcarusCompassWaypoint.IcarusCompassWaypoint_C
// (None)

class UClass* UIcarusCompassWaypoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusCompassWaypoint_C");

	return Clss;
}


// IcarusCompassWaypoint_C IcarusCompassWaypoint.Default__IcarusCompassWaypoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIcarusCompassWaypoint_C* UIcarusCompassWaypoint_C::GetDefaultObj()
{
	static class UIcarusCompassWaypoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusCompassWaypoint_C*>(UIcarusCompassWaypoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


