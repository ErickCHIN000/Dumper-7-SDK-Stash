#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Mood_Suffering.Action_Mood_Suffering_C
// (None)

class UClass* UAction_Mood_Suffering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Mood_Suffering_C");

	return Clss;
}


// Action_Mood_Suffering_C Action_Mood_Suffering.Default__Action_Mood_Suffering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Mood_Suffering_C* UAction_Mood_Suffering_C::GetDefaultObj()
{
	static class UAction_Mood_Suffering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Mood_Suffering_C*>(UAction_Mood_Suffering_C::StaticClass()->DefaultObject);

	return Default;
}

}


