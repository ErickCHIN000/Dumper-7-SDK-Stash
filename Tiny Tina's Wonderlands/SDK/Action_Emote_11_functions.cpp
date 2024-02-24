#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Emote_11.Action_Emote_11_C
// (None)

class UClass* UAction_Emote_11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Emote_11_C");

	return Clss;
}


// Action_Emote_11_C Action_Emote_11.Default__Action_Emote_11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Emote_11_C* UAction_Emote_11_C::GetDefaultObj()
{
	static class UAction_Emote_11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Emote_11_C*>(UAction_Emote_11_C::StaticClass()->DefaultObject);

	return Default;
}

}


