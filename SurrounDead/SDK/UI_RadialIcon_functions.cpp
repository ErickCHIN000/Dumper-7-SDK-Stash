#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_RadialIcon.UI_RadialIcon_C
// (None)

class UClass* UUI_RadialIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_RadialIcon_C");

	return Clss;
}


// UI_RadialIcon_C UI_RadialIcon.Default__UI_RadialIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_RadialIcon_C* UUI_RadialIcon_C::GetDefaultObj()
{
	static class UUI_RadialIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_RadialIcon_C*>(UUI_RadialIcon_C::StaticClass()->DefaultObject);

	return Default;
}

}


