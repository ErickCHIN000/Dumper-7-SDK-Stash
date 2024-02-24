#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioMixerWwise.AudioMixerWwiseSettings
// (None)

class UClass* UAudioMixerWwiseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMixerWwiseSettings");

	return Clss;
}


// AudioMixerWwiseSettings AudioMixerWwise.Default__AudioMixerWwiseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMixerWwiseSettings* UAudioMixerWwiseSettings::GetDefaultObj()
{
	static class UAudioMixerWwiseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMixerWwiseSettings*>(UAudioMixerWwiseSettings::StaticClass()->DefaultObject);

	return Default;
}

}


