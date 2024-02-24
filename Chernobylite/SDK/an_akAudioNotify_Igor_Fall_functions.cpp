#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_akAudioNotify_Igor_Fall.an_akAudioNotify_Igor_Fall_C
// (None)

class UClass* UAn_akAudioNotify_Igor_Fall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_akAudioNotify_Igor_Fall_C");

	return Clss;
}


// an_akAudioNotify_Igor_Fall_C an_akAudioNotify_Igor_Fall.Default__an_akAudioNotify_Igor_Fall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_akAudioNotify_Igor_Fall_C* UAn_akAudioNotify_Igor_Fall_C::GetDefaultObj()
{
	static class UAn_akAudioNotify_Igor_Fall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_akAudioNotify_Igor_Fall_C*>(UAn_akAudioNotify_Igor_Fall_C::StaticClass()->DefaultObject);

	return Default;
}

}


