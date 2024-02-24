#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass an_akAudioNotify_PortalGenerator_Hide.an_akAudioNotify_PortalGenerator_Hide_C
// (None)

class UClass* UAn_akAudioNotify_PortalGenerator_Hide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("an_akAudioNotify_PortalGenerator_Hide_C");

	return Clss;
}


// an_akAudioNotify_PortalGenerator_Hide_C an_akAudioNotify_PortalGenerator_Hide.Default__an_akAudioNotify_PortalGenerator_Hide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAn_akAudioNotify_PortalGenerator_Hide_C* UAn_akAudioNotify_PortalGenerator_Hide_C::GetDefaultObj()
{
	static class UAn_akAudioNotify_PortalGenerator_Hide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAn_akAudioNotify_PortalGenerator_Hide_C*>(UAn_akAudioNotify_PortalGenerator_Hide_C::StaticClass()->DefaultObject);

	return Default;
}

}


