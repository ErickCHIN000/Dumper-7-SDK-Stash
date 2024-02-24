#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_akAudioNotify__melee_AK47_idle.an_akAudioNotify__melee_AK47_idle_C
// (None)

class UClass* UAn_akAudioNotify__melee_AK47_idle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_akAudioNotify__melee_AK47_idle_C");

	return Clss;
}


// an_akAudioNotify__melee_AK47_idle_C an_akAudioNotify__melee_AK47_idle.Default__an_akAudioNotify__melee_AK47_idle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_akAudioNotify__melee_AK47_idle_C* UAn_akAudioNotify__melee_AK47_idle_C::GetDefaultObj()
{
	static class UAn_akAudioNotify__melee_AK47_idle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_akAudioNotify__melee_AK47_idle_C*>(UAn_akAudioNotify__melee_AK47_idle_C::StaticClass()->DefaultObject);

	return Default;
}

}


