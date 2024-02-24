#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Customization_Emote.BPClass_Customization_Emote_C
// (Actor)

class UClass* ABPClass_Customization_Emote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Customization_Emote_C");

	return Clss;
}


// BPClass_Customization_Emote_C BPClass_Customization_Emote.Default__BPClass_Customization_Emote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Customization_Emote_C* ABPClass_Customization_Emote_C::GetDefaultObj()
{
	static class ABPClass_Customization_Emote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Customization_Emote_C*>(ABPClass_Customization_Emote_C::StaticClass()->DefaultObject);

	return Default;
}

}


