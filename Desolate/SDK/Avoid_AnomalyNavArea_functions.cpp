#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Avoid_AnomalyNavArea.Avoid_AnomalyNavArea_C
// (None)

class UClass* UAvoid_AnomalyNavArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Avoid_AnomalyNavArea_C");

	return Clss;
}


// Avoid_AnomalyNavArea_C Avoid_AnomalyNavArea.Default__Avoid_AnomalyNavArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAvoid_AnomalyNavArea_C* UAvoid_AnomalyNavArea_C::GetDefaultObj()
{
	static class UAvoid_AnomalyNavArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAvoid_AnomalyNavArea_C*>(UAvoid_AnomalyNavArea_C::StaticClass()->DefaultObject);

	return Default;
}

}


