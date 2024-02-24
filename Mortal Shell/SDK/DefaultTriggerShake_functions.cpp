#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultTriggerShake.DefaultTriggerShake_C
// (None)

class UClass* UDefaultTriggerShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultTriggerShake_C");

	return Clss;
}


// DefaultTriggerShake_C DefaultTriggerShake.Default__DefaultTriggerShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultTriggerShake_C* UDefaultTriggerShake_C::GetDefaultObj()
{
	static class UDefaultTriggerShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultTriggerShake_C*>(UDefaultTriggerShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


