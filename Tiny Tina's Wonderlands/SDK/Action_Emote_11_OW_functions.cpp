#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Emote_11_OW.Action_Emote_11_OW_C
// (None)

class UClass* UAction_Emote_11_OW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Emote_11_OW_C");

	return Clss;
}


// Action_Emote_11_OW_C Action_Emote_11_OW.Default__Action_Emote_11_OW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Emote_11_OW_C* UAction_Emote_11_OW_C::GetDefaultObj()
{
	static class UAction_Emote_11_OW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Emote_11_OW_C*>(UAction_Emote_11_OW_C::StaticClass()->DefaultObject);

	return Default;
}

}


