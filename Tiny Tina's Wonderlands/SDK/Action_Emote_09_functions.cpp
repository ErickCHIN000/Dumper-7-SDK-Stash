#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Emote_09.Action_Emote_09_C
// (None)

class UClass* UAction_Emote_09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Emote_09_C");

	return Clss;
}


// Action_Emote_09_C Action_Emote_09.Default__Action_Emote_09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Emote_09_C* UAction_Emote_09_C::GetDefaultObj()
{
	static class UAction_Emote_09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Emote_09_C*>(UAction_Emote_09_C::StaticClass()->DefaultObject);

	return Default;
}

}


