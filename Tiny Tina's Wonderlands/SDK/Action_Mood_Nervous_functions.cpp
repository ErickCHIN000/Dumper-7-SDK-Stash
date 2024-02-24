#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Mood_Nervous.Action_Mood_Nervous_C
// (None)

class UClass* UAction_Mood_Nervous_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Mood_Nervous_C");

	return Clss;
}


// Action_Mood_Nervous_C Action_Mood_Nervous.Default__Action_Mood_Nervous_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Mood_Nervous_C* UAction_Mood_Nervous_C::GetDefaultObj()
{
	static class UAction_Mood_Nervous_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Mood_Nervous_C*>(UAction_Mood_Nervous_C::StaticClass()->DefaultObject);

	return Default;
}

}


