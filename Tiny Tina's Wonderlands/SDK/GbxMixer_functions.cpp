#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxMixer.GbxMixerSettings
// (None)

class UClass* UGbxMixerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMixerSettings");

	return Clss;
}


// GbxMixerSettings GbxMixer.Default__GbxMixerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMixerSettings* UGbxMixerSettings::GetDefaultObj()
{
	static class UGbxMixerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMixerSettings*>(UGbxMixerSettings::StaticClass()->DefaultObject);

	return Default;
}

}


