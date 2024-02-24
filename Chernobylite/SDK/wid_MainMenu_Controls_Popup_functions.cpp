#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_Popup.wid_MainMenu_Controls_Popup_C
// (None)

class UClass* UWid_MainMenu_Controls_Popup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Controls_Popup_C");

	return Clss;
}


// wid_MainMenu_Controls_Popup_C wid_MainMenu_Controls_Popup.Default__wid_MainMenu_Controls_Popup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Controls_Popup_C* UWid_MainMenu_Controls_Popup_C::GetDefaultObj()
{
	static class UWid_MainMenu_Controls_Popup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Controls_Popup_C*>(UWid_MainMenu_Controls_Popup_C::StaticClass()->DefaultObject);

	return Default;
}

}


