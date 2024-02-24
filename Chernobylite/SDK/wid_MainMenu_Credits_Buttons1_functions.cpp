#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Credits_Buttons1.wid_MainMenu_Credits_Buttons1_C
// (None)

class UClass* UWid_MainMenu_Credits_Buttons1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Credits_Buttons1_C");

	return Clss;
}


// wid_MainMenu_Credits_Buttons1_C wid_MainMenu_Credits_Buttons1.Default__wid_MainMenu_Credits_Buttons1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Credits_Buttons1_C* UWid_MainMenu_Credits_Buttons1_C::GetDefaultObj()
{
	static class UWid_MainMenu_Credits_Buttons1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Credits_Buttons1_C*>(UWid_MainMenu_Credits_Buttons1_C::StaticClass()->DefaultObject);

	return Default;
}

}


