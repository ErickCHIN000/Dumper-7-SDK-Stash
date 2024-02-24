#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Mood_Determined.Action_Mood_Determined_C
// (None)

class UClass* UAction_Mood_Determined_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Mood_Determined_C");

	return Clss;
}


// Action_Mood_Determined_C Action_Mood_Determined.Default__Action_Mood_Determined_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Mood_Determined_C* UAction_Mood_Determined_C::GetDefaultObj()
{
	static class UAction_Mood_Determined_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Mood_Determined_C*>(UAction_Mood_Determined_C::StaticClass()->DefaultObject);

	return Default;
}

}


