#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VoiceChatSpeakerEntry_Object.BP_VoiceChatSpeakerEntry_Object_C
// (None)

class UClass* UBP_VoiceChatSpeakerEntry_Object_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VoiceChatSpeakerEntry_Object_C");

	return Clss;
}


// BP_VoiceChatSpeakerEntry_Object_C BP_VoiceChatSpeakerEntry_Object.Default__BP_VoiceChatSpeakerEntry_Object_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VoiceChatSpeakerEntry_Object_C* UBP_VoiceChatSpeakerEntry_Object_C::GetDefaultObj()
{
	static class UBP_VoiceChatSpeakerEntry_Object_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VoiceChatSpeakerEntry_Object_C*>(UBP_VoiceChatSpeakerEntry_Object_C::StaticClass()->DefaultObject);

	return Default;
}

}


