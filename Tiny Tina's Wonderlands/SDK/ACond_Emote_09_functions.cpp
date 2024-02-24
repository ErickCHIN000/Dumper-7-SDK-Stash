#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ACond_Emote_09.ACond_Emote_09_C
// (None)

class UClass* UACond_Emote_09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ACond_Emote_09_C");

	return Clss;
}


// ACond_Emote_09_C ACond_Emote_09.Default__ACond_Emote_09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UACond_Emote_09_C* UACond_Emote_09_C::GetDefaultObj()
{
	static class UACond_Emote_09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UACond_Emote_09_C*>(UACond_Emote_09_C::StaticClass()->DefaultObject);

	return Default;
}

}


