#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ACond_Emote_11.ACond_Emote_11_C
// (None)

class UClass* UACond_Emote_11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ACond_Emote_11_C");

	return Clss;
}


// ACond_Emote_11_C ACond_Emote_11.Default__ACond_Emote_11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UACond_Emote_11_C* UACond_Emote_11_C::GetDefaultObj()
{
	static class UACond_Emote_11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UACond_Emote_11_C*>(UACond_Emote_11_C::StaticClass()->DefaultObject);

	return Default;
}

}


