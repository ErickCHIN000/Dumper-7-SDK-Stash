#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_Controller.Grutch_Controller_C
// (Actor)

class UClass* AGrutch_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_Controller_C");

	return Clss;
}


// Grutch_Controller_C Grutch_Controller.Default__Grutch_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_Controller_C* AGrutch_Controller_C::GetDefaultObj()
{
	static class AGrutch_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_Controller_C*>(AGrutch_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


