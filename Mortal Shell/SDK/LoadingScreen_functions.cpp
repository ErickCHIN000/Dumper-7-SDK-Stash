#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LoadingScreen.LoadingScreenSettings
// (None)

class UClass* ULoadingScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenSettings");

	return Clss;
}


// LoadingScreenSettings LoadingScreen.Default__LoadingScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingScreenSettings* ULoadingScreenSettings::GetDefaultObj()
{
	static class ULoadingScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenSettings*>(ULoadingScreenSettings::StaticClass()->DefaultObject);

	return Default;
}

}


