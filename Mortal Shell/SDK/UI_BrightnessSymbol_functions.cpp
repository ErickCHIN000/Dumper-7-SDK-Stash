#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BrightnessSymbol.UI_BrightnessSymbol_C
// (None)

class UClass* UUI_BrightnessSymbol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BrightnessSymbol_C");

	return Clss;
}


// UI_BrightnessSymbol_C UI_BrightnessSymbol.Default__UI_BrightnessSymbol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BrightnessSymbol_C* UUI_BrightnessSymbol_C::GetDefaultObj()
{
	static class UUI_BrightnessSymbol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BrightnessSymbol_C*>(UUI_BrightnessSymbol_C::StaticClass()->DefaultObject);

	return Default;
}

}


