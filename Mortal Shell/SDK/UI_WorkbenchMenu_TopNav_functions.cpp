#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WorkbenchMenu_TopNav.UI_WorkbenchMenu_TopNav_C
// (None)

class UClass* UUI_WorkbenchMenu_TopNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WorkbenchMenu_TopNav_C");

	return Clss;
}


// UI_WorkbenchMenu_TopNav_C UI_WorkbenchMenu_TopNav.Default__UI_WorkbenchMenu_TopNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WorkbenchMenu_TopNav_C* UUI_WorkbenchMenu_TopNav_C::GetDefaultObj()
{
	static class UUI_WorkbenchMenu_TopNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WorkbenchMenu_TopNav_C*>(UUI_WorkbenchMenu_TopNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


