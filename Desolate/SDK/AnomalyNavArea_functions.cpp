#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnomalyNavArea.AnomalyNavArea_C
// (None)

class UClass* UAnomalyNavArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnomalyNavArea_C");

	return Clss;
}


// AnomalyNavArea_C AnomalyNavArea.Default__AnomalyNavArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnomalyNavArea_C* UAnomalyNavArea_C::GetDefaultObj()
{
	static class UAnomalyNavArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnomalyNavArea_C*>(UAnomalyNavArea_C::StaticClass()->DefaultObject);

	return Default;
}

}


