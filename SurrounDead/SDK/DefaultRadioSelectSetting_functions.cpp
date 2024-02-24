#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultRadioSelectSetting.DefaultRadioSelectSetting_C
// (None)

class UClass* UDefaultRadioSelectSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultRadioSelectSetting_C");

	return Clss;
}


// DefaultRadioSelectSetting_C DefaultRadioSelectSetting.Default__DefaultRadioSelectSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultRadioSelectSetting_C* UDefaultRadioSelectSetting_C::GetDefaultObj()
{
	static class UDefaultRadioSelectSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultRadioSelectSetting_C*>(UDefaultRadioSelectSetting_C::StaticClass()->DefaultObject);

	return Default;
}

}


