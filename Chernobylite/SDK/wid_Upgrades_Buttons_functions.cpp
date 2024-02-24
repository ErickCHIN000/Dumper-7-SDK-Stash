#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Upgrades_Buttons.wid_Upgrades_Buttons_C
// (None)

class UClass* UWid_Upgrades_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Upgrades_Buttons_C");

	return Clss;
}


// wid_Upgrades_Buttons_C wid_Upgrades_Buttons.Default__wid_Upgrades_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Upgrades_Buttons_C* UWid_Upgrades_Buttons_C::GetDefaultObj()
{
	static class UWid_Upgrades_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Upgrades_Buttons_C*>(UWid_Upgrades_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}

}


