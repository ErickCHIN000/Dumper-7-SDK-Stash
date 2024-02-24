#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Crafting_Buttons.wid_Crafting_Buttons_C
// (None)

class UClass* UWid_Crafting_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Crafting_Buttons_C");

	return Clss;
}


// wid_Crafting_Buttons_C wid_Crafting_Buttons.Default__wid_Crafting_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Crafting_Buttons_C* UWid_Crafting_Buttons_C::GetDefaultObj()
{
	static class UWid_Crafting_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Crafting_Buttons_C*>(UWid_Crafting_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}

}


