#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Mood_Flirty.Action_Mood_Flirty_C
// (None)

class UClass* UAction_Mood_Flirty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Mood_Flirty_C");

	return Clss;
}


// Action_Mood_Flirty_C Action_Mood_Flirty.Default__Action_Mood_Flirty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Mood_Flirty_C* UAction_Mood_Flirty_C::GetDefaultObj()
{
	static class UAction_Mood_Flirty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Mood_Flirty_C*>(UAction_Mood_Flirty_C::StaticClass()->DefaultObject);

	return Default;
}

}


