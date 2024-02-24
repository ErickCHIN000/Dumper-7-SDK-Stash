#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_AkAudioNotify_Death_Soldier.an_AkAudioNotify_Death_Soldier_C
// (None)

class UClass* UAn_AkAudioNotify_Death_Soldier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_AkAudioNotify_Death_Soldier_C");

	return Clss;
}


// an_AkAudioNotify_Death_Soldier_C an_AkAudioNotify_Death_Soldier.Default__an_AkAudioNotify_Death_Soldier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_AkAudioNotify_Death_Soldier_C* UAn_AkAudioNotify_Death_Soldier_C::GetDefaultObj()
{
	static class UAn_AkAudioNotify_Death_Soldier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_AkAudioNotify_Death_Soldier_C*>(UAn_AkAudioNotify_Death_Soldier_C::StaticClass()->DefaultObject);

	return Default;
}

}


