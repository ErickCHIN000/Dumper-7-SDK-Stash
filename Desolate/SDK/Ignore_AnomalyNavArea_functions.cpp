#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ignore_AnomalyNavArea.Ignore_AnomalyNavArea_C
// (None)

class UClass* UIgnore_AnomalyNavArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ignore_AnomalyNavArea_C");

	return Clss;
}


// Ignore_AnomalyNavArea_C Ignore_AnomalyNavArea.Default__Ignore_AnomalyNavArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIgnore_AnomalyNavArea_C* UIgnore_AnomalyNavArea_C::GetDefaultObj()
{
	static class UIgnore_AnomalyNavArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIgnore_AnomalyNavArea_C*>(UIgnore_AnomalyNavArea_C::StaticClass()->DefaultObject);

	return Default;
}

}


