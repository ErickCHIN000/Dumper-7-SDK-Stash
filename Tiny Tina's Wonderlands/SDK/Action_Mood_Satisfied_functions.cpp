#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Mood_Satisfied.Action_Mood_Satisfied_C
// (None)

class UClass* UAction_Mood_Satisfied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Mood_Satisfied_C");

	return Clss;
}


// Action_Mood_Satisfied_C Action_Mood_Satisfied.Default__Action_Mood_Satisfied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Mood_Satisfied_C* UAction_Mood_Satisfied_C::GetDefaultObj()
{
	static class UAction_Mood_Satisfied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Mood_Satisfied_C*>(UAction_Mood_Satisfied_C::StaticClass()->DefaultObject);

	return Default;
}

}


