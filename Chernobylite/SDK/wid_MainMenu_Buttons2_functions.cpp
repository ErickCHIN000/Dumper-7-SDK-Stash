#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Buttons2.wid_MainMenu_Buttons2_C
// (None)

class UClass* UWid_MainMenu_Buttons2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Buttons2_C");

	return Clss;
}


// wid_MainMenu_Buttons2_C wid_MainMenu_Buttons2.Default__wid_MainMenu_Buttons2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Buttons2_C* UWid_MainMenu_Buttons2_C::GetDefaultObj()
{
	static class UWid_MainMenu_Buttons2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Buttons2_C*>(UWid_MainMenu_Buttons2_C::StaticClass()->DefaultObject);

	return Default;
}

}


