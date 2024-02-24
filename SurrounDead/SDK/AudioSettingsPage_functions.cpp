#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AudioSettingsPage.AudioSettingsPage_C
// (None)

class UClass* UAudioSettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioSettingsPage_C");

	return Clss;
}


// AudioSettingsPage_C AudioSettingsPage.Default__AudioSettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAudioSettingsPage_C* UAudioSettingsPage_C::GetDefaultObj()
{
	static class UAudioSettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioSettingsPage_C*>(UAudioSettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}

}


